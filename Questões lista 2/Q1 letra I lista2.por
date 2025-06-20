programa {
  funcao inicio() {
     //Declaração de variavel 
    cadeia cnpj, enderco, cidade, telefone, email, nome, ass

    //entrada de Dados
    escreva("Informe sue nome: ")
    leia(nome)
     escreva("Informe o seu cnpj: ")
     leia(cnpj)
     escreva("Informe sua cidade: ")
     leia(cidade)
    escreva("Informe seu endereço: ")
    leia(enderco)
    escreva("informe o telefone: ")
    leia(telefone)
    escreva("Informe seu email")
    leia(email)

   //Saida de Dados
   escreva("------------------------------------------------------------------------------- \n ")
   escreva("EMPRESA EXEMPLO Ltda. \n")
   escreva("CNPJ: ", cnpj, "\n")
   escreva(enderco , cidade , "\n")
   escreva(telefone , email , " \n")
   escreva("Holerite de Orçamento \n Data: 31/05/2025 \n")
   escreva("----------------------------------------------------------------------------------- \n")
   //Tabela
   escreva("Descrição     |    QTD    |    Preço Unitário  |   Total \n")
   escreva("NotebookHp    |     1     |      3.200         |      3.200 \n")
   escreva("Impressora    |    1      |     1.100          |   1.100 \n")
   escreva("pacote de papel |  5      |      35.00         |    175.00 \n ")
  escreva("Licença        |  1        |      420.00        |    420.00 \n ")
  escreva("Serviço de Software |  1   |      150.00        |    150.00 \n ")
  escreva("------------------------------------------------------------------------ \n")
  escreva("                                             Total Geral: 5.045 \n")
  escreva("Observações \n ºOrçamento válido por 10 dias \n ºValores sujeitos a disponibilidade do estoque \n ºPagamento via bancário ou Pix \n")
  escreva("Responsável pelo Orçamento: ", nome)
  escreva("Assinatura: ")
  leia(ass)
  }
}
