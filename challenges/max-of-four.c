#include <stdio.h>
/*
Take four numbers separated by a space and find the highest number
*/

int max_of_four(int a, int b, int c, int d);

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d\n", ans);

    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    int max1;
    int max2;

    return (max1 = a > b ? a : b) > (max2 = c > d ? c : d) ? max1 : max2;
}
