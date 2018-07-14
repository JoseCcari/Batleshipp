#ifndef ACTOR_H
#define ACTOR_H
#include"tools.h"

class Actor
{
    protected:
            int x,y;
    public:
        Actor();
        virtual~Actor();
        virtual void draw(BITMAP* bmp);
        virtual void update();
        void set_x(int pos_x ){
            x=pos_x;
        }
        void set_y(int pos_y){
            y = pos_y;
        }
        int get_x(){
            return x;
        }
        int get_y(){
            return y;
        }

};

#endif // ACTOR_H
