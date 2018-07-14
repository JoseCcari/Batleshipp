#include <algorithm>
#include"tools.h"
#include "Lista_de_J.h"
#include "Actor.h"

ActorManager::ActorManager(Game*g){
            game=g;
        }
ActorManager::~ActorManager(){
            for(actors_iter=actors.begin();actors_iter!=actors.end();actors_iter++)
                delete(*actors_iter);
        }
void ActorManager::add(Actor*a){
            actors.push_back(a);
            }
void  ActorManager::del(Actor*a){
            list<Actor*>::iterator tmp_actors_iter;
            tmp_actors_iter=find(actors.begin(),actors.end(),a);
            if (tmp_actors_iter!=actors.end()){
            actors.erase(tmp_actors_iter);
            }
        }
void ActorManager::rewind(){
            actors_iter=actors.begin();
        }
Actor* ActorManager::next(){
            Actor*tmp_a;
            tmp_a = *actors_iter;
            if (actors_iter==actors.end()){return NULL;}
            actors_iter++;
            return tmp_a;
        }
Actor* ActorManager::current(){
            if (actors_iter==actors.end()){
                return NULL;
            }
            else{
                return *actors_iter;
            }
        }
void  ActorManager::update(){
            list<Actor*>::iterator tmp_iter;
            for (tmp_iter=actors.begin();tmp_iter!=actors.end();tmp_iter++){
                (*tmp_iter)->update();//yes
            }

        }
int ActorManager::num_actors(){
            return actors.size();
        }

