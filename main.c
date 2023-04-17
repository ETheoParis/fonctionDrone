#include <stdio.h>
#include "fonctions.h"
#include <stdlib.h>
#define h (1/1000000)

int main() {
    /*début initialisation*/
    VECTEUR* position = (VECTEUR*) calloc(1,sizeof(VECTEUR));
    position->x = 0;
    position->y = 0;
    position->z = 0;
    VECTEUR* acceleration = (VECTEUR*) calloc(1,sizeof(VECTEUR));
    acceleration->x = 0;
    acceleration->y = 0;
    acceleration->z = 0;
    VECTEUR* vitesse = (VECTEUR*) calloc(1,sizeof(VECTEUR));
    vitesse->x = 0;
    vitesse->y = 0;
    vitesse->z = 0;
    int i=0;
    /*fin initialisation*/
    while(i<10){
        /*début code*/
        VECTEUR* nouvelleVitesse = calculVitesse(acceleration,vitesse,h);
        VECTEUR* nouvellePosition = calculPosition(nouvelleVitesse,position,h);
        position = nouvellePosition;
        vitesse = nouvelleVitesse;
        free(nouvelleVitesse);
        free(nouvellePosition);
        printf("x=%x y=%x z=%x\n",position->x, position->y, position->z);
        i++;
        /*fin code*/
    }
    return 0;
}