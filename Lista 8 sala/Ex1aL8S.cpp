#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
struct cadastro_de_pessoas {
	char name[500];
	char adress[500];
	char email[500];
	char telefone[200];
	int identifica;
};
typedef struct cadastro_de_pessoas cadastroDePessoas;
void limpa () {
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}
void pausa () {
    puts("\nAperte Enter para continuar...");
    getchar ();
}
void Exiba_registro (cadastroDePessoas registro[], int a) {
	printf ("\nRegistro da pessoa %i:\n", a + 1);
	printf ("\nNome:  %s", registro[a].name);
	printf ("\nEndereço:  %s", registro[a].adress);
	printf ("\nE-mail:  %s", registro[a].email);
	printf ("\nTelefone:  %s", registro[a].telefone);
}
int main () {
	setlocale(LC_ALL,"Portuguese");
	int opcao, a = 0, b, bb, d, e, f, g;
	char n[500];
	/* int:
	opcao: Usado para ver opções do usuário;
	a: Controla o registro de pessoas;
	b: Usado para controlar os laços de repetição "for" (em sua primeira etapa); 
	bb: Usado para controlar segunda etapa do laço "for"
	c (usado na função "limpa"): sei lá :/;
	d: usado para mostrar caso não encontre o registro.
	e: Para alteração de registros.
	f: Para alteração de registro, de forma específica em qual campo.
	g: para remover registro...
		char:
	n: Usado para pesquisa de nome;
	temp: Usado para burblle Sort.*/
	cadastroDePessoas registro[5], registrotemp[5], temp;
	for (b = 0; b < 5; b++) {
		registro[b].identifica = 0;}
	while (1) {
		system ("cls||clear");
		printf ("O que você deseja acessar?\n\n1 - Cadastro de um novo usuário\n2 - Procurar algum usuário por nome?\n3 - Ver registros em ordem alfabética\n4 - Alterar algum registro com erro\n5 - Remoção de algum registro\n6 - Mostrar registros\n7 - Sair");
		puts ("\n\nEscolha uma das opções:");
		scanf ("%i", &opcao);
		limpa ();
		system ("cls||clear");
		switch (opcao) {
			case 1:
				if (a < 5) {
					for ()
					printf ("Para cadastrar a pessoa %i, preencha os campos abaixo:\n", a + 1);
					printf ("\nNome:\n");
					scanf ("%499[^\n]s", &registro[a].name);
					limpa ();
					printf ("\n\nEndereço:\n");
					scanf ("%499[^\n]s", &registro[a].adress);
					limpa ();
					printf ("\n\nE-mail:\n");
					scanf ("%499[^\n]s", &registro[a].email);
					limpa ();
					printf ("\n\nTelefone:\n");
					scanf ("%199[^\n]s", &registro[a].telefone);
					limpa ();
					registro[a].identifica = 1;
					a++;
					printf ("\nOs dados foram registrado com sucesso!\n");
					pausa ();
					break; }
				else {
					printf ("\nTodos registros ocupados!...\n");
					pausa ();
					break; }
			case 2:
				printf ("\nPesquise o nome nos registros:\n");
				scanf ("%499[^\n]s", &n);
				limpa ();
				d = 0;
				for (b = 0; b < a; b++) {
					if (strcmp(n, registro[b].name) == 0) {
						printf ("Registro encontrado!\n");
						Exiba_registro (registro, b);
						d = 1;
						pausa ();
						break;}}
					if (d != 1) {
						printf ("Registro não encontrado...\n");
						pausa ();}
				break;
			case 3:
				for (b = 0; b < a; b++) {
					registrotemp[b] = registro[b];}
				for (b = 0; b < a; b ++) {
					for (bb = b + 1; bb < a; bb++) {
						if (strcmp(registrotemp[b].name, registrotemp[bb].name) > 0) { 
							temp = registrotemp[b]; 
							registrotemp[b] = registrotemp[bb];
							registrotemp[bb] = temp;}}}
				printf ("\nOs registros em ordem alfabética:\n");
				for (b = 0; b < a; b++) {
					Exiba_registro (registrotemp, b);
					printf ("\n---------------------------------------------\n");}
				pausa ();
				break;
			case 4:
				printf ("\n\nQual registro você deseja alterar?\n");
				scanf ("%i", &e);
				limpa ();
				if (e - 1 < 0 || e - 1 > a) {
					printf ("\nRegistro inválido!\n");
					while (e - 1 < 0 || e - 1 > a) {
						printf ("Tente novamente...\n");
						printf ("\nQual registro você deseja alterar?\n");
						scanf ("%i", &e);
						limpa (); }}
				Exiba_registro (registro, e - 1);
				puts ("\nQual campo deseja alterar?\n\n1 - Nome\n2 - Endereço\n3 - E-mail\n4 -Telefone.\n");
				scanf ("%i", &f);
				limpa ();
				switch (f) {
					case 1:
						printf ("\nNome atual: %s", registro[e - 1].name);
						printf ("\nComo deseja que ele fique?\n");
						scanf ("%499[^\n]s", &registro[e - 1].name);
						limpa ();
						pausa ();
						break;
					case 2:
						printf ("\nEndereço atual: %s", registro[e - 1].adress);
						printf ("\nComo deseja que ele fique?\n");
						scanf ("%499[^\n]s", &registro[e - 1].adress);
						limpa ();
						pausa ();
						break;
					case 3:
						printf ("\nE-mail atual: %s", registro[e - 1].email);
						printf ("\nComo deseja que ele fique?\n");
						scanf ("%499[^\n]s", &registro[e - 1].email);
						limpa ();
						pausa ();
						break;
					case 4:
						printf ("\nTelefone atual: %s", registro[e - 1].telefone);
						printf ("\nComo deseja que ele fique?\n");
						scanf ("%199[^\n]s", &registro[e - 1].telefone);
						limpa ();
						pausa ();
						break;
					default:
						puts ("\nO campo é inválido...\nTente novamente:\n");
						pausa ();
						break;
				break;}
			case 5:				
				for (b = 0; b < a; b++) {
					Exiba_registro (registro, b);
					printf ("\n---------------------------------------------\n");}
			printf ("\nQual registro você deseja remover?\n");
			scanf ("%i", &g);
			limpa ();
			if (g < 0 || g > 5) {
				printf ("Registro inválido...\nTente novamente...\n");
				while (g - 1 < 0 || g - 1 > 5) {
					printf ("\nQual registro você deseja remover?\n");
					scanf ("%i", &g);
					limpa ();}
				} else {
					registro[g - 1].identifica = 0;
					a--;}
				break;
			case 6:
				for (b = 0; b < 5; b++) {
					if (registro[b].identifica == 1 ) {
						Exiba_registro (registro, b);
						printf ("\n---------------------------------------------\n");}
					else {
						printf ("\nRegistro %i vazio", b + 1);
						printf ("\n---------------------------------------------\n");}}					
				pausa ();
				break;
			case 7:
				puts ("Obrigado por usar nosso programa!\n");
				pausa ();
				return 0;				
			default:
				puts ("Opção inválida!\n");
				pausa ();
				break;}}}
