#include<stdio.h>
int main()
{
    int R;
    double V;
    scanf("%d", &R);
    V = ((4.0 / 3) *3.14159 * R * R * R);
    printf("VOLUME = %.3lf\n", V);
    return 0;
}
