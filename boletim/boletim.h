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

    friend std::ostream &operator<<(std::ostream &os, materia const &p) {
        return os << p.nome_materia;
    }

protected:
    //    adiona materias no boltim;
    std::vector<materia> materias;

//    retorna se o aluno foi reprovado ou não
    int resultado_final(materia materia_nova);

//    printa para o aluno o seu bolerim
    void print_boletim();



};


#endif //NOVO_SUAP_2_BOLETIM_H
