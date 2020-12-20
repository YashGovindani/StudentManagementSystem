#include"addStudent.h"
#include"pressEnterToContinue.h"
int main()
{
strcpy(STUDENT_DATA_FILE,"students.data");
clearTerminal();
addStudent();
pressEnterToContinue();
clearTerminal();
return 0;
}
