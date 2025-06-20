
#include <stdio.h>

int main() {
    // a) Impressão de formas
    printf("\n--- a) Formas ---\n");
    printf("**********\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("**********\n");

    printf(" ***\n");
    printf("*   *\n");
    printf("*   *\n");
    printf("*   *\n");
    printf("*   *\n");
    printf("*   *\n");
    printf(" ***\n");

    printf("    *\n");
    printf("   ***\n");
    printf("  *****\n");
    printf(" *******\n");
    printf("*********\n");
    printf("   *\n");
    printf("   *\n");

    printf("-------------\n");
    printf("      *\n");
    printf("    *  *\n");
    printf("   *    *\n");
    printf("  *      *\n");
    printf("   *    *\n");
    printf("    *  *\n");
    printf("      *\n");

    // b) Inverter nome e sobrenome
    char nome[50], sobrenome[50];
    printf("\n--- b) Nome ao contrário ---\n");
    printf("Qual seu nome: ");
    scanf("%s", nome);
    printf("Qual seu sobrenome: ");
    scanf("%s", sobrenome);
    printf("Seu nome ao contrário é: %s %s\n", sobrenome, nome);

    // c) Operações matemáticas
    int num1, num2, soma, sub, multi, resto;
    float divi;
    printf("\n--- c) Operações com dois números ---\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    divi = (float)num1 / num2;
    resto = num1 % num2;
    printf("Soma: %d | Subtração: %d | Multiplicação: %d | Divisão: %.2f | Resto: %d\n", soma, sub, multi, divi, resto);

    // d) Celsius para Fahrenheit
    float celsius, fahrenheit;
    printf("\n--- d) Celsius para Fahrenheit ---\n");
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (9 * celsius + 160) / 5;
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);

    // e) Fahrenheit para Celsius
    printf("\n--- e) Fahrenheit para Celsius ---\n");
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = ((fahrenheit - 32) * 5) / 9;
    printf("Temperatura em Celsius: %.2f graus Celsius\n", celsius);

    // f) Volume de cilindro
    float raio, altura, volume;
    const float pi = 3.14;
    printf("\n--- f) Volume do recipiente ---\n");
    printf("Informe o valor do raio: ");
    scanf("%f", &raio);
    printf("Informe o valor da altura: ");
    scanf("%f", &altura);
    volume = raio * pi * altura;
    printf("Volume interno do recipiente: %.2f L\n", volume);

    // g) Conversão de moedas
    float reais, dolares, euro, libras;
    printf("\n--- g) Conversão de Moeda ---\n");
    printf("Informe o valor em reais: ");
    scanf("%f", &reais);
    dolares = reais / 5.54;
    euro = reais / 7.86;
    libras = reais / 7.45;
    printf("Dólares: %.2f | Euros: %.2f | Libras: %.2f\n", dolares, euro, libras);

    // h) Cálculo de gastos e sobras em viagens
    float conversor, gasto, eua, reinounido, franca;
    const int reaisTotais = 60000;
    const int notebook = 1745;
    const int estadia = 2350;
    printf("\n--- h) Gastos e Sobras ---\n");
    gasto = (notebook + estadia) * 5.4;
    eua = reaisTotais - gasto;

    conversor = 8500 * 7.38; // Reino Unido
    reinounido = eua - conversor;

    conversor = 4500 * 6.3; // França
    franca = reinounido - conversor;

    printf("Valor que sobrou após todas as viagens: %.2f\n", franca);

    // i) Simulação de orçamento
    char cnpj[20], endereco[50], cidade[50], telefone[20], email[50], ass[50];
    printf("\n--- i) Orçamento da Empresa ---\n");
    printf("Informe seu nome: ");
    scanf(" %[^
]", nome);
    printf("Informe seu CNPJ: ");
    scanf(" %[^
]", cnpj);
    printf("Informe sua cidade: ");
    scanf(" %[^
]", cidade);
    printf("Informe seu endereço: ");
    scanf(" %[^
]", endereco);
    printf("Informe seu telefone: ");
    scanf(" %[^
]", telefone);
    printf("Informe seu email: ");
    scanf(" %[^
]", email);

    printf("\n-------------------------------------------------------------------------------\n");
    printf("EMPRESA EXEMPLO Ltda.\n");
    printf("CNPJ: %s\n", cnpj);
    printf("Endereço: %s, %s\n", endereco, cidade);
    printf("Telefone: %s | Email: %s\n", telefone, email);
    printf("Holerite de Orçamento - Data: 31/05/2025\n");
    printf("-------------------------------------------------------------------------------\n");
    printf("Descrição              | QTD | Preço Unitário | Total\n");
    printf("Notebook HP            |  1  |     3.200      | 3.200\n");
    printf("Impressora             |  1  |     1.100      | 1.100\n");
    printf("Pacote de Papel        |  5  |      35.00     |  175.00\n");
    printf("Licença                |  1  |     420.00     |  420.00\n");
    printf("Serviço de Software    |  1  |     150.00     |  150.00\n");
    printf("------------------------------------------------------------\n");
    printf("Total Geral: 5.045\n");
    printf("Observações:\n");
    printf("º Orçamento válido por 10 dias\n");
    printf("º Valores sujeitos à disponibilidade do estoque\n");
    printf("º Pagamento via bancário ou Pix\n");
    printf("Responsável pelo Orçamento: %s\n", nome);
    printf("Assinatura: ");
    scanf(" %[^
]", ass);

    return 0;
}
