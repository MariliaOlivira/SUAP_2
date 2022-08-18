//
// Created by marilia on 17/08/22.
//

#include "boletim.h"

int boletim::resultado_final(materia materia_nova) {
    float resultado = (materia_nova.nota1 + materia_nova.nota2 + materia_nova.nota3)/3;
    if (resultado >= 7){return 1;}
    else { return 0; }
}