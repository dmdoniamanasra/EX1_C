CC = gcc
AR = ar
FLAGS = -Wall -g
OBJECTS_MAIN = main.o
OBJECT_LOOP = basicClassification.o advancedClassificationLoop.o
OBJECT_REC = basicClassification.o advancedClassificationRecursion.o	main.o
MATH = -lm

all: loops loopd recursives recursived mains maindloop maindrec
loops: libclassloops.a 
loopd: libclassloops.so
libclassloops.a: $(OBJECT_LOOP) 
		$(AR)	-rcs	libclassloops.a $(OBJECT_LOOP)
libclassloops.so: $(OBJECT_LOOP) 
		$(CC) -shared -o libclassloops.so $(OBJECT_LOOP)
recursives: libclassrec.a
recursived: libclassrec.so
libclassrec.a: $(OBJECT_REC) 
		$(AR)	-rcs	libclassrec.a $(OBJECT_REC) 
libclassrec.so: $(OBJECT_REC) 
		$(CC)	-shared	-o	libclassrec.so $(OBJECT_REC)
mains: $(OBJECTS_MAIN) libclassrec.a
		$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a
maindloop: $(OBJECTS_MAIN)	libclassloops.so
		$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so
maindrec: $(OBJECTS_MAIN)
		$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so
main.o: main.c NumClass.h
		$(CC) $(FLAGS) -c main.c
basicClassification.o: basicClassification.c NumClass.h
		$(CC) $(FLAGS) -c basicClassification.c
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
		$(CC) $(FLAGS) -c advancedClassificationLoop.c
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
		$(CC) $(FLAGS) -c advancedClassificationRecursion.c
.PHONY: clean all
Clean:
		rm -f *.o *.a *.so mains maindloop maindrec looped recursive loops recursived