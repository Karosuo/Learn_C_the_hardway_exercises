#include <stdio.h>
#include <stdint.h>

int main(int argc, char * argv[])
{
	enum {name_size=4, number_size=4};	
	
	int numbers[number_size] = {0};
	char name[name_size] = { 'a' };
	
	//first, print them out raw
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	
	printf("name: %s\n", name);
	
	//print what's on memory for the 'name'
	int idx = 0;
	
	printf("'name' values in ascii:-----------\n");
	
	for(idx=0; idx<name_size; idx++)
	{
		printf("(idx %d): %c\n", idx, name[idx]);
	}
	
	printf("'name' values in integers:-----------\n");
	
	for(idx=0; idx<name_size; idx++)
	{
		printf("(idx %d): %d\n", idx, name[idx]);
	}
	
	printf("END printed stages-----------\n");
	
	// set up the numbers	
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	
	// set up the name
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';
	
	// then print them out initialized
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	
	// print the name lie a string
	printf("name: %s\n", name);
	
	// another way to use 'name'
	char *another = "Zed";
	
	printf("another: %s", another);

	printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);
	
	return 0;
}
