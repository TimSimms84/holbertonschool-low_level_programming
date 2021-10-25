#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * positive_or_negative - Entry point
 *
 * Return: always 0 (success)
 *@i: variable to check
 *
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%i is positive\n", i);
}
else if (i < 0)
{
printf("%i is negative\n", i);
}
else if (i == 0)
{
printf("%i is zero\n", i);
}
}
