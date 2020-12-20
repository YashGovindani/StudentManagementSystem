#ifndef __display_list_of_students__
#define __display_list_of_students__ 1
#include"displayListOfStudents.h"
void displayListOfStudents()
{
Student student;
char gender[10];
int x,size;
FILE *file;
printf("Students List\n\n");
file=fopen(STUDENT_DATA_FILE,"rb");
if(file==NULL)
{
printf("No student added\n");
return;
}
fseek(file,0,SEEK_END);
if(ftell(file)==0)
{
printf("No student added\n");
fclose(file);
return;
}
fseek(file,0,SEEK_SET);
printf("+");
printHorizontalLine('-',15);
printf("+");
printHorizontalLine('-',30);
printf("+");
printHorizontalLine('-',6);
printf("+");
printf("\n");
printf("|%-15s|%-30s|%-6s|\n","Roll Number","Name","Gender");
printf("+");
printHorizontalLine('-',15);
printf("+");
printHorizontalLine('-',30);
printf("+");
printHorizontalLine('-',6);
printf("+");
printf("\n");
while(1)
{
fread(&student,sizeof(Student),1,file);
if(feof(file)) break;
if(student.gender=='M' || student.gender=='m') strcpy(gender,"Male");
else strcpy(gender,"Female");
printf("|%-15d|%-30s|%-6s|\n",student.rollNumber,student.name,gender);
}
fclose(file);
printf("+");
printHorizontalLine('-',15);
printf("+");
printHorizontalLine('-',30);
printf("+");
printHorizontalLine('-',6);
printf("+");
printf("\n");
}
#endif
