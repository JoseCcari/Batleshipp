#include "tools.h"
#include "Mapa.h"
#include "Game.h"
#include "Lista_de_J.h"
#include "Actor.h"
//class Actor;

Mapa::Mapa(Game*g,int w,int h){
        game=g;
        width=w;
        height=h;
        buffer=create_bitmap(SCREEN_W,SCREEN_H);
    }

Mapa::~Mapa(){
        destroy_bitmap(buffer);
    }

int Mapa::w(){
        return width;
    }

int Mapa::h(){
        return height;
    }
void Mapa::update(){
        draw();
    }
void Mapa::draw(){
        Actor * tmp;
        game->actor_manager->rewind();
        clear(buffer);
         while((tmp=game->actor_manager->next())!=NULL){
            tmp->draw(buffer);
        }
        blit(buffer,screen,0,0,0,0,SCREEN_W,SCREEN_H);
    }

