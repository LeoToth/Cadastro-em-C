#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	int idade;
	int matricula[50];
	char email[100];
	int telefone;

	printf("============Cadastro============ \n\n");

	printf("Digite seu nome: ");
	scanf("%49[^\n]", nome);

	printf("Digite sua idade: ");
	scanf("%d", &idade);

	printf("Digite sua matrícula: ");
	scanf("%d", &matricula);

	printf("Digite seu email: ");
	scanf("%s", email);

	printf("Digite seu número: ");
	scanf("%d", &telefone);

	printf("\nSeu nome: %s\n", nome);
	printf("Sua idade: %d anos\n", idade);
	printf("Sua matricula: %d\n", matricula);
	printf("Seu email: %s\n", email);
	printf("Seu telefone: %d\n", telefone);

	printf("\n\n Obrigado pelas informacoes!!!\n\n");
	printf("============Fim do Cadastro============");

	return 0;
}
