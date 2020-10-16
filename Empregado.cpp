#include "Empregado.hpp"

Empregado::Empregado(std::string _nome, double _salarioHora, double _horasTrabalhadas)
{
    this->nome = _nome;
    this->salarioHora = _salarioHora;
    this->horasTrabalhadas = _horasTrabalhadas;
}

double Empregado::pagamentoMes()
{
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (this->horasTrabalhadas > HORAS_NORMAIS)
    {
        double horaExtra = horasTrabalhadas - HORAS_NORMAIS;
        return ((HORAS_NORMAIS) + (horaExtra * VALOR_HORA_EXTRA))* this->salarioHora;
    }
    else
    {
        return (this->horasTrabalhadas * this->salarioHora);
    }
}
