#include<stdio.h>
int main () {
	int A[5], B[5], C[10], x = 0; //Indicando meus 3 vetores e 1 variável
	printf ("Digite 5 numeros consecutivos:\n"); //Mensagem para o usuário
	scanf ("%i %i %i %i %i", &A[0], &A[1], &A[2], &A[3], &A[4]); //Passando valores para meu vetor A
	printf ("Digite outros 5 numeros consecutivos:\n"); //Outra mensagem para o usuário
	scanf ("%i %i %i %i %i", &B[0], &B[1], &B[2], &B[3], &B[4]); //Passando valores para o vetor B
	while (x < 5) { //Enquanto x menor que 5, segue
		C[x] = A[x]; //Passando valores de A[x] para C [x]
		C[x+5] = B[x]; //Passando valores de B[x] Para C[x+5]
		x++;} //Acremento no x.
	printf ("Todos seus numeros sao:\n"); //Mensagem para o usuário
	for (x = 0; x < 10; x++){ //Usando  o for para mostrar todos os números do vetor C
		printf ("%i\n", C[x]);} //Imprimindo em tela os valores de C
	return 0;} //Fim do programa :)
