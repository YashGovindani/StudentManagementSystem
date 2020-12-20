#include"searchStudent.h"
#include"pressEnterToContinue.h"
int main()
{
strcpy(STUDENT_DATA_FILE,"students.data");
clearTerminal();
searchStudent();
pressEnterToContinue();
clearTerminal();
return 0;
}
