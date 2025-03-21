/*
* TITLE: PROGRAMMING II LABS                    SUBTITLE: P0
* AUTHOR 1: GONZÁLEZ MONNÉ, MARCOS              LOGIN 1: marcos.gonzalez.monne
* AUTHOR 2: RIVEIRO PRIMOY, BREIXO              LOGIN 2: breixo.riveirop
* GROUP: 1.4                                    DATE: 10/02/2025
*/

//______________________________________________________________________________________________________________________

#ifndef RATIONAL_STRUCT_H
#define RATIONAL_STRUCT_H

//______________________________________________________________________________________________________________________

typedef struct Data Rational; //Struct onde se almacenan o numerador e denominador de cada número
struct Data {
    int num;
    int den;
};

//Creación de funcións na cabeceira que se definirán en rational_struct.c
//______________________________________________________________________________________________________________________

Rational createRational(int n, int d);

//______________________________________________________________________________________________________________________

int numerator(Rational r);

//______________________________________________________________________________________________________________________

int denominator(Rational r);

//______________________________________________________________________________________________________________________

Rational sum(Rational r1, Rational r2);

//______________________________________________________________________________________________________________________

#endif //RATIONAL_STRUCT_H
