//Jasmine Al-Hassani z5258857
// 19/06/2019

//Program that scans 2 integers and calculates marks a student
//received in an exam

#include <stdio.h>

int main() {

    double examMarks;
    double studentMarks;

    printf("Enter the total number of marks in the exam: ");
    scanf("%lf", &examMarks);

    printf("Enter the number of marks the student was awarded: ");
    scanf("%lf", &studentMarks);

    double score = (studentMarks * 100) / examMarks;

    printf("The student scored %0.0lf%% in this exam.\n", score);

    return 0;
}
