#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n = 2;
    int random;
    printf("How many participants will there be?(2-150) : ");
    scanf("%d", &n);
    while(n<2 || n>150)
    {
        printf("There can be a minimum of 2 and a maximum of 150 participants! : ");
        scanf("%d", &n);
    }
    char list[n][50];
    printf("Enter the participants' names : \n");
    for(int i; i<n; i++)
    {
        scanf("%s", list[i]);
    }
    random = ( rand() % (n+1) );
    printf("Winner : %s", list[random]);
}
