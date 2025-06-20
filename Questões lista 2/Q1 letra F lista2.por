programa {
  funcao inicio() {
    //Declaração de variavel 
    real raio, volume, altura

    //Declaração de constante
    const real pi = 3.14
    
    //Entrada de Dados 
    escreva("Informe o valor do raio: ")
    leia(raio)
    escreva("Informe o valor da altura: ")
    leia(altura)

    //Processamento
    volume = raio * pi * altura

    //saida de Dados 
    escreva("O valor do volume interno do recipiente é ", volume , "L")
  }
}
