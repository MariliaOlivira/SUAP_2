//
// Created by marilia on 17/08/22.
//

#include "aluno_ensino_medio.h"
using namespace std;

void aluno_ensino_medio:: setSerie(const string& n_serie){
    this-> serie_ensino_medio = n_serie;
}

string aluno_ensino_medio:: getSerie() const{
    return this->serie_ensino_medio;
}