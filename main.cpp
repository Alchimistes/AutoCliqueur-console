#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <unistd.h>

/*
    Author: Security-Corp
    Name: Auto cliqueur
    Team:
        Agariy
        Unamed
        3x1t1um
*/
using namespace std;

int main()
{
    //constants
    POINT pt;
    const SHORT Mask = 32768;
    bool start = NULL;

    while(1){


        GetCursorPos(&pt);
        if(GetKeyState(0x41) & Mask){

            start = TRUE;
             while(start){
                usleep(700);
                mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, pt.x, pt.y, 0, 0);

                if(GetKeyState(VK_MENU) & Mask){
                    break;
                }

             }


        }


    }

    return 0;
}
