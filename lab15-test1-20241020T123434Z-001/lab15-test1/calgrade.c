int calgrade(int N,int Score[],char Grade[]){
    int i=0;
    for(i=0;i<N;i++){
        if(Score[i]>80){
            Grade[i]='A';
        }else if(Score[i]>70){
            Grade[i]='B';
        }else if(Score[i]>60){
            Grade[i]='C';
        }else if(Score[i]>50){
            Grade[i]='D';
        }else{
            Grade[i]='F';
        }
    }
return 0;
}
