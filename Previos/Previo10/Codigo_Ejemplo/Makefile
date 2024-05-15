CXX = g++
CXXFLAGS = -Wall -std=c++11
LDFLAGS = `wx-config --cppflags --libs`

SOURCES = $(wildcard *.cpp)

OBJECTS = $(SOURCES:.cpp=.o)

EXECUTABLE = SALIDA.exe

ALL: $(EXECUTABLE) run

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(LDFLAGS)

.PHONY: run clean
run: 
	./$(EXECUTABLE)
clean:
	rm $(EXECUTABLE)