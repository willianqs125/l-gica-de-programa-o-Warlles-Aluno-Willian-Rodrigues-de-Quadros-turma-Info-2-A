programa {
  funcao inicio() {
    //Declaração de variaveis
    real tempo,velocidade,distancia,litros_usado

    //Entrada de dados
    escreva("Informe o tempo gasto na viagem (em horas)")
    leia(tempo)
    escreva("Informe a velocidade media durante a viagem (em km/h)")
    leia(velocidade)


    //Processamento 
    distancia=tempo*velocidade
    litros_usado=distancia/12

    //Saida dos dados 
    escreva("Velocidade media", velocidade, "km/h")
    escreva("Tempo gasto na viagem",tempo,"horas")
    escreva("distancia percorrida",distancia,"km")
    escreva("Litros de combustivel utilizados",litros_usado,"litros")
  }
}
