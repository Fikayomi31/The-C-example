#include <stdio.h>
/**
 * main - print the table of fahrenheit temparatures and
 * their centigrade or celsius equivalents
 * @formular: C - (5 / 9) (F -31)
 * Return: Always 0
*/
int main(void)
{
    int lower = 0; /* lower limit of temperature*/
    int upper = 300; /* upper limit*/
    int step = 20; /*strp size*/
    int fahr, celsisus;

    fahr = lower;
    while (fahr <= upper)
    {
        celsisus = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsisus);
        fahr += step;
    }
}