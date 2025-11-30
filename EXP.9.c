/* NAME:Nidhi Nandepalli
UIN: 251P092
CLASS: COMPS/D */

#include <stdio.h>
#include <string.h>

struct Student {
char name [50];
int roll number;
int total marks;

void readStudentData (struct Students, int index) {
printf("\n--- Entering data for Student d ---\n", index + 1);

}

printf("Enter name: ");
scanf("%49[^\n]", s->name);

printf("Enter roll number: ");
if (scanf("%d", &s->roll_number) != 1) {

printf("Invalid roll number input. Setting to 0.\n");
s->roll number = 0;

while (getchar() != '\n');
}

printf ("Enter total marks: ");
if (scanf("%d", &s->total marks) != 1) {

printf ("Invalid marks input. Setting to 0.\n");
s->total marks = 0;
while (getchar() != '\n');
}
}
void findTopper (struct Student students[], int count) {
}
if (count <= 0) {
}

printf("\nNo student data available.\n");
return;

struct Student topper = students[0];
for (int i = 1; i < count; i++) {
if (students[i].total marks > topper.total marks) {
}
topper = students[i];
}
}
printf(" STUDENT TOPPER\n");
printf("Name:%s\n", topper.name);
printf("Roll Number: %d\n", topper.roll number);
printf("Total Marks: %d\n", topper.total marks);

int main() {

const int NUM STUDENTS = 5;
struct Student records [NUM STUDENTS];
printf("Welcome to the Student Record System!\n");
for (int i = 0; i < NUM STUDENTS; i++) {

readStudentData (&records (i), i);
}
findTopper (records, NUM_STUDENTS);

return 0;

}
