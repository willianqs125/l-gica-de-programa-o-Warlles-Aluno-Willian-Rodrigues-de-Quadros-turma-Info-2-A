programa {
  funcao inicio() {
    //Declaração de variaveis
    real raio,diametro,comprimento,area

    //Entrada de dados 
    escreva("Informe o valor do raio")
    leia(raio)

    //Processamento
    diametro=raio*2
    comprimento=3.14*diametro
    area=(raio*raio)*3.14

    //Saida de dados
    escreva("Com o raio",raio, "diametro sera" ,comprimento, " area sera :",area)
  }
}
