#include <stdio.h>
#include <stdint.h>

int main()
{
  uint8_t counter = 0;
  while(counter<10)
  {
    if(counter == 5)
    {
      break;
    }
    printf("counter: %d\n", counter);
    counter++;
  }
  return 0;
}
