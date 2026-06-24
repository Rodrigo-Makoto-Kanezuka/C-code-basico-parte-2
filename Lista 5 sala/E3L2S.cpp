#include<stdio.h>
int main () {
	int A[5], B[5], a; //Declarando meus vetores e inteiras
	for (a = 0; a < 5; a++) { //Loop para ler os números
		printf ("Digite seu numero:\n"); //Sempre repita...
		scanf ("%i", &A[a]);}  //Sempre passe esse valor para a variável
	for (a = 0; a < 5; a++) { //Loop para ordenação
		for (int b = a + 1; b < 5; b++) { //Loop...
			if (A[a] > A[b]) { //Se A[a] menor que A[b], segue
				int c = A[a]; //Troca de valores...
				A[a] = A[b]; //Trocando valores
				A[b] = c;}} //Trocando mais valores...
		B[a] = 1; //o vetor B sempre reinicia
			for (int d = 1; d <= A[a]; d++) { //Loop para fatorial
				B[a] *= d;}} //Cálculos
	printf ("Seus numeros em ordem crescente:\n"); //Mostre essa mensagem para o usuário.
	for (a = 0; a < 5; a++) { //Loop para exibição
		printf ("%i\n", B[a]);} //mostre a variável para o usuário
	return 0;} //Fim do programa... :P
