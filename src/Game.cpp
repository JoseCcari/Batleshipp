#include"tools.h"
#include "Game.h"
#include "Mapa.h"
#include "Lista_de_J.h"

//public
Game::Game(){
        stage_manager=NULL;
        actor_manager=NULL;

    }
Game::~Game()
{
    //dtor
}
void Game::init(int gfx_mode,int w,int h,int color){
        allegro_init();
        install_keyboard();
        set_color_depth(color);
        if(set_gfx_mode(gfx_mode,w,h,0,0)<0){
            shutdown("No se pudo inicializar modo grafico");
            return;
        }
        create_actormanager();
        create_stagemanager();
        start();
    }
void Game::main(){
        while(!key[KEY_ESC]);
    }
void Game::set_name(string n){
        name=n;
    }
string Game::get_name(){
        return name;
    }

//protected
void  Game::update(){
        stage_manager->update();
        actor_manager->update();
    }

//private

void Game::start(){
        main();
        //
        shutdown();
    }
void  Game::shutdown(string message){
        delete actor_manager;
        delete stage_manager;
        set_gfx_mode(GFX_TEXT,0,0,0,0);
        cout<<name<<endl;
        cout<<message<<endl;
        allegro_exit();
    }
void  Game::create_actormanager(){
        actor_manager=new ActorManager(this);
    }
void  Game::create_stagemanager(){
        stage_manager=new Mapa(this,gfx_w,gfx_h);
    }
