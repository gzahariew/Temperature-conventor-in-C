#include <stdio.h>
#include <ctype.h>

int main()
{

    float temp;
    float tempC;
    float tempF;
    char unit;

beginning:

    printf("\n Is the temperature in (F) or (C)?:");
    scanf("%c", &unit);

    if (unit == 'C' || unit == 'c')
    {
        printf("\nWhat is the temperature in %c?:", unit);
        scanf("%f", &temp);
        tempF = temp * 1.8 + 32;
        printf("Temperature is %f F\n", tempF);
    }
    else if (unit == 'F' || unit == 'f')
    {
        printf("\nWhat is the temperature in %c?:", unit);
        scanf("%f", &temp);
        tempC = (temp - 32) * 5 / 9;
        printf("Temperature is %f C\n", tempC);
    }
    else
    {
        printf("This is not avalid unit\n");
        goto beginning;
    }

    return 0;
}