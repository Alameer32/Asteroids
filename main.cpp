#include <graphics.h>
#include "player.hpp"
using namespace std;


int main()
{
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");
    
    Player a;
     
    a.draw();
    a.move();
}