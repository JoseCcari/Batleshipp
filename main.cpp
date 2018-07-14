#include <iostream>
#include "Game.h"

using namespace std;

const int PANTALLA_ANCHO = 1024;
const int PANTALLA_ALTO  = 608;

int main()
{
    /*allegro_init();
	install_keyboard();

	set_color_depth(24);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, PANTALLA_ANCHO, PANTALLA_ALTO, 0, 0);
    set_window_title("BattleShip");
	buffer = create_bitmap(PANTALLA_ANCHO, PANTALLA_ALTO);
    if(install_sound(DIGI_AUTODETECT,MIDI_AUTODETECT,NULL) != 0){
        allegro_message("Error: inicializando sistema de sonido:\n%s\n",allegro_error);
	}
	srand (time(NULL));*/

	Game* game = new Game();
	//Mapa* mapa = new Mapa(game, PANTALLA_ANCHO, PANTALLA_ALTO);

	game->init();



    cout << "Hello world!" << endl;
    return 0;
}
