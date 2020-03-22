#include <stdio.h>
#include <ctype.h>

int main(int argc, char * argv[])
{
	if(argc != 2)
	{
		printf("ERROR: You need at leat one argument.\n");
		// this is how you abort a program (added, '...with an error')
		return 1; 
	}
	
	int i = 0;
	// Start with the second vector element, since first is the program file name
	for(i = 0; argv[1][i] != '\0'; i++)
	{
		char letter = argv[1][i];
		letter = tolower(letter);
		
		switch(letter)
		{
			case 'a':
				printf("%d: 'A'\n", i);
				break;
			
			case 'e':
				printf("%d: 'E'\n", i);
				break;
			
			case 'i':
				printf("%d: 'I'\n", i);
				break;
			
			case 'o':
				printf("%d: 'O'\n", i);
				break;
			
			case 'u':
				printf("%d: 'U'\n", i);
				break;
			
			case 'y':
				if(i>2)
				{
					printf("%d: 'Y'\n", i);
				}				
				break;
				
			default:
				printf("%d: %c is not a vowel\n", i, letter);
		}
	}
	
	return 0;
}
