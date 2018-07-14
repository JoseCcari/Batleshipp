#ifndef GAME_H
#define GAME_H
#include"tools.h"
//#include "Lista_de_J.h"

class ActorManager;
class Mapa;

class Game{
private:
    void start();
    void shutdown(string message="Gracias por jugar");
    void create_actormanager();
    void create_stagemanager();
protected:
    string name;
    void update();
    int gfx_w,gfx_h;
    int colors;

public:
    Game();
    virtual~Game();
    ActorManager * actor_manager;
    Mapa * stage_manager;

    void init(int gfx_mode,int w,int h,int color);
    void main();
    void set_name(string n);
    string get_name();
};

#endif // GAME_H
