#include <stdio.h>

int main(void)
{
    double a;
    double b;
    scanf("%lf", &a);
    scanf("%lf", &b);

    printf("%.9lf\n", a / b);

    return 0;
}
