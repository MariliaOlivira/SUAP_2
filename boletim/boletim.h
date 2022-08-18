//
// Created by marilia on 17/08/22.
//

#ifndef NOVO_SUAP_2_BOLETIM_H
#define NOVO_SUAP_2_BOLETIM_H
#include "../materia/materia.h"

class boletim {
public:
    explicit boletim(){;};
    //    adiona materias no boltim;
    materia *materias = new materia[12];
//    retorna se o aluno foi reprovado ou não
    int resultado_final(materia materia);

};


#endif //NOVO_SUAP_2_BOLETIM_H
