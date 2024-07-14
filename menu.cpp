#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void media();
void inversa();
void soma ();
void elementos ();

int main () {
	
	setlocale(LC_ALL, "PORTUGUESE");
	
	int escolha;
	
	printf("***MENU***\n");
	
	do {
	
	printf("\n1. Calculo de Média.");
	printf("\n2. Ordem Inversa.");
	printf("\n3. Soma dos Elementos.");
	printf("\n4. Soma dos Números.");
	printf("\n5. Fechar promgrama.");
	
	printf("\n\nEscolha uma das opções acima: ");
	scanf("%d", &escolha);

	switch(escolha) {
	case 1:
		media();
	break;
	case 2:
		inversa();	
	break;
	case 3:
		elementos();
	break;
	case 4:
		soma();
	break;
	case 5:
		printf("\nPrograma fechado com sucesso!");
	break;
	default:
		printf("\n\nEscolha uma opção válida!");
	}
	}while(escolha != 5);
	
	return 0;
}

	void media() {

	int numeros[5];
	int soma = 0;
	
	printf("\nDigite 5 números:\n");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &numeros[i]);
		soma += numeros[i];
	}
	
	float media = (float)soma / 5;
	printf("\nMédia: %.2f\n", media);
	}

	void inversa() {
	
	int inversa[5];
	
	printf("\nDigite 5 números:\n");
	for (int i = 1; i >= 5; i++) {
	scanf("%d", &inversa[i]);
	}
	
	printf("\nNúmeros na ordem inversa:\n");
	for (int i = 4; i >= 0; i--) {
		printf("%d", inversa[i]);
	}
	printf("\n");
	}

	void soma() {
	
	int n;
	printf("\nDigite um número inteiro positivo: ");
	scanf("%d", &n);
	
	int soma_total = 0;
	for (int i = 1; i <= n; i++) {
		soma_total += i;
	}
	
	printf("\nSoma dos números de 1 até %d: %d\n", n, soma_total);
	}

	void elementos() {
	
	int elementos[15];
	int soma = 0;
	
	printf("\nDigite 15 números:\n");
	for (int i = 0; i < 15; i++) {
		scanf("%d", &elementos[i]);
		soma += elementos[i];
	}
	
	printf("\nSoma dos elementos: %d\n", soma);
	}
