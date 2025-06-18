programa {
  funcao inicio() {
    //Declaraçao de variaveis
    real peso_ideal,altura
    caracter nome_do_aluno

    //Declaração de constantes
    const inteiro B=58
    const real K= 72.7

    //Entrada de dados 
    escreva("Informe a altura:")
    leia(altura)
    escreva("Informe o nome do aluno:")
    leia(nome_do_aluno)

    //Processamento
    peso_ideal=(K*altura)-B
    
    //saida de dados
    escreva("o peso ideal ê:",nome_do_aluno,peso_ideal)
  }
}
