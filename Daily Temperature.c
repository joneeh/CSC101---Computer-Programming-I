#include<stdio.h>

int main()
{
    int hot, cold, pleasant, sum, data;
    double average, total;

    hot = 0;
    pleasant = 0;
    cold = 0;
    total = 0;
    sum = 0;

    printf("Enter Data (Enter 00 after entering all data): ");
    fflush(stdout);
    scanf("%d", &data);

    while(data != 00)
    {
        if (data >= 85)
        {
            hot++;
        }
        if(data >= 60 && data<= 84)
        {
            pleasant++;
        }
        if(data <60)
        {
            cold++;
        }

        total = total + data;
        sum++;

    printf("Enter Data (Enter 00 after entering all data): ");
    fflush(stdout);
    scanf("%d", &data);
    }
    printf("\nThere are %d Hot Days\n", hot);
	printf("There are %d Pleasant Days\n", pleasant);
	printf("There are %d Cold Days\n", cold);

	average = total/sum;
	printf("\nAverage temperature is %.2f\n", average);


	return 0;
}
