#include <stdio.h>
int main()
{

    int x, y, z, result = 0;
    float avr;
    printf("Enter three integer number =");
    scanf("%d %d %d", &x, &y, &z);
    result = x + y + z;
    printf("The summation=%d\n", result);
    avr = (float)((result) / 3);
    printf("the avarage=%.2f", avr);

    return 0;
}