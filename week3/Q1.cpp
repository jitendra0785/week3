#include <stdio.h>

int main() {
    int MARKS[20][5];
    int i, j;
    float sub_avg[5] = {0}, stu_avg[20] = {0};
    int count_below_50 = 0;

    // Input marks for 20 students in 5 subjects
    printf("Enter marks for 20 students in 5 subjects:\n");
    for (i = 0; i < 20; i++) {
        printf("Student %d:\n", i + 1);
        for (j = 0; j < 5; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &MARKS[i][j]);
        }
    }

    // (a) Average marks in each subject
    for (j = 0; j < 5; j++) {
        for (i = 0; i < 20; i++) {
            sub_avg[j] += MARKS[i][j];
        }
        sub_avg[j] /= 20.0;
    }

    // (b) Average marks of every student
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 5; j++) {
            stu_avg[i] += MARKS[i][j];
        }
        stu_avg[i] /= 5.0;
        if (stu_avg[i] < 50)
            count_below_50++;   // (c) count students with avg < 50
    }

    // Display results
    printf("\n(a) Average marks in each subject:\n");
    for (j = 0; j < 5; j++) {
        printf("Subject %d: %.2f\n", j + 1, sub_avg[j]);
    }

    printf("\n(b) Average marks of every student:\n");
    for (i = 0; i < 20; i++) {
        printf("Student %d: %.2f\n", i + 1, stu_avg[i]);
    }

    printf("\n(c) Number of students scoring below 50 in average: %d\n", count_below_50);

    printf("\n(d) Scores of every student:\n");
    for (i = 0; i < 20; i++) {
        printf("Student %d: ", i + 1);
        for (j = 0; j < 5; j++) {
            printf("%d ", MARKS[i][j]);
        }
        printf("\n");
    }

    return 0;
}

