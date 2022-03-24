#include <kipr/wombat.h>

int main()
{
    printf("Going Straight");
    motor (0,90);//1st number is port 2nd is velocity(speed)
    motor (3,90);
    msleep (1025);//1050
    enable_servos(0);
    set_servo_position(0,1263);
    motor (0,-15);// left wheel  
    motor (3,75);// right wheel
    msleep (1725);
    motor (0,80);
    motor (3,80);
    msleep (4000);
    motor (0,-9);// left wheel  
    motor (3,75);// right wheel
    msleep (1800);
    motor_power (0,50);
    motor_power (3,50);
    motor (0,80);
    motor (3,80);
    msleep (8000);
    motor (0,60);
    motor (3,-5);    
    motor (0,80);
    motor (3,80);
    return 0;
}