#include "player.hpp"
#include <cmath>
#include <graphics.h>
#define PI 3.14159265
void Player::draw()
{
    float rad = angle * PI / 180.0;
    int x1, y1, x2, y2, x3, y3;

    x1 = x + 30 * cos(rad);
    y1 = y + 30 * sin(rad);
    x2 = x + 20 * cos(rad + 2 * PI / 3);
    y2 = y + 20 * sin(rad + 2 * PI / 3);
    x3 = x + 20 * cos(rad + 4 * PI / 3);
    y3 = y + 20 * sin(rad + 4 * PI / 3);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}


void Player::move()
{
    char ch;
    while (true)
    {
        if (kbhit())
        {
            ch = getch();

            switch (ch)
            {
            case 'w':
                x +=(10 * cos(angle * PI / 180.0));
                y +=(10 * sin(angle * PI / 180.0));
                break;
            case 's':
                x -=(10 * cos(angle * PI / 180.0));
                y -=(10 * sin(angle * PI / 180.0));
                break;
            case 'a':
                angle -= 5;
                break;
            case 'd':
                angle += 5;
                break;
            case ' ':
                 
                 break;
            
            case 'q':
                return;
            }
            
            cleardevice();
            draw();
            delay(10);
        }
    }}