#include <stdio.h>
/**
 * main - copy input to output
 * @EOF: end of file 
 * Return: 0
*/
int main(void)
{
    int c;
    c = getchar(); /* taking input*/
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}