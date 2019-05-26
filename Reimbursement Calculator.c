#include <stdio.h>
#include <math.h>
#define rate_per_mile 0.35

double getMileage(double a, double b)
{
    double rate;

    rate = rate_per_mile*(b-a);

    return rate;
}

double mileageReimbursement()
{
    double rate, a, b;

    printf("Enter the first odometer reading: ");
    scanf("%lf", &a);

    printf("Enter the last odometer reading: ");
    scanf("%lf", &b);

    rate = getMileage(a,b);

    printf("\n\nReimbursement: $ %.2lf\n\n", rate);

    return 0;
}

int main()
{
    mileageReimbursement();
}
