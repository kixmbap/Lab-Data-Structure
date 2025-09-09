#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0, i = 0, ID = 0, Score = 0;
    char fName[30];
    char lName[30];
    char filename[30];
    FILE *f1;

    printf("Please enter a file name to write: ");
    scanf("%s", filename);

    f1 = fopen(filename, "w");
    if(f1 == NULL) {
        printf("Error : the file could not be created.\n");
        exit(0);
    }
    printf("Enter the number of students :");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("No. %d", i + 1);
        printf("\tStudent ID: ");
        scanf("%d", &ID);
        printf("\tName: ");
        scanf("%s %s", fName, lName);
        printf("\tScore: ");
        scanf("%d", &Score);

        fprintf(f1, "%d %s %s %d\n", ID, fName, lName, Score);
    }

    fclose(f1);
    return 0;
}
