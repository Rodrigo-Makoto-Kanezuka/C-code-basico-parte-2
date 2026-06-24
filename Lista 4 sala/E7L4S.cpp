#include<stdio.h>
int main () {
	int A[10], B[10], a = 0, b = 9; //Indicando meus 2 vetores e 2 variaveis.
	printf ("Digite 10 numeros:\n"); //Mensagem
	scanf ("%i %i %i %i %i %i %i %i %i %i", &A[0], &A[1], &A[2], &A[3], &A[4], &A[5], &A[6], &A[7], &A[8], &A[9]); //Passando valores para meu vetor A
	while (a < 10) { //Enquanto a menor que 10, segue
		B[b] = A[a]; //B[b] é igual ao A[a]
		a++; //Acremento no a
		b--;} //Decremento no b
	printf ("Seus numeros invertidos e:\n"); //Mensagem para o usuário...
	for (b = 0; b < 10; b++){ //Usando o for para mostrar todos os números do vetor B
		printf ("%i\n", B[b]);} //Imprimindo em tela os valores de B
	return 0;} //Fim do programa :)
