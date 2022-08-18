//
// Created by marilia on 18/08/22.
//

#include "email_academico.h"
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


string email_academico::cria_email_academico(const string &nome)  {
    string resultado;
    resultado = split(nome, ' ')[0];
    string nome_aluno(resultado);
    return nome_aluno += "@academico.suap2.com.br";
}