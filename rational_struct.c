/*
* TITLE: PROGRAMMING II LABS                    SUBTITLE: P0
* AUTHOR 1: GONZÁLEZ MONNÉ, MARCOS              LOGIN 1: marcos.gonzalez.monne
* AUTHOR 2: RIVEIRO PRIMOY, BREIXO              LOGIN 2: breixo.riveirop
* GROUP: 1.4                                    DATE: 10/02/2025
*/

//______________________________________________________________________________________________________________________

#include "rational_struct.h"

//______________________________________________________________________________________________________________________

Rational createRational(int n, int d) { //Crea un número racional el que se guardarán el numerador y el denominador
    Rational temp;
    temp.num = n;
    temp.den = d;
    return temp;
}

//______________________________________________________________________________________________________________________

int numerator(Rational r) { //Crea la variable en la que se guardará el numerador dentro del número
    return r.num;
}

//______________________________________________________________________________________________________________________

int denominator(Rational r) { //Crea la variable en la que se guardará el denominador dentro del número
    return r.den;
}

//______________________________________________________________________________________________________________________

Rational sum(Rational r1, Rational r2) { //Hace la suma de los números insertados, que están formados por el numerador y el denominador
    Rational s;
    s.num= r1.num * r2.den + r2.num * r1.den;
    s.den = r1.den * r2.den;
    return s;
}