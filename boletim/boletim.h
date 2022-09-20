//
// Created by marilia on 17/08/22.
//

#ifndef NOVO_SUAP_2_BOLETIM_H
#define NOVO_SUAP_2_BOLETIM_H
#include "../materia/materia.h"
#include "../aluno_ensino_medio/aluno_ensino_medio.h"
#include "../aluno_superior/aluno_superior.h"
#include <list>
#include <vector>

class boletim: public materia{
public:
    explicit boletim(){}
    virtual ~boletim(){};
    std::vector<materia> materias;
    void print_boletim();
    aluno_ensino_medio aluno_ensino_meedio;
    aluno_superior alunoSuperior;


protected:
    //    adiona materias no boltim;

//    retorna se o aluno foi reprovado ou não
    int resultado_final();

//    printa para o aluno o seu bolerim




};


#endif //NOVO_SUAP_2_BOLETIM_H
