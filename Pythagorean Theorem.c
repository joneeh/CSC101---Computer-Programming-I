#include <stdio.h>
#include <math.h>

double Mvalue()
{
    double m;

    printf("Enter the value of m: ");
    scanf("%lf", &m);

    return m;
}

double Nvalue()
{
    double n;

    printf("Enter the value of n: ");
    scanf("%lf", &n);

    return n;
}

double findSide1(double m, double n)
{
    double sideone;

    sideone = pow(m,2) - pow(n,2);

    return sideone;
}

double findSide2(double m, double n)
{
    double sidetwo;

    sidetwo = 2*m*n;

    return sidetwo;
}

double findSide3(double m, double n)
{
    double sidethree;

    sidethree = pow(m,2) + pow(n,2);

    return sidethree;
}

int main()
{
    double m, n, sideone, sidetwo, sidethree;

    m = Mvalue();
    n = Nvalue();
    sideone = findSide1(m,n);
    sidetwo = findSide2(m,n);
    sidethree = findSide3(m,n);

    printf("Side 1 = %.0lf\n", sideone);
    printf("Side 2 = %.0lf\n", sidetwo);
    printf("Side 3 = %.0lf\n", sidethree);

    return 0;
}
