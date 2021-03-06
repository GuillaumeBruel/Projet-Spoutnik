#ifndef _u3_callbacks_h
#define _u3_callbacks_h

#include <iostream>
#include <FL/Fl_Widget.H>

// d�claration de la m�thode principale (appel�e � chaque nouveau cycle)
void TraiterCycleCB();

// d�claration des autres m�thodes : � compl�ter ci-dessous selon les �l�ments actifs (de type bouton ou autre) qu'on veut ajouter dans l'interface

void CurseurCB ( Fl_Widget* w, void* data );

void CallBackExit(Fl_Widget* w, void* data);
void CallBackStart(Fl_Widget* w, void* data);
void CallBackPropO1 (Fl_Widget* w, void* data);
void CallBackPropO2 (Fl_Widget* w, void* data);
void CallBackPropO3 (Fl_Widget* w, void* data);
void CallBackPropO4 (Fl_Widget* w, void* data);

void MenuOptionsCB( Fl_Widget* w, void* data );

void BoutonRadioCB(Fl_Widget* w, void* data);

#endif
