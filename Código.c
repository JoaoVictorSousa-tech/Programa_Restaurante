#include <stdio.h>
#include<locale.h>

/*               PROGRAMA PARA CÁLCULO DE DIVISÃO DESPESAS E GORJETA.                */

int main(){
    //Função para adaptar o programa ao idioma Português.
	setlocale(LC_ALL, "Portuguese");
	
	float despesas, valor_total, troco_final, troco_inicial, valor_pessoal, gorjeta;
	int pessoas;
	
	//Informação dos valores pelo usuário.
	printf("Valor total da conta(sem o R$): ");
	scanf("%f", &despesas);
	printf("\nInforme o valor a ser pago: ");
	scanf("%f", &valor_total);
	printf("\nInforme a porcentagem da gorjeta(sem o %%): ");
	scanf("%f", &gorjeta);
	printf("\nInforme o número de pessoas que dividirão o pagamento: ");
	scanf("%d", &pessoas);
	printf("\n\n\t\t\t\tCalculando...\n\n");
	
	//Cálculo dos valores.
	troco_inicial = valor_total - despesas;
	gorjeta = (gorjeta / 100) * troco_inicial;
	troco_final = troco_inicial - gorjeta,
	valor_pessoal = despesas / pessoas;
	
	//Exibição dos resultados ao usuário.
	printf("O valor que cada pessoa pagará é: R$ %.2f", valor_pessoal);
	printf("\nO valor da gorjeta é: R$ %.2f", gorjeta);
	printf("\nO troco é: R$ %.2f (Retirando também a gorjeta)", troco_final);
	
}