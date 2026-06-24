#include<stdio.h>
int main () {
	int A [6], B [6]; //Declarei meus 2 vetores inteiros que cabem 6 em cada
	int x = 0, a, b; //declarando 3 variáveis e passando valor para uma delas
	printf("Digite 6 numeros:\n"); //Mostrando mensagem...
	scanf ("%i %i %i %i %i %i", &A[0], &A[1], &A[2], &A[3], &A[4], &A[5]); //Passando valores para o vetor A
	while (x < 6) { //Enquanto x menor que 6
		a = A[x]; //a é igual ao vetor da posição A[x]
		b = 1; //b igual 1, ele sempre reinicia
		while (a > 1){ //Enquanto a maior que 1
			b = b * a; //Calculos
			a--;} //Decremento
		B [x] = b; //B da posição [x] é igual ao fatorial do A posição [x]
		x++;} //acremento no x.
	printf ("\nSeus numeros em fatorial e:\n"); //Mensagem...
	for (x = 0; x < 6; x++) { //Para, x igual a 0, menor que 6, acremente sempre que embaixo se repetir.
		printf ("%i\n", B[x]);}	 //Mostre sempre o vetor B da posição X
	return 0;} //Fim do programa

