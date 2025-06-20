programa {
  funcao inicio() {
     //Declaração de variavel
      inteiro num1, num2 , soma, sub, multi, divi, resto

    //Entrada de Dados
      escreva("escreva o primeiro numero: ")
      leia(num1)
      escreva("escreva o segundo numero: ")
      leia(num2)

    //processamento
    soma = num1 + num2
    sub = num1 - num2
    multi = num1 * num2
    divi = num1 / num2
    resto = num1 % num2
    //Saida de dados
      escreva("A soma é ", soma, " A subtração é ", sub, " A multiplicação é ", multi, " A divisão é ", divi, " E o resto é ", resto)
  }
}
