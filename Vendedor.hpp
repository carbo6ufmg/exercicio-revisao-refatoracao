#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado
{
    public:
        Vendedor(std::string _nome, double _salarioHora, double _horasTrabalhadas, double _quotaMensalVendas);
	    double quotaTotalAnual();
        void imprimir() override;

    private:
	    double quotaMensalVendas;
};

#endif
