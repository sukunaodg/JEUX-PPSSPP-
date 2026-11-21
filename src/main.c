#include <pspkernel.h>
#include "game.h"

PSP_MODULE_INFO("SUKUNAODG PSP", 0, 1, 0);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

int main(void)
{
    init_game();

    sceKernelExitGame();
    return 0;
}
