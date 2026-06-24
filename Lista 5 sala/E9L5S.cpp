#include<stdio.h>
int main () {
	int a; //Declarando minhas variável inteira
	char A[5]; //Declarando meus careacteres
	for (a = 0; a < 5; a++) { //Loop para ler as letras
		printf ("Digite sua letra:\n"); //Sempre repita...
		scanf (" %c", &A[a]);}  //Sempre passe esse valor para a variável
	for (a = 0; a < 5; a++) { //Loop para ordem crescente
		for (int b = a + 1; b < 5; b++) { //Loop para ordem crescente
			if (A[a] > A[b]) { //Se A[a] menor que A[b], segue
				char c = A[a]; //Passando valor de A[a] para uma nova variável c.
				A[a] = A[b]; //Passando valores
				A[b] = c;}}} //Passando mais valores...
	printf ("Suas letras em ordem alfabetica:\n"); //Mostre essa mensagem para o usuário.
	for (a = 0; a < 5; a++) { //Loop para mostrar mensagem
		printf ("%c\n", A[a]);} //mostre a variável para o usuário
	return 0;} //Fim do programa... :L
