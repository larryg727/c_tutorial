#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void get_row(int n, int row);

int main()
{

    int n;
    int row;

    scanf("%d", &n);
    for (row = (n-1); row > -n; --row)
        get_row(n, abs(abs(row) + 1 - n));
    return 0;
}

void get_row(int n, int row)
{
    int i;
    int min;
    min = n - row;
    for (i = (n - 1); i > -n; --i)
        printf("%d ", ((abs(i) + 1) > min ? (abs(i) + 1) : min));
    printf("\n");
}
