#include<stdio.h>
int main () {
	int A [5], B [5], C [5], x = 0; //Indicando os 3 vetores inteiros, e uma variável.
	printf ("Digite 5 numeros consecutivos:\n"); //Mensagem para o usuário
	scanf ("%i %i %i %i %i", &A[0], &A[1], &A[2], &A[3], &A[4]); //Passando valores para o vetor A
	printf ("Digite outros 5 numeros consecutivos:\n"); //Mensagem...
	scanf ("%i %i %i %i %i", &B[0], &B[1], &B[2], &B[3], &B[4]); //Passando valores para o vetor B
	while (x < 5) { //Enquanto x menor que 5
		C [x] = A [x] - B [x]; //O vetor C é igual o vetor A menos o vetor B
		x++;} //Acremento no x
	printf ("A subtracao dos seus 5 primeiros numeros com o outros 5 numeros, de forma consecutiva e:\n"); //Mensagem...
	for (x = 0; x < 5; x++){ //Usando  o for para mostrar todos os números do vetor C
		printf ("%i\n", C[x]);} //Imprimindo em tela os valores de C
	return 0;} //Fim do programa
