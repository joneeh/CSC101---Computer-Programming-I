#include <stdio.h>
#include <math.h>


int day(int a)
{
    int day;

    printf("Enter Day: ");
    scanf("%d", &a);

    day = a;

    return day;
}

int month(int b)
{
    int month;

    printf("Enter Month: ");
    scanf("%d", &month);

    if(month==1)
    b = 0;

    else if(month==2)
    b = 31;

    else if(month==3)
    b = 59;

    else if(month==4)
    b = 90;

    else if(month==5)
    b = 120;

    else if(month==6)
    b = 151;

    else if(month==7)
    b = 181;

    else if(month==8)
    b = 212;

    else if(month==9)
    b = 243;

    else if(month==10)
    b = 273;

    else if(month==11)
    b = 304;

    else if(month==12)
    b = 334;

    return b;
}

int year(int c)
{
    int year;

    printf("Enter Year: ");
    scanf("%d", &year);

    if(year%4 == 0)
        c = 1;
    else
        c = 0;
    if((year%100) == 0 && year%400 == 0)
        c = 1;

    return c;
}

int main()
{
    int day();
    int month();
    int year();
    int x, z, v, a, b, c, sum;

    x = day(a);
    z = month(b);
    v = year(c);

    printf("\n");

    sum = x + z + v;

    printf("Total number of day(s) in a year: %d\n", sum);


    return 0;
}
