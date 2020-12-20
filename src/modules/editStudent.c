#ifndef __edit_student_c__
#define __edit_student_c__ 1
#include"editStudent.h"
void editStudent()
{
Student student;
int rollNumber,position,found;
char gender;
FILE *file;
printf("Student (Edit Module)\n\n");
printf("Enter rollNumber of the student to be edited : ");
scanf("%d",&rollNumber);
clearStdin();
clearTerminal();
printf("Student (Edit Module)\n\n");
file=fopen(STUDENT_DATA_FILE,"rb");
if(file==NULL)
{
printf("No student exists with rollNumber : %d\n",rollNumber);
return;
}
found=0;
while(1)
{
position=ftell(file);
fread(&student,sizeof(student),1,file);
if(feof(file)) break;
if(student.rollNumber==rollNumber)
{
found=1;
break;
}
}
fclose(file);
if(!found)
{
printf("No student exists with roll number : %d\n",rollNumber);
return;
}
student.rollNumber=rollNumber;
printf("New details : \n");
printf("Enter name : ");
scanf("%[^\n]",student.name);
clearStdin();
printf("Enter gender (M/F):");
scanf("%c",&gender);
clearStdin();
if(gender!='M' && gender!='m' && gender!='F' && gender!='f')
{
clearTerminal();
printf("Student (Edit Module)\n\n");
printf("Invalid gender : %c\n",gender);
return;
}
if(gender=='M' || gender=='m') student.gender='M';
else student.gender='F';
file=fopen(STUDENT_DATA_FILE,"rb+");
fseek(file,position,SEEK_SET);
fwrite(&student,sizeof(student),1,file);
fclose(file);
clearTerminal();
printf("Student (Edit Module)\n\n");
printf("Student record updated\n");
}
#endif
