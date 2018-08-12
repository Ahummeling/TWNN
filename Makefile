CC=gcc
CFLAGS=-Wall -g -O3
INCLUDES=includes/data.hpp

OBJECTS=Formulas.o

all: ${OBJECTS} ${INCLUDES}
	gcc -o tw  ${OBJECTS} -lm

clean:
	rm -f *~
	rm -f #*#
	rm -f *.o
