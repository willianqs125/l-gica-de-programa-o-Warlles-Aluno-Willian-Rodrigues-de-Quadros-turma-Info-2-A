programa {
  funcao inicio() {
    //Declaração de variaveis
    inteiro num,centena,dezena,unidade,cont

    //Entrada de dados
    escreva("Informe um numero com tres digitos")
    leia(num)

    //Processamento 
    centena=num/100
    cont=num%100
    dezena=cont/10
    cont=cont%10
    unidade=cont
    escreva("o numero ao contrario é",unidade,dezena,centena)
  }
}
