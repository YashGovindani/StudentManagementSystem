#include"displayListOfStudents.h"
#include"pressEnterToContinue.h"
int main()
{
strcpy(STUDENT_DATA_FILE,"students.data");
clearTerminal();
displayListOfStudents();
pressEnterToContinue();
clearTerminal();
return 0;
}
