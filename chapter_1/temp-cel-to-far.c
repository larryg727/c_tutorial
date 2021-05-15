#include <stdio.h>

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 10;

    celsius = lower;
    printf("   C     F\n\n");
    while (celsius <= upper)
    {
        fahr = celsius * (9.0/5.0) + 32;
        printf("%3d %6d\n", celsius, fahr);
        celsius = celsius + step;
    }
}
