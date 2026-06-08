#include <stdio.h>
#include <stdlib.h>


int main()
{
    int m1, m2, m3 = 0;
    int total, highest = 0;
    float average;
    char grade;

    printf("Enter Mathematics marks: ");
    scanf("%d", &m1);

    printf("Enter Science marks: ");
    scanf("%d", &m2);

    printf("Enter English marks: ");
    scanf("%d", &m3);


    total = m1 + m2 + m3;
    average = total / 3.0;


    if (average >= 80)
        grade = 'A';
    else if (average >= 70)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 50)
        grade = 'D';
    else
        grade = 'F';


    highest = m1;

    if (m2 > highest)
        highest = m2;

    if (m3 > highest)
        highest = m3;


    printf("\n===== STUDENT REPORT =====\n");
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);
    printf("Highest Mark: %d\n", highest);


    if (m1 >= 40 && m2 >= 40 && m3 >= 40)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");


    if (average >= 85 && m1 >= 80 && m2 >= 80 && m3 >= 80)
        printf("Distinction: YES\n");
    else
        printf("Distinction: NO\n");

    return 0;
}



