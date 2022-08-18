//
// Created by marilia on 17/08/22.
//
#include "aluno.h"
#include "aluno_ensino_medio.h"
#include "aluno_superior/aluno_superior.h"
#include "professor/professor.h"
#include "materia/materia.h"
#include "boletim/boletim.h"
#include "cursos/cursos.h"
#include <iostream>
#include <string>
#include <fstream>
using std::cout;



int main(){
//    criando um curso
    cursos engenharia_da_computacao;
    engenharia_da_computacao.nome_curso = "engenharia_da_computação";
    engenharia_da_computacao.id_curso = "2456";

//    criando um professor
    professor professor1;
    professor1.nome_professor = "daniel";
    professor1.email = "daniel@academico.suap2.com.br";

//    criando uma materia
    materia POO;
    POO.carga_horaria = 62;
    POO.professor_responsavel = professor1;

// criando um aluno
    aluno_superior aluno1;

    std::cout<< "Criando um aluno do ensino superior no SUAP2:" << std::endl;
    std::cout << "digite o nome do aluno";
    std::cin >> aluno1.nome_aluno;
    std::cout << "digite a data de nascimento, como o moedelo '12/12/1212':";
    std::cin >> aluno1.data_nascimento_aluno;

    std::cout<< "olá, " << aluno1.nome_aluno << " bem vindo(a) ao BPFI, você esta matriculado"
      <<" no curso de Engenharia da Computação, seu email será:";


    return 0;
}
