#include <stdio.h>
int amount = 1000;
float deposit, withdraw;
int choice, pin, k;
char transaction ='s';

void main(void){
	while (pin != 1520){
		printf("Por favor, ingrese su n�mero PIN secreto:\n");
		scanf("%d", &pin);
		if (pin != 1520)
		printf("Por favor, ingrese su contrase�a.\n");
	}
	do{
		printf("***Bienvenido al servicio del cajero autom�tico***\n");
		printf("1. Verificar saldo.\n");
		printf("2. Retirar dinero.\n");
		printf("3. Depositar dinero.\n");
		printf("4. Salir.\n");
		printf("**************************************************\n\n");
		printf("Ingrese su elecci�n:\n");
		scanf("%d", &choice);
		return (0);

		}
