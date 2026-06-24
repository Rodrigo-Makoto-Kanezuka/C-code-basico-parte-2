#include<stdio.h>
int main () {
	int A[4], a; //Declarando minhas variáveis inteiras e vetor
	for (a = 0; a < 4; a++) { //Loop para ler os numeros
		printf ("Digite seu numero:\n"); //Sempre repita...
		scanf ("%i", &A[a]);}  //Sempre passe esse valor para a variável
	for (a = 0; a < 4; a++) { //Loop para ordem crescente
		for (int b = a + 1; b < 4; b++) { //Loop para ordem crescente
			if (A[a] > A[b]) { //Se A[a] menor que A[b], segue
				int c = A[a]; //Passando valor de A[a] para uma nova variável c.
				A[a] = A[b]; //Passando valores
				A[b] = c;}}} //Passando mais valores...
	printf ("Seus numeros em ordem crescente:\n"); //Mostre essa mensagem para o usuário.
	for (a = 0; a < 4; a++) { //Loop para mostrar mensagem
		printf ("%i\n", A[a]);} //mostre a variável para o usuário
	return 0;} //Fim do programa... :')
