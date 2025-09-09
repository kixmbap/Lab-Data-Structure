#include <stdio.h>
int getdata(int N , int Score[]){
    int i = 0;
    for(i=0;i<N;i++){
        Score[i] = (i*2)+50;
    }
return 0;
}
int printdata(int N ,int Score[]){
    int i = 0;
    for(i=0;i<N;i++){
        printf("%d %d\n",i,Score[i]);
    }
return 0;
}
int printgrade(int N,int Score[], char Grade[]){
    int i = 0;
    for(i=0;i<N;i++){
        printf("%d %d %c\n",i,Score[i],Grade[i]);
    }
return 0;
}
