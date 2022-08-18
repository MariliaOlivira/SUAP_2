//
// Created by marilia on 17/08/22.
//

#ifndef NOVO_SUAP_2_MATERIA_H
#define NOVO_SUAP_2_MATERIA_H
#include "../professor/professor.h"
#include <string>
using std::string;

class materia {
public:
    string nome_materia;
    professor professor_responsavel;
    int carga_horaria;

//    notas que são colocadas por professor
    int nota1;
    int nota2;
    int nota3;

//    construtor
    explicit materia(){;}

//    métodos
    int retorna_resultado(){}
};

#endif //NOVO_SUAP_2_MATERIA_H
