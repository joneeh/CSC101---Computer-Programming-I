#include <stdio.h>
#include <math.h>


void within_x_percent()
{
    double substance;

    printf("Give a value of a boiling point of a Substance\n\n");
    scanf("%lf", &substance);

    printf("\n");

    if(substance>=100-(100*.05) && substance<=100+(100*.05))
    printf("The substance is Water\n");

    else if(substance>=357-(357*.05) && substance<=357+(357*.05))
    printf("The substance is Mercury\n");

    else if(substance>=1187-(1187*.05) && substance<=1187+(1187*.05))
    printf("The substance is Copper\n");

    else if(substance>=2193-(2193*.05) && substance<=2193+(2193*.05))
    printf("The substance is Silver\n");

    else if(substance>=2660-(2660*.05) && substance<=2660+(2660*.05))
    printf("The substance is Gold\n");

    else
    printf("Substance is unknown\n");
}

int main()
{
    within_x_percent();

    return 0;
}
