#include<stdio.h>
int main () {
	int A [5], B [5]; //Declarei meus 2 vetores intieros que cabem 5 em cada
	int x = 0; //Passando valor e declarando um variável x.
	printf("Digite 5 numeros:\n"); //Mostrando mensagem...
	scanf ("%i %i %i %i %i", &A[0], &A[1], &A[2], &A[3], &A[4]); //Passando valores para o vetor A
	while (x < 5) { //Enquanto x menor que 5
		B [x] = A [x]*3; //Passa valor do vetor A multiplicado por 3, para o vetor B
		x++;} //acremento no x
	printf ("\nSeus numeros multiplicados por 3 em sequencia e:\n"); //Mensagem...
	for (x = 0; x < 5; x++) { //Para, x 0, menor que 5, acremente sempre que embaixo se repetir.
		printf ("%i\n", B[x]);}	 //Mostre sempre o vetor B da posição X
	return 0;} //Fim do programa

