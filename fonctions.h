//
// Created by etheo on 11/04/2023.
//

#ifndef UNTITLED1_FONCTIONS_H
#define UNTITLED1_FONCTIONS_H

#endif //UNTITLED1_FONCTIONS_H

typedef struct Vecteur{
    int x;
    int y;
    int z;
}VECTEUR;
int calculTension(int);
int calculVitesse1D(int acceleration, int vitesseActuelle, int pas);

VECTEUR primitive(VECTEUR derivee, VECTEUR constante, int pas);
VECTEUR calculVitesse(VECTEUR acceleration,VECTEUR vitesseActuelle,int pas);
VECTEUR calculPosition(VECTEUR acceleration,VECTEUR positionActuelle,int pas);
