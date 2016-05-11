#include "Cliente.h"


Cliente::Cliente(ifstream & in){
	in >> id; in.ignore();
	getline(in, nome, ';');
	//cartaoCliente =          //!!!!data falta implementar
	in >> volCompras;

}


string Cliente::getNome() const{
  return nome;
}

unsigned int Cliente::getId() const{
  return id;
}

float Cliente::getVolCompras() const{
  return volCompras;
}

void Cliente::save(ofstream & out) const{
	
	// A IMPLEMENTAR
}

ostream& operator<<(ostream& out, const Cliente & cli){
	out << cli.id << " ; " << cli.nome << " ; " << cli.cartaoCliente << " ; " << cli.volCompras;
}


bool operator<(const Cliente &cli1, const Cliente &cli2){
  // A IMPLEMENTAR
}
