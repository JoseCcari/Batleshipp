#ifndef LISTA_DE_J_H
#define LISTA_DE_J_H
#include "tools.h"
#include "Game.h"

class Actor;
// lista
class ActorManager{
    protected:
        Game* game;
        list<Actor *>actors;
        list<Actor *>::iterator actors_iter;
    public:
        ActorManager(Game*g);
        ~ActorManager();
        void add(Actor*a);
        void del (Actor*a);
        void rewind();
        Actor* next();
        Actor* current();
        void update();
        int num_actors();

};

#endif // LISTA_DE_J_H
