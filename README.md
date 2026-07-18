# Primeiros Projetos em C - Faculdade 🎓

Este repositório contém os meus primeiros programas desenvolvidos em linguagem C para as disciplinas do 1º período da faculdade de Sistemas de Informação.

## 🛠️ Projetos Incluídos

### 1. Simulador de Caixa Eletrônico / Sistema Bancário (`prototipocaixa`)
* **Descrição:** Um sistema interativo que simula as operações básicas de um caixa eletrônico de banco (Consulta de saldo, Saque e Depósito).
* **Conceitos aplicados:** 
  * Estrutura de repetição `do-while` para manter o menu ativo na tela até que o usuário decida sair (`opção 0`).
  * Estrutura de decisão múltipla `switch-case` para direcionar a escolha do usuário de forma limpa.
  * Estruturas condicionais (`if` e `else`) para validar se há saldo suficiente na conta antes de aprovar um saque.
  * Manipulação e atualização de variáveis aritméticas (como `saldo = saldo - valor`).

### 2. Calculadora de IMC (`calculadora_imc`)
* **Descrição:** Um programa que recebe o peso e a altura do usuário, calcula o Índice de Massa Corporal (IMC) através da fórmula matemática padrão e exibe o resultado formatado na tela.
* **Conceitos aplicados:** Entrada e saída de dados (`scanf`, `printf`), declaração de variáveis de ponto flutuante (`float`), operadores aritméticos (divisão e multiplicação) e formatação de casas decimais.

### 3. Calculadora de Despesa de Combustível (`despesa_combustivel`)
* **Descrição:** Um programa para planejar o custo financeiro de uma viagem. O usuário insere o preço do combustível e a distância a ser percorrida, e o sistema calcula o gasto total estimado baseando-se em um consumo médio fixo de 10 km/L.
* **Conceitos aplicados:** Entrada e saída de dados (`scanf`, `printf`), variáveis de ponto flutuante (`float`), operadores aritméticos de divisão e multiplicação e formatação de valores monetários com duas casas decimais (`%.2f`).

## 🚀 Como executar
Para rodar os códigos, você precisará de um compilador de C (como o GCC) ou de uma IDE como Code::Blocks, Dev-C++ ou VS Code.
