programa {
  funcao inicio() {
    //declaração de variaveis 
    inteiro X,Y, troca

    //Entrada de dados
    escreva("Digite o valor de X")
    leia(X)
    escreva("Digite o valor de Y")
    leia(Y)

    //Processamento
    
    troca=X
    X=Y
    Y=troca


    //Saida de dados 
    escreva("Apos o swap")
    escreva("Novo valor de X:", X)
    escreva("Novo valor de Y:", Y)
  }
}
