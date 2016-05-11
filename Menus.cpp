#include "Menus.h"


void infoInicial(string & loja, string & fichClientes, string & fichProdutos, string & fichTransacoes){

	ifstream ficheiro;

	cout << "Introduza o nome da loja: ";
	getline(cin, fichClientes);
	

	//Verificar ficheiro de clientes

	cout << "\nIntroduza o nome do ficheiro de clientes: ";

	while (true)
	{
		getline(cin, fichClientes);
		ficheiro.open(fichClientes);
		if (ficheiro)
		{
			ficheiro.close();
			break;
		}
		else cerr << "Esse ficheiro nao existe. Introduza o nome de um ficheiro de clientes existente: ";
	}

	//Verificar ficheiro de produtos

	cout << "\nIntroduza o nome do ficheiro de produtos: ";

	while (true)
	{
		getline(cin, fichProdutos);
		ficheiro.open(fichProdutos);
		if (ficheiro)
		{
			ficheiro.close();
			break;
		}
		else cerr << "Esse ficheiro nao existe. Introduza o nome de um ficheiro de produtos existente: ";
	}

	//Verificar ficheiro de transacoes

	cout << "\nIntroduza o nome do ficheiro de transacoes: ";

	while (true)
	{
		getline(cin, fichTransacoes);
		ficheiro.open(fichTransacoes);
		if (ficheiro)
		{
			ficheiro.close();
			break;
		}
		else cerr << "Esse ficheiro nao existe. Introduza o nome de um ficheiro de transacoes existente: ";
	}
	
	clearScreen(); //limpa ecra
}


/******************************************
 * Gestao de Clientes
 ******************************************/
unsigned short int menuGestaoClientes(){
	unsigned short int opcao;

	clearScreen();
	cout << TAB_BIG << "Menu Gestao Clientes" << endl;
	cout << endl;
	cout << TAB << "1 - Listar clientes" << endl;
	cout << TAB << "2 - Ver informacao cliente" << endl;
	cout << TAB << "3 - Editar cliente" << endl;
	cout << TAB << "4 - Remover cliente" << endl;
	cout << TAB << "5 - Voltar ao menu inicial" << endl << endl;
	cout << TAB << "Qual a sua opcao: ";
	opcao = leUnsignedShortInt(1, 5);

	if (opcao == 5)
		return 0;

	return opcao;
}


void opcoesGestaoClientes(VendeMaisMais & supermercado){
	unsigned int opcao;
	string nome;

	while ((opcao = menuGestaoClientes()))
		switch (opcao){
		case 1: supermercado.listarClientesOrdemAlfa();
			break;
		case 2: cout << "Qual o nome do cliente: ";
			getline(cin, nome);
			supermercado.mostraInformacaoCliente(nome);
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

/******************************************
 * Gestao de Transacoes
 ******************************************/
unsigned short int menuGestaoTransacoes(){

}

void opcoesGestaoTransacoes(VendeMaisMais & supermercado){
	unsigned int opcao;

	while ((opcao = menuGestaoTransacoes()))
		switch (opcao){
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

/******************************************
 * Gestao de Transacoes
 ******************************************/
unsigned short int menuRecomendacao(){

}

void opcoesRecomendacao(VendeMaisMais & supermercado){
	unsigned int opcao;

	while ((opcao = menuRecomendacao()))
		switch (opcao){
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
	}

}

/******************************************
 * Menu Inicial
 ******************************************/
unsigned short int menuInicial(){
	unsigned short int opcao;

	clearScreen();
	cout << TAB_BIG << "Menu Inicial" << endl;
	cout << endl;
	cout << TAB << "1 - Gestao de clientes" << endl;
	cout << TAB << "2 - Lista produto disponiveis" << endl;
	cout << TAB << "3 - Gestao de transacoes" << endl;
	cout << TAB << "4 - Recomendacoes" << endl;
	cout << TAB << "5 - Sair do programa" << endl << endl;
	cout << TAB << "Qual a sua opcao: ";
	opcao = leUnsignedShortInt(1, 5);

	if (opcao == 5)
		return 0;

	return opcao;
}

void opcoesIniciais(VendeMaisMais & supermercado){
	unsigned int opcao;


	while ((opcao = menuInicial()))
		switch (opcao){
		case 1: opcoesGestaoClientes(supermercado);
			break;
		case 2: supermercado.listarProdutos();
			break;
		case 3: opcoesGestaoTransacoes(supermercado);
			break;
		case 4: opcoesRecomendacao(supermercado);
			break;
	}

	supermercado.saveChanges();
}
