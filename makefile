# Divine Gbagi - Assignment 4

EXE = prog4
CC = g++
OBJECTS = main.o bitType.o
LFLAGS = 

CFLAGS = 

$(EXE):         $(OBJECTS)      
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:         main.cpp bitType.h
		$(CC) $(CFLAGS) -c main.cpp

bitType.o:    	bitType.cpp bitType.h
		$(CC) $(CFLAGS) -c bitType.cpp

clean:
		rm -rf $(EXE) $(OBJECTS) *~
