#include <stdbool.h>
#include <stdint.h>
#include "parallel.h"
#include "..\pll\pll.h"

void main(void){
    pll();

    SysTick[STCTRL] = 0;
    SysTick[STRELOAD] = 119999;
    SysTick[STCURRENT] = 0;
    SysTick[STCTRL] = 0x5;

    init();
    reset();
    begin();
    fillScreen(BLACK);
    drawBMP(320, 320, eye_of_x_a_n_a____red_by_gearchroniclefan_de0c9bk_fullview, 0, 80);

    while(true){

    }
}
