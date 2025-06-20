programa {
  funcao inicio() {
     //Declaração de variavel 
    real dolar, euro, libra, conversor, gasto, eua, reinounido, franca

    //Declaração de constantes
    const inteiro reais = 60.000
    const inteiro notebook = 1.745
    const inteiro estadia = 2.350
    
    //Entrada de Dados 

    //Processamento
    dolar = 1.745 + 2.350
    gasto = dolar * 5.4
    eua = reais - gasto
    libra = 8500
    conversor = libra * 7.38
    reinounido = eua - conversor
    euro = 4.500
    conversor = 4.500 * 6.3
    franca = reinounido - conversor
    //saida de Dados 
    escreva("O que sobrou foi", franca)
  }
}
