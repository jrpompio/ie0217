### Ubicado en el directorio del laboratorio 7
#### Para copilar
        make
#### Para limpiar la carpeta bin
        make clean
##### Para ejecutar
        ./bin/textprocessor -f data/input.txt -o data/output.txt -search "palabra_a_buscar" -replace "palabra_a_reemplazar"

##### El Makefile contiene la instrucción rm
##### Si se desea ejecutar en windows cambiar rm por del
##### Se deben crear los directorios "data" y "bin" en caso de no existir
##### Data contiene input.txt y output.txt
##### input.txt 
        contiene el texto que se desea analizar para reemplazar la palabra
##### output.txt 
        contiene el texto ya reemplazado después de ejecutar el binario con la palabra reemplazada
