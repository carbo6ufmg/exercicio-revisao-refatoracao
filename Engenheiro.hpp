#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado
{
  
    public:
        Engenheiro(std::string _nome, double _salarioHora, double _horasTrabalhadas, int _projetos);
        void imprimir() override;
        
    private:
        int projetos;
};

#endif