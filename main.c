/*
* TITLE: PROGRAMMING II LABS                    SUBTITLE: P0
* AUTHOR 1: GONZÁLEZ MONNÉ, MARCOS              LOGIN 1: marcos.gonzalez.monne
* AUTHOR 2: RIVEIRO PRIMOY, BREIXO              LOGIN 2: breixo.riveirop
* GROUP: 1.4                                    DATE: 10/02/2025
*/

//______________________________________________________________________________________________________________________

#include <stdio.h>
#include "rational_struct.h"
#include "rational_pointer.h"

//______________________________________________________________________________________________________________________

int main(void) {
    //Variables a usar
    Rational r1, r2, s;
    RationalP r3, r4, sp;

    //Asignación de valores a las variables
    r1 = createRational(5, 6);
    r2 = createRational(7, 2);
    r3 = createRationalP(3, 4);
    r4 = createRationalP(9, 1);

    //Sumas
    s = sum(r1, r2);
    printf("La suma es %d/%d (Usando structs)\n", numerator(s), denominator(s));

    sp = sumP(r3, r4);
    printf("La suma es %d/%d (Usando punteros)\n", numeratorP(sp), denominatorP(sp));
    return 0;
}