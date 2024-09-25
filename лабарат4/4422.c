#include <stdio.h>

int main()
{
    int a = 11, b = 3;
    int x;
    float y;
    double z;
    x = a / b;
    y = a / b;
    z = a / b;
    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("z = %lf\n", z);
    printf("float: %f\n", (float)a / b);
    printf("double: %lf\n", (double)a / b);
    return 0;
}