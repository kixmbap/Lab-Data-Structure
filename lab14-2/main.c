#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Grade(int sc) {
    if (sc >= 80 && sc <= 100) {
        return 'A';
    } else if (sc >= 70 && sc < 80) {
        return 'B';
    } else if (sc >= 60 && sc < 70) {
        return 'C';
    } else if (sc >= 50 && sc < 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    FILE *f1;
    char filename[100];
    char buffer[200];
    char StudentName[50], StudentLName[50], StudentID[10];
    int StudentScore;

    printf("Enter a file name to read : ");
    scanf("%s", filename);

    f1 = fopen(filename, "r");
    if (f1 == NULL) {
        printf("Error : %s does not exist", filename);
        exit(0);
    }

    printf("\nStudent ID\tName\t\tScore\tGrade\n\n");

    while (fgets(buffer, sizeof(buffer), f1) != NULL) {
        sscanf(buffer, "%s %s %s %d", StudentID, StudentName, StudentLName, &StudentScore);
        char StudentGrade = Grade(StudentScore);
        printf("%-10s\t%s %s\t\t%5d\t%3c\n", StudentID, StudentName, StudentLName, StudentScore, StudentGrade);
    }

    fclose(f1);
    return 0;
}
