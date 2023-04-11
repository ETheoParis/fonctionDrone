//
// Created by etheo on 11/04/2023.
//
#include "fonctions.h"

int calculVitesse1D(int acceleration, int vitesseActuelle, int pas){
    return acceleration*pas + vitesseActuelle;
}

VECTEUR* primitive(VECTEUR* derivee, VECTEUR* constante, int pas){
    VECTEUR* primitive = (VECTEUR*) malloc(1,sizeof(VECTEUR*));
    primitive->x = calculVitesse1D(derivee->x, constante->x, pas);
    primitive->y = calculVitesse1D(derivee->y, constante->y, pas);
    primitive->z = calculVitesse1D(derivee->z, constante->z, pas);
    return primitive;
}

VECTEUR* calculVitesse(VECTEUR* acceleration,VECTEUR* vitesseActuelle,int pas){
    return primitive(acceleration,vitesseActuelle,pas);
}

VECTEUR* calculPosition(VECTEUR* vitesse,VECTEUR* positionActuelle,int pas){
    return primitive(vitesse,positionActuelle,pas);
}

int calculTension(int valADC){
    return valADC*3,3/4095;
}

int calculCCR(int tensionMoteur, int Vcc){
    return tensionMoteur*ARR/Vcc;
}
