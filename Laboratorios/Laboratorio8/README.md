Group 7

## HOSPITAL:

### EASY:
  
#### 1. Show all columns for patients who have one of the following patient_ids: 1,45,534,879,1000 ---> Daniel

        SELECT * FROM patients -- Agarra toda la información de la tabla patients
        WHERE patient_id IN (1, 45, 534, 879, 1000);  -- Busca todas las columnas de los pacientes que tienen alguno de esos números como patient_id


#### 2. Show the total number of admissions. ---> junior
    
        SELECT COUNT(*) 				-- Contando todas las filas
        AS total_admissions				-- Mostrando resultado con etiqueta total_admissions
        FROM admissions;  				-- Selecionando tabla

### MEDIUM:
    
#### 1. Show first name, last name and role of every person that is either patient or doctor. ---> Chris
        The roles are either "Patient" or "Doctor" 
        --Seleccionamos nombre y apellido , se agrega paciente como role porque no existe
        -- se utiliza la union para unir 2 tablas verdad y se seleccionan de la otra tabla lo mismo nombre y apellido			
        Select first_name,last_name, 'Patient' as role from patients
        union ALL 
        select first_name,last_name, 'Doctor' From doctors;
       
       
       
#### 2. Display the total amount of patients for each province. Order by descending. -----> Caleb
        --Seleccionar columna province name
        SELECT  province_name,
        -- Contar el numero de pacientes en la columna 
        COUNT(*) AS num_patients FROM patients patient
        --  Unir las columnas 
        JOIN province_names province ON province.province_id = patient.province_id
        --Agrupar por provincias 
        GROUP BY province.province_id
        -- Ordenar de manera descendiente
        ORDER BY patient_count DESC
      	
    
#### 3. Show the total amount of male patients and the total amount of female patients in the patients table. Display the two results in the same row. ---> Daniel
        SELECT SUM(gender = 'M') AS male_total, SUM(gender = 'F') AS female_total -- Suma la cantidad de pacientes por género y se le pone su propio título
        FROM patients
        
#### 4. Show patient_id and first_name from patients where their first_name start and ends with 's' and is at least 6 characters long. ----> Junior

        SELECT
          patient_id,						-- Selecionando columna patient_id
          first_name						-- también columna first_name
        FROM patients						-- Selecionando tabla pacientes
        /* 	cuyos nombres empiezan y terminan en 's'
        	esto se logra usando LIKE y pasandole como parametro
            's____%s'
        	se nota que empieza con s
        	le siguien 4 caracteres '_'
        	le sigue un % que significa que obtenga todo caracter
            y finaliza con s
        	Las dos 's' y los 4 '_' dan 6 carácteres, siendo este el minimo
        */
        WHERE first_name LIKE 's____%s';


###	HARD: 
  
#### 1. Show the provinces that has more patients identified as 'M' than 'F'. Must only show full province_name ----> Junior 

        select province_name		-- Seleccionando fila
        from province_names 		-- selencionando tabla
        where province_id IN 		-- Sustrayendo Datos usando ID como parametro

        /* 	Acá los datos son sustraidos usando el foreing key que va desde
        	la tabla patiens hasta la tabla province_names
            que es province_id, estos se agrupan mediante este y despué
            se cuentan los pacientes que tienen el genero 'M'

        	Se sustraeran de una sub tabla
        */

        (
          select province_id		-- Selencionando fila
          from patients				-- selecionando tabla
          group by province_id			-- Agrupando por province_id
          having sum(gender = 'M')	-- Se tiene que se escogen los cuales la suma
          > Sum(gender = 'F')			-- de los pacientes genero M sea mayor
          								-- que la de los pacientes genero F
        )

    
    
    
#### 2. We are looking for a specific patient. Pull all columns for the patient who matches the following criteria: ---> Chris

	        - First_name contains an 'r' after the first two letters.
	        - Identifies their gender as 'F'
	        - Born in February, May, or December
	        - Their weight would be between 60kg and 80kg
	        - Their patient_id is an odd number
	        - They are from the city 'Kingston'


	        --seleccionamos toda la tabla porque buscamos un paciente en especifico
	        -- simplemente empezamos a buscar con where los valores que nos piden
	        -- para regex usamos LIKE
	        --y asi sucesivamente
            SELECT *
            FROM patients
            WHERE
            first_name LIKE '__r%'
            AND patient_id % 2 = 1
            AND city = 'Kingston'
            AND gender = 'F'
            AND weight BETWEEN 60 AND 80
            AND MONTH(birth_date) IN (2, 5, 12)
            AND patient_id % 2 = 1;
  


## NORTHWIND:
### EASY:  
#### 1. Show the category_name and description from the categories table sorted by category_name. -------> Caleb
        -- Seleccionar nombre y descripción de la tabla categoría
        SELECT category_name, descriptions FROM categories
        -- Ordenar por el nombre de categoría
        ORDER BY category_name
    
    
#### 2. Show all the even numbered Order_id from the orders table ---> Chris
    
        --seleccionamos la columna de order_id de la tabla de orders
        SELECT order_id
        	FROM orders
        	WHERE order_id % 2 = 0;
    
    
#### 3. Show the first_name, last_name. hire_date of the most recently hired employee. ---> Junior 
    
        select 
            first_name,		-- Selecionando columna first_name
            last_name,		-- Selecionando columna last_name
        max(hire_date)		-- Importando la fila que contenga el mayor hire_date
        	as hire_date	-- Mostrando resultado con la etiqueta hire_date
        from employees		-- desde la tabla employees

###	MEDIUM:
  	
#### 1. Show the ProductName, CompanyName, CategoryName from the products, suppliers, and categories table. ---> Daniel
    
        SELECT products.product_name, suppliers.company_name, categories.category_name -- Selecciona el nombre del producto, compañía y categoría
        FROM products
        JOIN suppliers
        ON products.supplier_id = suppliers.supplier_id --Se realiza una unión entre 
        JOIN categories 
        On products.category_id = categories.category_id;
#### 2. Show the category_name and the average product unit price for each category rounded to 2 decimal places. -----> Caleb
        -- Seleccionar el nombre de categoría y extraer el precio promedio por unidad de la tabla categories y de la tabla products respectivamente
        SELECT cat.category_name, ROUND(AVG(prices.unit_price, 2)) AS avg_unit_price FROM products prices
        -- Unir ambas columnas para observar los datos
        JOIN categories cat ON cat.category_id = prices.Category_id
        -- Ordenarlos por el nombre de categoría 
        GROUP BY cat.category_name
    	
    	
    
#### 3. Show the city, company_name, contact_name from the customers and suppliers table merged together. --> Chris
        Create a column which contains 'customers' or 'suppliers' depending on the table it came from.
        --seleecionamos de la tabla de clientes ciudad,company_name , segun de donde se tomo el dato se hara una columna de customer o suppliers
        -- por eso el customers AS relationship
        -- y unimos con union ara que no se repitan en ambos lados 
        select City, company_name, contact_name, 'customers' as relationship 
        from customers
        union
        select city, company_name, contact_name, 'suppliers'
        from suppliers

### HARD:
  
#### 1. Show the employee's first_name and last_name, a "num_orders" column with a count of the orders taken, and a column called "Shipped" that displays "On Time" if the order shipped_date is less or equal to the required_date, "Late" if the order shipped late. Order by employee last_name, then by first_name, and then descending by number of orders. ---> Daniel
    
#### 2. Show how much money the company lost due to giving discounts each year, order the years from most recent to least recent. Round to 2 decimal places -----> Caleb

        -- Encontrar las ordenes por año y la cantidad de descuentos en ese año
        Select YEAR(orderTime.order_date) AS 'order_year' , 
        ROUND(SUM(prod.unit_price * orden.quantity * orden.discount),2) AS 'discount_amount'
        -- Unir las columnas en una tabla nueva desplegando los años y los montos
        FROM orders orderTime 
        JOIN order_details orden ON orderTime.order_id = orden.order_id
        JOIN products prod ON orden.product_id = prod.product_id
        -- Agrupar y mostrar de manera descendentemente
        GROUP BY YEAR(orderTime.order_date)
        ORDER BY order_year desc;
		   