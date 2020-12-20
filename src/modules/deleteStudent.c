#ifndef __delete_student_c__
#define __delete_student_c__ 1
#include"deleteStudent.h"
void deleteStudent()
{
int rollNumber,found;
Student student;
FILE *file,*tmpFile;
printf("Student (Delete Module)\n\n");
printf("Enter roll number of the student to be deleted : ");
scanf("%d",&rollNumber);
clearStdin();
clearTerminal();
file=fopen(STUDENT_DATA_FILE,"rb");
printf("Student (Delete Module)\n\n");
if(file==NULL)
{
printf("Student does not exists with roll number : %d\n",rollNumber);
return;
}
tmpFile=fopen("tmp","wb");
found=0;
while(1)
{
fread(&student,sizeof(Student),1,file);
if(feof(file)) break;
if(student.rollNumber!=rollNumber)
{
fwrite(&student,sizeof(Student),1,tmpFile);
}else found=1;
}
fclose(file);
fclose(tmpFile);
if(!found)
{
deleteFile("tmp");
printf("Student does not exists with roll number : %d\n",rollNumber);
return;
}
file=fopen(STUDENT_DATA_FILE,"wb");
tmpFile=fopen("tmp","rb");
while(1)
{
fread(&student,sizeof(Student),1,tmpFile);
if(feof(tmpFile)) break;
fwrite(&student,sizeof(Student),1,file);
}
fclose(file);
fclose(tmpFile);
deleteFile("tmp");
printf("Student deleted\n");
}
#endif
