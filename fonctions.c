//
// Created by etheo on 11/04/2023.
//
#include "fonctions.h"

float calculVitesse1D(float acceleration, float vitesseActuelle, float pas){
    return acceleration*pas + vitesseActuelle;
}

void primitive(VECTEUR* derivee, VECTEUR* constante,VECTEUR* primitive, float pas){ //primitive les trois composante d'un vecteur
    primitive->x = calculVitesse1D(derivee->x, constante->x, pas);
    primitive->y = calculVitesse1D(derivee->y, constante->y, pas);
    primitive->z = calculVitesse1D(derivee->z, constante->z, pas);
}

void calculVitesse(VECTEUR* acceleration,VECTEUR* vitesseActuelle,VECTEUR* nouvelleVitesse, float pas){
    primitive(acceleration,vitesseActuelle,nouvelleVitesse,pas);
}

void calculPosition(VECTEUR* vitesse,VECTEUR* positionActuelle,VECTEUR* nouvellePosition,float pas){
    primitive(vitesse,positionActuelle,nouvellePosition,pas);
}

float calculCourantMoteur(float reg){ //calcul le courant dans le moteur à partir de la valeurs de la tension dans reg
    return reg * 3,3 /(4095*G*Rm);
}

float calculCCR(float tensionMoteur,float Vcc){ //calcul le CCR à demandé à la PWM pour obtenir une certaine tension
    return tensionMoteur*ARR/Vcc;
}

void recopie(VECTEUR * nouveau, VECTEUR * ancien){ //recopie un vecteur
    nouveau->x=ancien->x;
    nouveau->y=ancien->y;
    nouveau->z=ancien->z;

}
