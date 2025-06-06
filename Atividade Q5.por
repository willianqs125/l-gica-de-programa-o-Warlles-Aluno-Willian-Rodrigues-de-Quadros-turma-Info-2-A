programa {
  funcao inicio() {
    //declaracao
    real altura,peso,peso_ideal

    const real k= 72.7,b=58
    //entrada de dados
    escreva("informe a altura")
    escreva(altura)
    leia(altura)
    escreva("informe o peso")
    escreva(peso)
    leia(peso)
    //processamento
    peso_ideal=(k*altura)-b
    //saida de dados
    escreva("peso ideal")
    escreva(peso_ideal) 
  }
}
