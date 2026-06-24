#include<stdio.h>
int main () {
	int A[8], B [8], x = 0; //Indicando meus dois vetores e uma variável
	printf ("Digite 8 valores:\n"); //Mensagem para o usuário
	scanf ("%i %i %i %i %i %i %i %i", &A[0], &A[1], &A[2], &A[3], &A[4], &A[5], &A[6], &A[7]); //Passando valores para meu vetor A
	while (x < 8) { //Enquanto x menor que 8, segue
		B[x] = A[x]*A[x]; //O vetor de B[x] é igual o quadrador de A[x]
		x++;} //Acremento no x
	printf ("Todos os quadrados dos seus numeros sao:\n"); //Mensagem para o usuário
	for (x = 0; x < 8; x++){ //Usando o for para mostrar todos os números do vetor B
		printf ("%i\n", B[x]);} //Imprimindo em tela os valores de B
	return 0;} //Fim do programa :)
