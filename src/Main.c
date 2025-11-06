#if defined __linux__
#include "/home/codeleaded/System/Static/Library/FSystem.h"
#elif defined _WINE
#include "/home/codeleaded/System/Static/Library/FSystem.h"
#elif defined _WIN32
#include "F:/home/codeleaded/System/Static/Library/FSystem.h"
#elif defined(__APPLE__)
#error "Apple not supported!"
#else
#error "Platform not supported!"
#endif

int main(int argc,const char *argv[]){
    
    FSystem fs = FSystem_New();

    FSystem_CreateFile(&fs,"Main/Hello");
    FSystem_CreateFile(&fs,"Main/Hello0");
    FSystem_CreateFile(&fs,"Main/Hello0/File0");
    FSystem_CreateFile(&fs,"Main/Hello0/File1");
    FSystem_CreateFile(&fs,"Main/Hello1");
    FSystem_CreateFile(&fs,"Main/Hello2");
    FSystem_CreateFile(&fs,"Main/Hello3");

    FSystem_Print(&fs);

    FSystem_DeleteFile(&fs,"Main/Hello");
    FSystem_DeleteFile(&fs,"Main/Hello3");
    FSystem_DeleteFile(&fs,"Main/Hello0/File1");
    FSystem_DeleteFile(&fs,"Main/Hello1");

    FSystem_Print(&fs);

    FSystem_Free(&fs);
    printf("Deleted All!\n");

    return 0;
}