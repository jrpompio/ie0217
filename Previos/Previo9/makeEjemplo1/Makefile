# Nombre del programa de salida
TARGET = estudiantes.exe

# Selección de copilador
CXX = g++

# Opciones de copilación 
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES = main.cpp students.cpp function.cpp

# Lista de archivos objeto generados
OBJECTS = $(SOURCES:.cpp=.o)

# Regla para copilar los archivos fuente en archivos objeto
%.o: %.cpp
  # SI SE USAN ESPACIOS se puede comentar así y no afectan las instruciones
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para copilar el programa a partir de los archivos objeto
$(TARGET): $(OBJECTS)
	# Si se usa con tab, aparecerá como instrucción al ejecutar la regla
	# Si afectan las instrucciones, ya que esto aparece al copilar
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)
  # Usando make por recursión aparecera un decorador para indicar los niveles
  # en los que se está ejecutando un comando de make dentro de otro.
	make run
	
clean:
	rm $(TARGET) $(OBJECTS)
run: 
	./$(TARGET)
	make ekko
ekko:
	# HOLA DESDE NIVEL 2
