programa {
  funcao inicio() {
     //Declaração de variavel 
    real reais, dolares, euro, libras
    
    //Entrada de Dados 
    escreva("informe o valor em reais: ")
    leia(reais)

    //Processamento
    dolares = reais / 5.54
    euro = reais / 7.86 
    libras = reais/7.45

    //saida de Dados 
    escreva("o valor em dolares em ", dolares, " Em euros ", euro, " Em libra " , libras)
  }
}
