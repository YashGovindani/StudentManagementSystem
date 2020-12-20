#ifndef __search_student_c__
#define __search_student_c__ 1
#include"searchStudent.h"
void searchStudent()
{
int rollNumber;
Student student;
FILE *file;
printf("Student (Search Module)\n\n");
printf("Enter roll number of the student to be searched : ");
scanf("%d",&rollNumber);
clearStdin();
clearTerminal();
file=fopen(STUDENT_DATA_FILE,"rb");
printf("Student (Search Module)\n\n");
if(file==NULL)
{
printf("Studnet does not exists with roll number : %d\n",rollNumber);
return;
}
while(1)
{
fread(&student,sizeof(Student),1,file);
if(feof(file)) break;
if(student.rollNumber==rollNumber)
{
fclose(file);
printf("Roll Number : %d\n",student.rollNumber);
printf("Name : %s\n",student.name);
printf("Gender : ");
if(student.gender=='M' || student.gender=='m') printf("Male\n");
else printf("Female\n");
return;
}
}
fclose(file);
printf("Student does not exists with roll number : %d\n",rollNumber);
}
#endif
