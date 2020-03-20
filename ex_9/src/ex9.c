#include <stdio.h>

int main(int argc, char * argv[])
{
	int i = 25;
	while(i > 0)
	{
		printf("%d\n", i);		
		
		if( (i % 2) == 0 )
		{
			printf("Breaking...\n");
			continue; // Run forever
		}
		
		i--;
	}
	
	return 0;
}
