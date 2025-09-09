#include <stdio.h>
#include <stdlib.h>
#define MAX_STD_NUM 100

struct Student {
    int NO;
    int Student_id;
    char Name[30];
    int Score;
};

void printStudent(struct Student std[], int N) {
    int i;
    for (i = 0; i < N; i++) {
        printf("--------- No. %d ---------\n",std[i].NO);
        printf("Student ID : %d\n", std[i].Student_id);
        printf("Name       : %s\n", std[i].Name);
        printf("Score      : %d\n", std[i].Score);
    }
}

void inputStudent(struct Student pstds[], int N) {
    int i;
    for (i = 0; i < N; i++){
        pstds[i].NO = i+1;
        printf("No. %d   Student ID : ",pstds[i].NO);
        scanf("%d", &pstds[i].Student_id);
        printf("\tName : ");
        scanf("%s", pstds[i].Name);
        printf("\tScore : ");
        scanf("%d", &pstds[i].Score);
    }
}

void search(int m,struct Student std[], int N) {
    int search_id,i;
    int hh = 0;

    for (i = 0; i < N; i++) {
        if (m == std[i].Student_id) {
            printf("*** Found student ***\n");
            printf("--------- No. %d ---------\n",std[i].NO);
            printf("Student ID : %d\n", std[i].Student_id);
            printf("Name       : %s\n", std[i].Name);
            printf("Score      : %d\n", std[i].Score);
            hh  = 1;
            break;
        }
    }
        if(hh == 0){
            printf("\n");
            printf("!!! Student not found !!!\n");
            printf("\n");
        }
}

int main() {
    int N,m;
    char x = 'y';
    printf("Enter the number of students: ");
    scanf("%d", &N);

    struct Student std[N];
    inputStudent(std, N);

    //printf("======== Students ========\n");
    //printStudent(std, N);
    printf("======== Student search ========\n");
    do {
    printf("Enter Student ID: ");
    scanf("%d", &m);
        search(m,std, N);
        printf("Do you want to continue? (y/n) ");
        scanf(" %c",&x);
    } while (x == 'y');

    return 0;
}
