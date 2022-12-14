#include <stdio.h>
#include <stdlib.h>
/**
 *main - fibonacii sequense
 *Return: Alwayes 0 (Success)
*/



int main(void)

{

    int x, y, z;



    while(1)
{

        x = 0;

        y = 1;
        do {

            printf("%d\n", x);

            z = x + y;

            x = y;

            y = z;



    } while (x<50);

    }



}


