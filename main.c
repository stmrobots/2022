#include <kipr/wombat.h>

int main()
{
    create_connect();
    create_drive_direct(120,120);
    msleep(800);
    create_drive_direct(200,0);
    msleep(1800);
    create_drive_direct(120,120);
    msleep(15000);
    create_drive_direct(340,0); 
    msleep(3500);
    create_stop();
    create_disconnect();

    return 0;
}
