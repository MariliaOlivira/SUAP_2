//
// Created by marilia on 17/08/22.
//

#ifndef NOVO_SUAP_2_ALUNO_H
#define NOVO_SUAP_2_ALUNO_H
#include <string>

using std::string;

class aluno {
public:
    aluno(){;}
    string nome_aluno;
    int idade_aluno;
    string sexo_aluno;
    string data_nascimento_aluno;
    string situacao_aluno;
    static string cria_email_academico(string nome);


private:
    float CRE_aluno;
    int CPF_aluno;
    string tipo_sanguineo_aluno;
    int telefone_aluno;
    string email_aluno;

};



#endif //NOVO_SUAP_2_ALUNO_H
