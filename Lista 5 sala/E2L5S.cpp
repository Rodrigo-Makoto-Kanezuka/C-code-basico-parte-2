#include<stdio.h>
int main () {
	int A[5], B[5], a; //Declarando minhas variáveis e vetores inteiros
	for (a = 0; a < 5; a++) { //Código de laço para repetição
		printf ("Digite seu numero:\n"); //Sempre repita...
		scanf ("%i", &A[a]);}  //Sempre passe esse valor para a variável
	for (a = 0; a < 5; a++) { //Mais código de laço
		for (int b = a + 1; b < 5; b++) { //Para b igual a "a" mais um, b menor que 5, acremento b.
			if (A[a] > A[b]) { //Se A[a] menor que A[b], segue
				int c = A[a]; //Passando valor de A[a] para uma nova variável c.
				A[a] = A[b]; //Trocando valores
				A[b] = c;}}} //Trocando mais valores...
	for (a = 0; a < 5; a++) { //Código de laço
		B[a] = A[a]*5;} //Cáculos...
	printf ("Seus numeros em ordem crescente e multiplicados por 5:\n"); //Mostre essa mensagem para o usuário.
	for (a = 0; a < 5; a++) { //Para a igual a zero, menor que 5, acremento no a
		printf ("%i\n", B[a]);} //mostre a variável para o usuário
	return 0;} //Fim do programa... :D
