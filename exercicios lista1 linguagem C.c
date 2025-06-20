
#include <stdio.h>

int main() {
    // 03 - Média de 4 notas
    float n1, n2, n3, n4, media_Aritmetica;
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);
    printf("Informe a terceira nota: ");
    scanf("%f", &n3);
    printf("Informe a quarta nota: ");
    scanf("%f", &n4);
    media_Aritmetica = (n1 + n2 + n3 + n4) / 4;
    printf("A media aritmetica do aluno é: %.2f\n\n", media_Aritmetica);

    // 04 - Média de gastos de 3 meses
    float janeiro, fevereiro, marco;
    printf("Informe o valor gasto em janeiro: ");
    scanf("%f", &janeiro);
    printf("Informe o valor gasto em fevereiro: ");
    scanf("%f", &fevereiro);
    printf("Informe o valor gasto em março: ");
    scanf("%f", &marco);
    media_Aritmetica = (janeiro + fevereiro + marco) / 3;
    printf("A média aritmética é: %.2f\n\n", media_Aritmetica);

    // 05 - Cálculo do peso ideal
    float altura, peso_ideal;
    const float k = 72.7;
    const int b = 58;
    printf("Informe a altura: ");
    scanf("%f", &altura);
    peso_ideal = k * altura - b;
    printf("O seu peso ideal é: %.2f\n\n", peso_ideal);

    // 06 - Troca de valores
    float x, y, troca;
    printf("Informe o primeiro valor: ");
    scanf("%f", &x);
    printf("Informe o segundo valor: ");
    scanf("%f", &y);
    troca = x;
    x = y;
    y = troca;
    printf("O valor trocado de x: %.2f, O valor trocado de y: %.2f\n\n", x, y);

    // 07 - Cálculo de círculo
    float raio, diametro, comprimento, area;
    printf("Informe o valor do raio: ");
    scanf("%f", &raio);
    diametro = raio * 2;
    comprimento = 3.14 * diametro;
    area = raio * raio * 3.14;
    printf("Com o raio %.2f, o diametro sera %.2f, o comprimento sera %.2f e a area sera %.2f\n\n", raio, diametro, comprimento, area);

    // 08 - Conversão de temperatura
    float celsius, fahrenheit;
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsius * 9 / 5 + 32;
    printf("A temperatura em Fahrenheit é: %.2f\n\n", fahrenheit);

    // 09 - Número ao contrário
    int num, centena, dezena, unidade, cont;
    printf("Informe um número com três dígitos: ");
    scanf("%d", &num);
    centena = num / 100;
    cont = num % 100;
    dezena = cont / 10;
    unidade = cont % 10;
    printf("O número ao contrário é: %d%d%d\n\n", unidade, dezena, centena);

    // 10 - Divisão de prêmio
    float ganhador1, ganhador2, ganhador3;
    const float valortotal = 780000.0;
    ganhador1 = valortotal * 0.46;
    ganhador2 = valortotal * 0.32;
    ganhador3 = valortotal * 0.22;
    printf("O prêmio para o primeiro ganhador será: R$ %.2f\n", ganhador1);
    printf("O segundo será: R$ %.2f\n", ganhador2);
    printf("E o terceiro: R$ %.2f\n", ganhador3);

    return 0;
}
