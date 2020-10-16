#ifndef EMPREGADO_H
#define EMPREGADO_H
#define HORAS_NORMAIS 8
#define MESES 12
#define VALOR_HORA_EXTRA 1.5
#include <iostream>
#include <string>

class Empregado
{
    public:
        Empregado() = default;
        Empregado(std::string _nome,double _salarioHora,double _horasTrabalhadas);
        double pagamentoMes();
        virtual void imprimir()= 0;
        virtual ~Empregado(){};

    protected:
        std::string nome = "";
        double salarioHora = 0.0;
        double horasTrabalhadas = 0.0;
};

#endif