#include<stdio.h>
int main () {
	int A[5], a; //Declarando minhas variáveis inteiras
	for (a = 0; a < 5; a++) { //Para a igual a zero, a menor que 5, acremento no a, segue.
		printf ("Digite seu numero:\n"); //Sempre repita...
		scanf ("%i", &A[a]);}  //Sempre passe esse valor para a variável
	for (a = 0; a < 5; a++) { //Para a igual a zero, menor que 5, acremento no a
		for (int b = a + 1; b < 5; b++) { //Para (uma nova variável que só vai existir dentro desse loop) igual a a mais um, b menor que 5, acremento b.
			if (A[a] < A[b]) { //Se A[a] menor que A[b], segue
				int c = A[a]; //Passando valor de A[a] para uma nova variável c.
				A[a] = A[b]; //Trocando valores
				A[b] = c;}}} //Trocando mais valores...
	printf ("Seus numeros em ordem decrescente:\n"); //Mostre essa mensagem para o usuário.
	for (a = 0; a < 5; a++) { //Para a igual a zero, menor que 5, acremento no a
		printf ("%i\n", A[a]);} //mostre a variável para o usuário
	return 0;} //Fim do programa... :)
