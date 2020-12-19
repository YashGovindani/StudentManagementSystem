#ifndef __print_horizontal_line_c__
#define __print_horizontal_line_c__ 1
#include"printHorizontalLine.h"
void printHorizontalLine(char c,unsigned int repeat)
{
if(repeat<1) return;
unsigned int i;
for(i=0;i<repeat;i++) printf("%c",c);
}
#endif
