#ifndef __add_student_c__
#define __add_student_c__ 1
#include"addStudent.h"
void addStudent()
{
int rollNumber;
char name[NAME_LENGTH];
char gender;
FILE *file;
Student student;
printf("Student (Add Module)\n\n");
printf("Enter rollNumber : ");
scanf("%d",&rollNumber);
clearStdin();
if(rollNumber<=0)
{
clearTerminal();
printf("Student (Add Module)\n\n");
printf("Invalid roll number : %d\n",rollNumber);
printf("Note : Roll number cannot be less than or equal to zero\n");
return;
}
file=fopen(STUDENT_DATA_FILE,"rb");
if(file!=NULL)
{
while(1)
{
fread(&student,sizeof(Student),1,file);
if(feof(file)) break;
if(student.rollNumber==rollNumber)
{
fclose(file);
clearTerminal();
printf("Student (Add Module)\n\n");
printf("Roll number allocated to student : %s\n",student.name);
return;
}
}
fclose(file);
}
printf("Enter name : ");
scanf("%[^\n]",name);
clearStdin();
printf("Enter gender (M/F): ");
scanf("%c",&gender);
clearStdin();
if(gender!='M' && gender!='m' && gender!='F' && gender!='f')
{
clearTerminal();
printf("Student (Add Module)\n\n");
printf("Invalid gender : %c\n",gender);
return;
}
file=fopen(STUDENT_DATA_FILE,"ab");
student.rollNumber=rollNumber;
strcpy(student.name,name);
if(gender=='M' || gender=='m') student.gender='M';
else student.gender='F';
fwrite(&student,sizeof(Student),1,file);
fclose(file);
printf("Student added\n");
}
#endif
