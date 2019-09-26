#include <kipr/botball.h>

int main()
{
    while(1){
        if( digital(0)==1&&digital(1)==1){
            motor(3,0);
            motor(0,0);
            msleep(1);
        }
        if( digital(0)==0&&digital(1)==0){
            motor(3,100);
            motor(0,100);
            msleep(1);
        }

        if( digital(0)==0&&digital(1)==1){
            motor(3,0);
            motor(0,-100);
            msleep(1);
            motor(3,100);
            motor(0,0);
            msleep(1);
        }  
        if( digital(0)==1&&digital(1)==0){
            motor(3,-100);
            motor(0,0);
            msleep(1);
            motor(3,0);
            motor(0,100);
            msleep(1);
        }  
    }

    return 0;
}
