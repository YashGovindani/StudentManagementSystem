#ifndef __delete_file_c__
#define __delete_file_c__ 1
#include"deleteFile.h"
void deleteFile(const char *fileName)
{
char command[15];
#if _WIN32
strcpy(command,"remove ");
#else
strcpy(command,"rm ");
#endif
system(strcat(command,fileName));
}
#endif
