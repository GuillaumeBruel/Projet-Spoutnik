#include "u1-interface.h"
#include "u3-callbacks.h"
#include "u4-fonctions.h"

#include <FL/Fl.H>
#include <FL/fl_ask.H>
#include <FL/Fl_File_Chooser.H>

using namespace std;

// m�thode principale (appel�e � chaque nouveau cycle)
// contient a minima un appel � gInterface.ZoneDessin->redraw() qui elle-meme appelle DessinerCB (d�clar�e dans u2-dessin.h)
// contient souvent un ou plusieurs tests (sur le temps de simulation, le nombre de particules, etc) pour permettre le controle de la simulation


void TraiterCycleCB(){
        /*if (gData.Pause == false){
                double T0=0;
                double T1=1;                // temps max. en unités réduites = en jours Terrestres (T_T), ici 1 jour ~ 15 orbites basses ~ 1 orbite haute

                double dT=1e-8;                // pas d'intégration Euler (en jour, ici ~ 1 ms, à ajuster pour la précision du calcul)
                int N = 1000;                // nombre de pas Euler par DUREE_CYCLE (à ajuster pour la vitesse de l'affichage, indépendamment de DUREE_CYCLE)
                                                        // ici une DUREE_CYCLE correspond donc à N*dT ~ 1 s

                 if(gData.Spoutnik.t < T1){
									 for(int i = 0; i < N; i++){
										 Euler(gData.Spoutnik.pos, gData.Spoutnik.vit, gData.Spoutnik.t, gData.Spoutnik.t+dT);
										 gData.t += dt;
									 }
                }
								gInterface.ZoneDessin->redraw();
				}}*/

}  //il reste à mettre à jour : la nouvelle position du Satellite à dessiner

void CallBackExit(Fl_Widget* w, void* data)
{
    exit(0);
}

void CallBackPause(Fl_Widget* w, void* data)
{
	if(gData.Pause == false) gData.Pause = true;
	else gData.Pause = false;
}

void CallBackPropO1(Fl_Widget* w, void* data){
	if(gData.PropO1 == false) gData.PropO1 = true;

}

void CallBackPropO2(Fl_Widget* w, void* data){
}
