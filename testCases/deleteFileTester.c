#include"deleteFile.h"
int main(int argc,char *argv[])
{
if(argc<=1)
{
printf("File name required");
return 0;
}
deleteFile(argv[1]);
return 0;
}
