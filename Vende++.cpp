#include "Vende++.h"


VendeMaisMais::VendeMaisMais(string loja, string fichClients, string fichProdutos, string fichTransacoes){

  // A IMPLEMENTAR 
}

/*********************************
 * Gestao de Clientes
 ********************************/  

// lista os cleinets por ordem alfabetica crescente
void VendeMaisMais::listarClientesOrdemAlfa() const{

  // A IMPLEMENTAR 

}

// mostra a informacao individual de um cliente
void VendeMaisMais::mostraInformacaoCliente(string nome){



}

/*********************************
 * Gestao de Produtos
 ********************************/  

// lisat os produto por ordem alfabetica crescente
void VendeMaisMais::listarProdutos() const{

  // A IMPLEMENTAR 

}


/*********************************
 * Preservar Informacao
 ********************************/  

// guarda apenas a informacao de clientes e/ou de transacoes que foi alterada
void VendeMaisMais::saveChanges() const{
	
	//abrir ficheiro
	ofstream f_clientes;
	f_clientes.open(fichClientes);

	if (clientesAlterados)
	{
		//reescrever no ficheiro
	}


	f_produtos.close();

	//abrir ficheiro
	ofstream f_transacoes;
	f_transacoes.open(fichTransacoes);

	if (transacoesAlterdas)
	{
		while (int i = 0; i < transacoes.size; i++)
		{
			transacoes[i].save(f_transacoes);
		}
	}

	f_transacoes.close();
}

/*********************************
 * Mostrar Loja
 ********************************/  

// mostra o conteudo de uma loja
ostream& operator<<(ostream& out, const VendeMaisMais & supermercado){

  // A IMPLEMENTAR 

}
