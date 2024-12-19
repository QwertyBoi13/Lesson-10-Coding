#include <stdio.h>
#include <string.h>
#define MAXNAMELENGTH 32
typedef struct {
    char name[MAXNAMELENGTH];
    int id;
    double gpa;
} studentt;
typedef struct {
    char *name;
    int value;
} colort;
    colort colors[] = {
        {"red", 0xff0000},
        {"green", 0x00ff00},
        {"blue", 0x0000ff}
    };
int nums[] = {10, 20, 30};

void printf_student(studentt student){
    printf("name: %s\n", student.name);
    printf("id: %d\n", student.id);
    printf("gpa: %f\n", student.gpa);
    student.gpa = 100;
}
void initstudent(studentt *p, char *name, int id, double gpa){
    strcpy(p->name, name);
    p->id = id;
    p->gpa = gpa;
}
int main(void){
    printf("Levi Leichtfuss\nCoding Lesson 10\nPart 1\n");
    for (int i = 0; i < sizeof(colors) / sizeof(colors[0]); i++) {
        printf("%s 0x%06x \n", colors[i].name, colors[i].value);
    }
    colort *pc = &colors[0];
     for (int i = 0; i < sizeof(colors) / sizeof(colors[0]); i++) {
        printf("%s 0x%06x \n", pc->name, pc->value);
        pc++;
    }
    int count;
    int num;
    studentt john;
    studentt sally;
initstudent(&john, "John Doe", 123, 4.0);
initstudent(&sally, "Sally Smith", 124, 4.5);
printf_student(john);
printf_student(sally);



 /*   studentt john;
    studentt sally;
    john.id = 123;
    john.gpa = 4.0;
    strcpy(john.name, "John Doe");
    sally.id = 124;
    sally.gpa = 4.5;
    strcpy(sally.name, "Sally Smith");
    printf_student(john);
    printf_student(john);
    printf_student(sally);
    printf_student(sally);*/
   /* printf("john.name: %s\n", john.name);
    printf("john.id: %d\n", john.id);
    printf("john.gpa: %f\n", john.gpa);
    printf("sally.name: %s\n", sally.name);
    printf("sally.id: %d\n", sally.id);
    printf("sally.gpa: %f\n", sally.gpa);*/
 return(0);   
}
