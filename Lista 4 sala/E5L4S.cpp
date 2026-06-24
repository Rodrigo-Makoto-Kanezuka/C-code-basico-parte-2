#include<stdio.h>
int main () {
	int A[20], B[30], C[50], x = 0; //Indicando meus 3 vetores e 1 variável
	printf ("Digite 20 numeros consecutivos:\n"); //Mensagem para o usuário
	scanf ("%i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i", &A[0], &A[1], &A[2], &A[3], &A[4], &A[5], &A[6], &A[7], &A[8], &A[9], &A[10], &A[11], &A[12], &A[13], &A[14], &A[15], &A[16], &A[17], &A[18], &A[19]); //Passando valores para meu vetor A
	printf ("Digite outros 30 numeros consecutivos:\n"); //Outra mensagem para o usuário
	scanf ("%i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i", &B[0], &B[1], &B[2], &B[3], &B[4], &B[5], &B[6], &B[7], &B[8], &B[9], &B[10], &B[11], &B[12], &B[13], &B[14], &B[15], &B[16], &B[17], &B[18], &B[19], &B[20], &B[21], &B[22], &B[23], &B[24], &B[25], &B[26], &B[27], &B[28], &B[29]); //Passando valores para o vetor B
	while (x < 50) { //Enquanto x menor que 50, segue
		while (x < 20) { //Enquanto x menor que 20
			C[x] = A[x]; //Passando valores de A[x] para C [x]
			x++;} //Acremento no x
		C[x] = B[x - 20]; //Passando valores de B[x - 20] Para C[x]
		x++;} //Acremento no x.
	printf ("Todos seus numeros sao:\n"); //Mensagem para o usuário
	for (x = 0; x < 50; x++){ //Usando  o for para mostrar todos os números do vetor C
		printf ("%i\n", C[x]);} //Imprimindo em tela os valores de C
	return 0;} //Fim do programa :)

