#ifndef __clear_stdin_c__
#define __clear_stdin_c__ 1
#include"clearStdin.h"
void clearStdin()
{
#if _WIN32
fflush(stdin);
#elif __LINUX__
__fpurge(stdin);
#else
fpurge(stdin);
#endif
}
#endif
