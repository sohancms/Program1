#include <stdio.h>
int main()
{
    int start_time, end_time, duration_of_time;

    scanf("%d %d",&start_time, &end_time);

    duration_of_time= end_time- start_time;

    if(duration_of_time < 0)
    {
        duration_of_time = 24 + (end_time - start_time);
    }

    if(start_time == end_time)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S)\n", duration_of_time);

return 0;
}
