# Al escribir make en la terminal se ejecuta este comando por default
all: lab4Separado		 # Acá se indica cual regla se ejecutará por defecto
                         # al hacer "make"

lab4Separado: mainlab4.cpp # Archivos necesarios para ejecutar esta regla
# Comandos a ejecutar indentados con tab puro, no espacios
		g++ -o salida.exe *lab4.cpp
		./salida.exe
		rm salida.exe

lab4UnSoloArchivo: main.cpp # Archivos necesarios para ejecutar esta regla
# Comandos a ejecutar indentados con tab puro, no espacios
		g++ -o salida.exe main.cpp
		./salida.exe
		rm salida.exe