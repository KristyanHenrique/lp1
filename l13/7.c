#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	char nome[50],sexo[50],cpf[50],telefone[50];
	printf("Insira seu nome: \n");
	scanf("%s",&nome);
	printf("Insira seu sexo: \n");
	scanf("%s",&sexo);
	printf("Insira seu cpf: \n");
	scanf("%s",&cpf);
	printf("Insira seu telefone: \n");
	scanf("%s",&telefone);
	printf("nome: %s\n", nome);
	printf("sexo: %s\n", sexo);
	printf("cpf: %s\n", cpf);
	printf("telefone: %s\n", telefone);
	return 0;
}