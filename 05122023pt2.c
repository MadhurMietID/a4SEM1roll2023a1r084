//learning structure
//c program for average marks of 3 students
#include <stdio.h>

struct student {
    int m1, m2, m3;
    int tot;
    float avg;
};

int main() {
    struct student s1;
    int i;
    printf("Enter the student marks");
    scanf("%d%d%d", &s1.m1, &s1.m2, &s1.m3);
    s1.tot = s1.m1 + s1.m2 + s1.m3;
    s1.avg = s1.tot / 3;
    printf("Student marklist\n");
    printf("Student 1:%d\n", s1.m1);
    printf("Student 2:%d\n", s1.m2);
    printf("Student 3:%d\n", s1.m3);
    printf("Total:%d\n", s1.tot);
    return 0;
}
   
       