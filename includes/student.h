#ifndef __student_h__
#define __student_h__ 1
#define NAME_LENGTH 52
char STUDENT_DATA_FILE[20];
typedef struct __student
{
int rollNumber;
char name[NAME_LENGTH];
char gender;
}Student;
#endif
