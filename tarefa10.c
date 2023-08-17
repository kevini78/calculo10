#include <stdio.h>

int main() {
    int numCarrosVendidos;
    float valorTotalVendas, salarioFixo, valorPorCarroVendido;
    const float comissaoPorVenda = 0.05; // 5%

    printf("Digite o número de carros vendidos: ");
    scanf("%d", &numCarrosVendidos);

    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorTotalVendas);

    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor por carro vendido: ");
    scanf("%f", &valorPorCarroVendido);

    float comissaoTotal = numCarrosVendidos * valorPorCarroVendido;
    float comissaoPercentual = valorTotalVendas * comissaoPorVenda;
    float salarioFinal = salarioFixo + comissaoTotal + comissaoPercentual;

    printf("O salário final do vendedor é: %.2f\n", salarioFinal);

   
}