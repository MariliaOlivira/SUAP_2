//
// Created by marilia on 21/08/22.
//
#include "aluno.h"
#include <vector>
#include <string>
using std::string;

std::vector<std::string> split(const std::string& text, char sep){
    std::vector<std::string> tokens;
    std::size_t start = 0, end = 0;

    while ((end = text.find(sep, start)) != std::string::npos)
    {
        tokens.push_back(text.substr(start, end - start));
        start = end + 1;
    }

    tokens.push_back(text.substr(start));
    return tokens;
}


string aluno::cria_email_academico(string nome)  {
    nome = split(nome, ' ')[0];
    string nome_aluno(nome);
    return nome_aluno += "@academico.suap2.com.br";
}

ostream &operator<<(ostream &os, const aluno& a) {
    os << a.nome_aluno<<"\n";
    os <<a.data_nascimento_aluno;

}
