#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
		/*we should put this line i +=1 to avoid the infinite loop*/
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
