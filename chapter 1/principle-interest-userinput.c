#include <stdio.h>
int main ()
{
    int p, n;
    float si, r;
    printf("Enter the value of Principal\n");
    printf("Enter the value of number of day\n");
    printf("Enter the value of rate of interest\n");
    scanf("%d %d %f", &p, &n, &r);
    si = p*n*r/100;
    printf("Simple interest: %f", si);
    return 0;

}