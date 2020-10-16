#include "Vendedor.hpp"

Vendedor::Vendedor(std::string _nome, double _salarioHora, double _horasTrabalhadas, double _quotaMensalVendas)
{
    this->nome = _nome;
	this->salarioHora = _salarioHora;
	this->horasTrabalhadas = _horasTrabalhadas;
	this->quotaMensalVendas = _quotaMensalVendas;
}

double Vendedor::quotaTotalAnual()
{
	return this->quotaMensalVendas * MESES;
}

void Vendedor::imprimir(){
	std::cout << "Nome: " << this->nome << std::endl;
 	std::cout << "Salario Mes: " << this->Empregado::pagamentoMes() << std::endl;
  	std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;
  	std::cout << std::endl;

}