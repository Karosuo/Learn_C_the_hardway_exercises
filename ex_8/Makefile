CC = gcc
# -g for add debug info on the compile
# -Wall is show all Warning flags
CFLAGS=-Wall -g

# Define the full project compilation targets, as this is just one, that's it
target=ex8
all: $(target)

$(target): ./src/$(target).c
	$(CC) $(CFLAGS) -o $(target) ./src/$(target).c


# When 'make clean' is executed, deleted the compiled file
clean:
	rm -r $(target)
