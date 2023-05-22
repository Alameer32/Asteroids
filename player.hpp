#include <graphics.h>
class Player
{
private:

    int x = getmaxx() / 2, y = getmaxy() / 2;
    double angle;

public:
    void draw();
    void move();
    void undraw();
    void shot();
};