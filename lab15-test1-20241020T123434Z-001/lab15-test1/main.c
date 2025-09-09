#include <stdio.h>
#include <stdlib.h>
#include "getdata.h"
int main()
{
    int mScore[20];
    int N;
    char g[20];
    printf("In main function\n");
    printf("Input Number of student : ");
    scanf("%d",&N);
    getdata(N,mScore);
    printdata(N,mScore);
    calgrade(N,mScore,g);
    printf("------------------------------------\n");
    printgrade(N,mScore,g);
    return 0;
}
