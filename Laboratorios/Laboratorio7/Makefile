# Argumento para seleccionar copilador
CXX = g++
# Banderas necesarias para el copilador
CXXFLAGS = -Wall -std=c++11
# Bandera necesaria para biblioteca
LDFLAGS = -lstdc++fs

# Direcciones de fuente y salida de binarios
SRC_DIR = src
BIN_DIR = bin

# Argumento SOURCES que contendrá los archivos fuente
# wildcard para sustraer los nombres de los archivos en el directorio src
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)

# Argumento OBJECTS que contendrá los archivos de objeto
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.o)

# Argumento EXECUTABLE que contendrá la dirección
# y nombre de salida del ejecutable
EXECUTABLE = $(BIN_DIR)/textprocessor

# Regla default para general el ejecutable
ALL: $(EXECUTABLE)

# Regla para generar el ejecutable
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS)

# Regla para generar los archivos objeto
$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar los archivos objeto y el ejecutable
clean:
	rm -r $(BIN_DIR)/*
