CC = g++
OBJ = queue.o stack.o main.o

prog: $(OBJ)
	$(CC) $(OBJ) -o $@

.cpp.o:
	$(CC) -c $<

clean: 
	rm *.o prog
