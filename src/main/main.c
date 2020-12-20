#include<stdio.h>
#include"clearTerminal.h"
#include"clearStdin.h"
#include"pressEnterToContinue.h"
#include"addStudent.h"
#include"editStudent.h"
#include"deleteStudent.h"
#include"searchStudent.h"
#include"displayListOfStudents.h"
int main()
{
strcpy(STUDENT_DATA_FILE,"students.data");
int choice;
clearTerminal();
printf("Welcome to Student Management System\n");
printf("Developer : Yash Govindani");
pressEnterToContinue();
clearTerminal();
while(1)
{
printf("Student Management System\n\n");
printf("1. Add student\n");
printf("2. Edit student\n");
printf("3. Delete student\n");
printf("4. Search student\n");
printf("5. Display list of students\n");
printf("6. Exit\n");
printf("Enter your choice (1-6): ");
scanf("%d",&choice);
clearStdin();
clearTerminal();
if(choice<1 || choice>6)
{
printf("Invalid choice : %d\n",choice);
pressEnterToContinue();
}
else if(choice==1) addStudent();
else if(choice==2) editStudent();
else if(choice==3) deleteStudent();
else if(choice==4) searchStudent();
else if(choice==5) displayListOfStudents();
if(choice==6) break;
else pressEnterToContinue();
clearTerminal();
}
printf("Bye, have a good day.\n");
return 0;
}
