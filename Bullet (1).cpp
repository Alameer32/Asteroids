#include "Bullet.hpp"
#include <iostream>
#include <string>
using namespace std;


//constructor
 Bullet::Bullet(int  x1, int y1,float angle1){
    x=x1;y=y1;angle=angle1;
 }
 //destructor
 Bullet::~Bullet(){};
// accessors
int Bullet::getX() const
{
    return X;
}
int Bullet::getY() const
{
    return Y;
}
float Bullet::getAngle() const
{
    return Angle;
}


void Bullet::movement(){
    x += static_cast<int>(10 * cos(angle * PI / 180.0));
        y += static_cast<int>(10 * sin(angle * PI / 180.0));
}

    void Bullet:: draw()
    {
        setcolor(YELLOW);
        circle(x, y, 3);
        setcolor(WHITE);
    }

