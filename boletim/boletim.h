//
// Created by marilia on 17/08/22.
//

#ifndef NOVO_SUAP_2_BOLETIM_H
#define NOVO_SUAP_2_BOLETIM_H
#include "../materia/materia.h"
#include "../professor/professor.h"
#include <list>
#include <vector>

class boletim: public professor{
public:
    boletim(){}
    virtual ~boletim(){};
    std::vector<materia> materias;
    void print_boletim();


protected:
    //    adiona materias no boltim;

//    retorna se o aluno foi reprovado ou não
    int resultado_final(materia materia_nova);

//    printa para o aluno o seu bolerim




};


#endif //NOVO_SUAP_2_BOLETIM_H
