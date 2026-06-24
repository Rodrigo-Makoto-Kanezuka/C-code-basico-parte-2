#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
struct registros_de_pessoas { //Definindo minha struct registro_de_pessoas
	char name[200]; //Definindo o campo nome na minha struct
	char adress[500]; //Definindo o campo endereço na minha struct...
	int idade; //Definindo o campo idade
	int tel; //Definindo o campo telefone...
};
typedef struct registros_de_pessoas registro_de_pessoas; //Passando o nome "struct registro_de_pessoas" para "registro_de_pessoas
int main () { 
	setlocale(LC_ALL, "Portuguese"); //Serve para colocar acentuações e cecidilha
	registro_de_pessoas rdp[5]; //Declarando a struct registro_de_pessoas para rdp com 5 registros
	registro_de_pessoas temp; //Declando outra struct porém com somente 1 registro
	int a = 0, b, r = 0, lixo, c, on, va, f = 0, aprendi_uma_coisa_com_essa_variavel_se_voce_tiver_um_problema_crie_uma_variavel = 0; //Declarando minhas variáveis inteiras
	char onn[200]; //Declarando uma string
	while (1) { //Laço empre verdadeiro
		system ("clear||cls"); //Limpando meu terminal sempre :D
		printf ("Menu da Agenda:\n\nCadastro (1)\nPesquisa de registro por idade (2)\nClassificação alfabética (3)\nAlteração de registro digitado com erro (4)\nSair do menu (5)"); //Mensagem para o usuário
		printf ("\nEscolha uma opção:"); //Outra mensagem...
		scanf ("%i", &r); //Passando valor para minha variável
		fflush(stdin); //Limpando meu 'enter'
		system ("clear||cls"); //Limpando novamente o terrminal
		if (r == 1) { //Se o número digitado for 1, segue
			if (a < 5) { //Se existir menos de 5 registros na minha struct, segue...
				puts ("Digite o nome:"); //'Jogando' a mensagem para o usuário
				scanf ("%199[^\n]s", &rdp[a].name); //Passando valor para minha string dentro da minha struct, usando um scanf que lê espaço.
				fflush(stdin); //Limpando o 'enter'...
				puts ("Endereço:"); //Jogando outra mensagem
				scanf ("%499[^\n]s", &rdp[a].adress); //Passando valores...
				fflush(stdin); //Limpando mais enter...
				puts ("Idade:"); //Mais mensagens...
				scanf ("%i", &rdp[a].idade); //Mais valores...
				fflush(stdin); //Mais limpeza
				if (rdp[a].idade < 0 || rdp[a].idade > 200) { //Se minha idade for inválida, segue
					while (rdp[a].idade < 0 || rdp[a].idade > 200) { //Enquanto a idade não for correta repita...
						printf ("Idade inválida!\nTente novamente...\n"); //Mensagens
						puts ("Idade:"); //Mais mensagens
						scanf ("%i", &rdp[a].idade); //Passando valores...
						fflush(stdin);}} //Limpeza
				puts ("Telefone"); //Tacando mais mensagem no terminal
				scanf ("%i", &rdp[a].tel); //Passando mais valores
				fflush(stdin); //Limpando mais "enteres"
				printf ("Obrigado por registrar os dados da pessoas %i\n", a + 1); //Mais mensagens
				puts ("Aperte algo depois 'Enter' para continuar..."); //Ainda mais mensagens...
				scanf ("%i", &lixo); //Passando valores para uma variávle "lixo", ela não serve para nada, só le lixo mesmo...
				fflush(stdin); //Limpando o enter
				a++; //acremento no "a" para ver quantos registros tem dentro da struct
				aprendi_uma_coisa_com_essa_variavel_se_voce_tiver_um_problema_crie_uma_variavel++;} //acremento no "//acremento no "a" para ver quantos registros tem dentro da struct" para usar depois na ordenação
			else { //Senão, lá do if, que vê se tem mais de 5 registros dentro da struct
				printf ("Agenda de registro cheia...\n"); //Mensagem para o usuário
				puts ("Aperte 'Enter' para continuar..."); //TAcando mensgaem no terminal
				scanf ("%i", &lixo); //Passando mais valores para meu "lixo"
				fflush(stdin);}} //Limpando meu enter
		else if (r == 2) { //Se meu usuário digitar 2 lá no meu menu
			puts ("Digite a idade:"); //Taca essa mensagem no terminal
			scanf ("%i", &b); //Passa valores 
			fflush(stdin); //Limpa meu enter
			for (c = 0; c < 5; c++) { //Laço para procurar entre meus registro a idade
				if (b == rdp[c].idade) { //Se encontrar
					puts ("Seu usuário foi achado!\n"); //Avise que encontrou!
					printf ("------------------- Pessoa %i -------------------\n", c + 1); //Mande essa mensagem
					printf ("Nome: %s\n", rdp[c].name); //E mostre...
					printf ("Endereço: %s\n", rdp[c].adress); //...todo...
					printf ("Idade: %i\n", rdp[c].idade); //...registro...
					printf ("Telefone: %i\n", rdp[c].tel); //...dela.
					f = 1;}} //E passe um valor para uma variável
				if (f != 1) { //Se a mesma variável não tiver o valor passado anteriormente
					printf ("Registro não encontrado!\n");} //Avise que não encontrou
					f = 0; //Reiniciando minha variável
					puts ("Aperte algo depois 'Enter' para continuar..."); //E pede para sair
					scanf ("%i", &lixo); //Joga no lixo
					fflush(stdin);} //E limpa o enter
		else if (r == 3) { //Se meu usuário querer a opção 3, segue
			for (c = 0; c < aprendi_uma_coisa_com_essa_variavel_se_voce_tiver_um_problema_crie_uma_variavel; c++) { //Laço para colocar os registro em ordem alfabética
				for (on = c + 1; on < aprendi_uma_coisa_com_essa_variavel_se_voce_tiver_um_problema_crie_uma_variavel; on++) { //Outro laço para ajudar, essa variável que faz com que minha ordem alfabética rode certinho!
					if (strcmp(rdp[c].name, rdp[on].name) > 0) { //Vendo se meu primeiro nome é maior que o segundo
						temp = rdp[c]; //Se for, troco valores...
						rdp[c] = rdp[on]; //...Com meu...
						rdp[on] = temp;}}} //...Burblle sort!
			printf ("Registro das pessoas por ordem alfabética:\n"); //Mensagem para o usuário
			for (c = 0; c < 5; c++) { //Laço para mostrar todos registros
				if (rdp[c].idade > 0 && rdp[c].idade < 200) { //Se o registro não for "vazio" 
				printf ("------------------- Pessoa %i -------------------\n", c + 1); //Mostre...
				printf ("Nome: %s\n", rdp[c].name); //...todo...
					printf ("Endereço: %s\n", rdp[c].adress); //...registro...
					printf ("Idade: %i\n", rdp[c].idade); //...do...
					printf ("Telefone: %i\n", rdp[c].tel);} //...usuário
				else { //Senão...
					printf ("------------------- Pessoa %i -------------------\n", c + 1); //Fale o registro está "vazio"
					printf ("Cadastro ainda não preenchido.\n");}} //E avise.
			puts ("Aperte algo depois 'Enter' para continuar..."); //Mais mensagem no terminal
			scanf ("%i", &lixo); //Mais coisa pro meu lixo 
			fflush(stdin);} //Limpando meu enter
		else if (r == 4) { //Se meu usuário digitar o 4
			printf ("Deseja alterar o cadastro de qual pessoa?\n"); //Pegunte qual cadastro ele quer mexer
			scanf ("%i", &on); //Pegue o valor
			fflush(stdin); //Limpe o enter
			for (c = 0; c < 5; c++) { //E procure entre os registro se o número é válido
				if (on - 1 == c) { //Se for, pergunte qual campo ele quer modificar
					printf ("------------------- Pessoa %i -------------------\n", on); //Mensagem
					puts ("Deseja alterar qual campo?"); //Mais mensagem
					printf ("Nome (1);\nEndereço (2);\nIdade (3);\nTelefone (4).\n"); //Deixe ele escolher...
					scanf ("%i", &va); //Veja qual numero ele digitou...
					fflush(stdin); //Limpe meu enter
					if (va == 1) { //E saia modificando...
						printf ("Nome atual: %s\nComo deseja que ele fique?\n", rdp[c].name); //Mostre como está o atual...
						scanf ("%199[^\n]s", &rdp[c].name); //Passe o novo no lugar do antigo...
						printf ("Nome alterado!\n"); //Avise que foi alterado!
						puts ("Aperte algo depois 'Enter' para continuar..."); //Peça para ele sair
						scanf ("%i", &lixo); //E joga o que ele digitou no lixo
						fflush(stdin);} //Limpe meu enter
					else if (va == 2) { //Se ele escolher o segundo campo...
						printf ("Endereço atual: %s\nComo deseja que ele fique?\n", rdp[c].adress); //Mostre como está o atual...
						scanf ("%499[^\n]s", &rdp[c].adress); //Passe o novo no lugar do antigo...
						printf ("Endereço alterado!\n"); //Avise que foi alterado!
						puts ("Aperte algo depois 'Enter' para continuar..."); //Peça para ele sair
						scanf ("%i", &lixo); //E joga o que ele digitou no lixo
						fflush(stdin);} //Limpe meu enter
					else if (va == 3) { //terceiro...
						printf ("Idade atual: %i\nComo deseja que ele fique?\n", rdp[c].idade); //Mostre como está o atual...
						scanf ("%i", &rdp[c].idade); //Passe o novo no lugar do antigo...
						printf ("Idade alterada!\n"); //Avise que foi alterado!
						puts ("Aperte algo depois 'Enter' para continuar..."); //Peça para ele sair
						scanf ("%i", &lixo); //E joga o que ele digitou no lixo
						fflush(stdin);} //Limpe meu enter
					else if (va == 4) { //Ou quarto campo
						printf ("Telefone atual: %i\nComo deseja que ele fique?\n", rdp[c].tel); //Mostre como está o atual...
						scanf ("%i", &rdp[c].tel); //Passe o novo no lugar do antigo...
						printf ("Telefone alterado!\n"); //Avise que foi alterado!
						puts ("Aperte algo depois 'Enter' para continuar..."); //Peça para ele sair
						scanf ("%i", &lixo); //E joga o que ele digitou no lixo
						fflush(stdin);} //Limpe meu enter
					else if (va != 1 && va != 2 && va != 3 && va != 4) { //Senão avise que o campo não existe
						printf ("Campo inválido..."); //Mande mensagem avisando
						puts ("Aperte algo depois 'Enter' para continuar..."); //Peça para ele sair
						scanf ("%i", &lixo); //Jogue no lixo
						fflush(stdin);}}}} //Limpe meu enter :)
		else if (r == 5) { //Se ele quiser fechar a agenda...
			puts ("Obrigado por usar nosso programa! (Hehe)\n"); //Fale obrigado
			break;} //E feche o laço
		else if (r != 1 && r != 2 && r != 3 && r != 4 && r != 5) { //Senão se ele digitar alguma opção nválida
			puts ("Campo inválido..."); //Avise
			puts ("Aperte algo depois 'Enter' para continuar..."); //Peça para ele continuar
			scanf ("%i", &lixo); //Passe para meu lixo
			fflush(stdin);}} //Limpe o enter
	return 0;} //E finalmente o fim do programa!
