#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string _nome, double _salarioHora, double _horasTrabalhadas, int _projetos)
{
  this->nome = _nome;
  this->salarioHora = _salarioHora;
  this->horasTrabalhadas = _horasTrabalhadas;
  this->projetos = _projetos;
}
void Engenheiro::imprimir()
{
  std::cout << "Nome: " << this->nome << std::endl;
  std::cout << "Salario Mes: " << this->Empregado::pagamentoMes() << std::endl;
  std::cout << "Projetos: " << this->projetos << std::endl;
  std::cout << std::endl;
}