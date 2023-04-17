//
// Created by etheo on 11/04/2023.
//
#define ARR 1000
#define Rm (0,0047)
#define G 200
#ifndef UNTITLED1_FONCTIONS_H
#define UNTITLED1_FONCTIONS_H

#include <stdlib.h>
#include <stdio.h>

#endif //UNTITLED1_FONCTIONS_H

typedef struct Vecteur{
    int x;
    int y;
    int z;
}VECTEUR;
int calculCourantMoteur(int VADC);
int calculVitesse1D(int acceleration, int vitesseActuelle, int pas);
VECTEUR* primitive(VECTEUR* derivee, VECTEUR* constante, int pas);
VECTEUR* calculVitesse(VECTEUR* acceleration,VECTEUR* vitesseActuelle,int pas);
VECTEUR* calculPosition(VECTEUR* acceleration,VECTEUR* positionActuelle,int pas);
int calculCRR(int tensionVoulue);
