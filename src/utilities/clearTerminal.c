#ifndef __clear_terminal_c__
#define __clear_terminal_c__ 1
#include"clearTerminal.h"
void clearTerminal()
{
#if _WIN32
system("cls");
#else
system("clear");
#endif
}
#endif
