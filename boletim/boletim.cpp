//
// Created by marilia on 17/08/22.
//

#include "boletim.h"
#include <list>
#include <iostream>
#include "../materia/materia.h"
using std::string;
using std::endl;

int boletim::resultado_final(materia materia_nova) {
    float resultado = (materia_nova.nota1 + materia_nova.nota2 + materia_nova.nota3)/3;
    if (resultado >= 7){return 1;}
    else { return 0; }
}


void boletim::print_boletim() {
    std::cout << "----------------- Matérias Cadastradas -------------------"<< endl;
    for (auto & it : this->materias)
        std::cout << it << "\n";
}


