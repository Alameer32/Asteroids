// Bullet class specification
#ifndef Bullet_H
#define Bullet_H

class Bullet
{
private:
    int x;
    int y;
    float angle;

public:
    Bullet(int x,int y,float angle){};
    ~Bullet(){};
    void movement();

    // Accessors and mutators
    int getX() const;
    int getY() const;
    float getAngle() const;
    void draw();
};

#endif
