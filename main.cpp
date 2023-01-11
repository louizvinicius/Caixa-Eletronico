#include <iostream>
#include <stdio.h>


int main() {

	float valor,saldo=100;;
	int opcao;
	
	printf("\n\t *CAIXA ELETRONICO*\n");
do{
	
	printf("\n\tEsolha uma das opÃ§oes abaixo:\n");
	printf("(1)Deposito\n");
	printf("(2)Saque\n");
	printf("(3)Saldo\n");
	printf("(4)Sair\n");
		scanf("%d", &opcao);
  
  switch(opcao) {
	case 1:
	printf("Digite o valor: R$");
		scanf("%f",&valor);
	saldo += valor;
	printf("Deposito de R$ %.2f concluido \n",valor);
	break;	
	
		case 2:
	printf("Digite o valor: R$ ");
		scanf("%f",&valor);
	saldo -= valor;
	printf("Saque de R$ %.2f concluido \n",valor);
	break;	
	
		case 3:
	printf("Seu saldo: %.2f \n",saldo);
	break;	
	
		case 4:
		printf("Saindo...\n");
		break;
		}

	}while(opcao != 4);
	return 0;
}