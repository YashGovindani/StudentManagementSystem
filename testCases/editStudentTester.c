#include"editStudent.h"
#include"pressEnterToContinue.h"
int main()
{
strcpy(STUDENT_DATA_FILE,"students.data");
clearTerminal();
editStudent();
pressEnterToContinue();
clearTerminal();
return 0;
}
