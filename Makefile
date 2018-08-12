CFLAGS = -Wall -g -O3
INCLUDES = 
OBJECTS = 

vpath %.cpp src
vpath %.hpp include

all: ${OBJECTS} ${INCLUDES}
	gcc src/main.cpp -o tw ${OBJECTS} -lm

clean:
	rm -f *~
	rm -f #*#
	rm -f *.o
