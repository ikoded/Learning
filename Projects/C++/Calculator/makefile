CXX = g++
CXXFLAGS = -Wall -std=c++17 -I./include

SOURCES = src/main.cpp src/Calculator.cpp src/Operations.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = calculator.exe

all : $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

.PHONY: all clean