#include<stdio.h>
int main () {
	int A[9], B[9], x; //Indicando meus vetores
	printf ("Digite o RA antigo digito por digito:\n"); //Mensagem para o usuário
	scanf ("%i %i %i %i %i %i %i %i %i", &A[0], &A[1], &A[2], &A[3], &A[4], &A[5], &A[6], &A[7], &A[8]); //Passando valores para p vetor A
	B[0] = A[0]; //Troca de valores
	B[1] = A[1]; //Mais trocas de valores...
	B[2] = A[2]; //Mais trocas
	B[3] = A[3]; //Muito mais trocas
	B[4] = A[4]; //Mais e mais trocas
	B[8] = A[5]; //Mais trocas de valores...
	B[7] = A[6]; //Mais...
	B[6] = A[7]; //Trocas...
	B[5] = A[8]; //Última troca
	printf ("Seu novo RA:\n"); //Mensagem para o usuário
	for (x = 0; x < 9; x++){ //Usando o for para mostrar todos os números do vetor B (RAC)
		printf ("%i", B[x]);} //Imprimindo em tela os valores de B
	return 0;} //Fim do programa :)

