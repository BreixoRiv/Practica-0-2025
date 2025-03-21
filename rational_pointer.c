/*
* TITLE: PROGRAMMING II LABS                    SUBTITLE: P0
* AUTHOR 1: GONZÁLEZ MONNÉ, MARCOS              LOGIN 1: marcos.gonzalez.monne
* AUTHOR 2: RIVEIRO PRIMOY, BREIXO              LOGIN 2: breixo.riveirop
* GROUP: 1.4                                    DATE: 10/02/2025
*/

//______________________________________________________________________________________________________________________

#include <stdlib.h>
#include "rational_pointer.h"

//______________________________________________________________________________________________________________________

RationalP createRationalP(int n, int d) { //Crea un número racional en el que se guardará el numerador y el denominador
    RationalP temp;
    temp = malloc(sizeof(*temp));
    temp -> num = n;
    temp -> den = d;
    return temp;
}

//______________________________________________________________________________________________________________________

int numeratorP(RationalP r) { //Crea la variable en la que se guardará el numerador dentro del número
    return r -> num;
}

//______________________________________________________________________________________________________________________

int denominatorP(RationalP r) { //Crea a variable na que se gardará o denominador dentro do número
    return r -> den;
}

//______________________________________________________________________________________________________________________

RationalP sumP(RationalP r1, RationalP r2) { //Hace la suma de los números insertados, que están formados por el numerador y el denominador
    RationalP s;
    s = malloc(sizeof(*s));
    s -> num = (r1 -> num) * (r2 -> den) + (r2 -> num) * (r1 -> den);
    s -> den = (r1 -> den) * (r2 -> den);
    return s;
}