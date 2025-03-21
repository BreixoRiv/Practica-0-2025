/*
* TITLE: PROGRAMMING II LABS                    SUBTITLE: P0
* AUTHOR 1: GONZÁLEZ MONNÉ, MARCOS              LOGIN 1: marcos.gonzalez.monne
* AUTHOR 2: RIVEIRO PRIMOY, BREIXO              LOGIN 2: breixo.riveirop
* GROUP: 1.4                                    DATE: 10/02/2025
*/

//______________________________________________________________________________________________________________________

#ifndef RATIONAL_POINTER_H
#define RATIONAL_POINTER_H

//______________________________________________________________________________________________________________________

typedef struct DataP* RationalP; //Struct donde se almacenan el numerador y denominador de cada número
struct DataP {
    int num;
    int den;
};

//Creación de funciones en la cabecera que se definirán en rational_struct.c
//______________________________________________________________________________________________________________________

RationalP createRationalP(int n, int d);

//______________________________________________________________________________________________________________________

int numeratorP(RationalP r);

//______________________________________________________________________________________________________________________

int denominatorP(RationalP r);

//______________________________________________________________________________________________________________________

RationalP sumP(RationalP r1, RationalP r2);

//______________________________________________________________________________________________________________________

#endif //RATIONAL_POINTER_H
