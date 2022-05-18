#include <stdio.h>
#include <math.h>

int main()
{
    double p, r, ti, CI;

    /* Input principle, time and rate */
    //printf("Enter principle (amount): ");
    scanf("%lf", &p);

    //printf("Enter time: ");
    scanf("%lf", &r);

    //printf("Enter rate: ");
    scanf("%lf", &ti);

    /* Calculate compound interest */
    CI = p*(pow((1 + r / 100), ti));

    /* Print the resultant CI */
    printf("%.2f", CI);

    return 0;
}