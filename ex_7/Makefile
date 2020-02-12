CC = gcc
# -g for add debug info on the compile
# -Wall is show all Warning flags
CFLAGS=-Wall -g

# Define the full project compilation targets, as this is just one, that's it
all: ex7

ex7: ./src/ex_7.c
	$(CC) $(CFLAGS) -o ex7 ./src/ex_7.c


# When 'make clean' is executed, deleted the compiled file
clean:
	rm -r ex7
