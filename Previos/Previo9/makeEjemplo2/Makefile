# Nombre del programa de salida
TARGET = EMPLEADO.exe

# Selección de copilador
CXX = g++

# Opciones de copilación 
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES = EmpleadoAsalariado.cpp Empleado.cpp EmpleadoPorhoras.cpp main.cpp

# Lista de archivos objeto generados
OBJECTS = $(SOURCES:.cpp=.o)

# Regla para copilar los archivos fuente en archivos objeto
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para copilar el programa a partir de los archivos objeto
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)
	make run
.PHONY: clean
clean:
	rm $(TARGET) $(OBJECTS)
run:
	./$(TARGET)
