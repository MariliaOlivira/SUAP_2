//
// Created by marilia on 17/08/22.
//

#ifndef NOVO_SUAP_2_ALUNO_ENSINO_MEDIO_H
#define NOVO_SUAP_2_ALUNO_ENSINO_MEDIO_H
#include <string>
#include "aluno.h"
using std::string;
#include "../email_academico/email_academico.h"

class aluno_ensino_medio : public aluno {
public:
    //atributos
    string serie_ensino_medio;

    //constructor
    aluno_ensino_medio() {;}

    //metodos
    void setSerie(const string& n_serie);
    string getSerie() const;
};


#endif //NOVO_SUAP_2_ALUNO_ENSINO_MEDIO_H
