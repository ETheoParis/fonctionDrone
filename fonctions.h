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
    float x;
    float y;
    float z;
}VECTEUR;
float calculCourantMoteur(float reg);
float calculVitesse1D(float acceleration, float vitesseActuelle, float pas);
void primitive(VECTEUR* derivee, VECTEUR* constante,VECTEUR* primitive ,float pas);
void calculVitesse(VECTEUR* acceleration,VECTEUR* vitesseActuelle,VECTEUR* nouvelleVitesse,float pas);
void calculPosition(VECTEUR* acceleration,VECTEUR* positionActuelle,VECTEUR* nouvellePosition,float pas);
float calculCCR(float tensionVoulue,float VCC);
void recopie(VECTEUR * nouveau, VECTEUR * ancien);
