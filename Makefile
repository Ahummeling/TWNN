CFLAGS = -Wall -g -O3
INCLUDES = data.hpp
OBJECTS = 
SRC = src/main.cpp src/logic.cpp src/formulas.cpp

vpath %.cpp src
vpath %.hpp include

all: ${OBJECTS} ${INCLUDES}
	g++ $(SRC) -o tw ${OBJECTS} -lm

clean:
	rm -f *~
	rm -f #*#
	rm -f *.o
