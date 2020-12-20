#include"deleteStudent.h"
#include"pressEnterToContinue.h"
int main()
{
strcpy(STUDENT_DATA_FILE,"students.data");
clearTerminal();
deleteStudent();
pressEnterToContinue();
clearTerminal();
return 0;
}
