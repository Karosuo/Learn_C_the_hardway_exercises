#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
// Function Prototypes
int can_print_it(char ch);
void print_letters(char arg[], int arg_len);

void print_arguments(int argc, char *argv[])
{
    int i = 0;

    for (i = 0; i < argc; i++)
    {
        print_letters(argv[i], strlen(argv[i]));
    }
}

void print_letters(char arg[], int arg_len)
{
    int i = 0;

    // Check if the pointer is set to null (\x0)
    if (arg != NULL)
    {

        for (i = 0; i < arg_len; i++)
        {
            char ch = arg[i];

            if (can_print_it(ch))
            {
                printf("'%c' == %d ", ch, ch);
            }
        }

        printf("\n");
    }
}

int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch) || isdigit(ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}