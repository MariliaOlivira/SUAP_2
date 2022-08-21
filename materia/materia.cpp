//
// Created by marilia on 17/08/22.
//

#include "materia.h"
#include <iostream>
using std::ostream;
using std::endl;

ostream &operator<<(ostream &out, materia &materia) {
    out << "____________________________________" << endl <<
        "Ma referente: " << materia.nome_materia << endl <<
        "Professor Responsavel: " << materia.professor_responsavel.nome_professor << endl <<
        "Carga Horaria" << materia.carga_horaria << endl <<
        "____________________________________" << endl;

    return out;
}