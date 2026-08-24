#include <stdio.h> //declação da biblioteca usada

  int main () { // função principal que retorna um código inteiro indicando 
      double raio; //variaveis e o tipo que se espera
      double ci; //variaveis e o tipo que se espera

      printf("Inserir o Raio: "); 

      if (scanf("%lf", &raio) != 1) {  //pedido de input e o tipo esperado que sera armazenado, 
                                                 //!= 1 = se não leu exatamente um número inteiro com sucesso
        printf("Erro: Numero inválido.\n"); // \n para pular linha
        return 1; //retorno 1 retorna para o debugger que operação nao foi efetuada com sucesso, 
                      //0 tambem poderia ser usado
      }

      if (raio < 0) { //variavel raio precisa ser satisfeita com valor maior que zero
        printf("Raio deve ser maior que 0. \n"); // \n para pular linha
        return 1;
      }
      
      ci = 2 * 3.14 * raio; //valor de pi ja foi definido na equação mas 
                                  //poderia ser feito no inicio tambem
      printf("Sua circunferencia é: %.2f \n", ci); //resultado da variavel ci 2f é até duas casas da virgula

    return 0; //encerramento do programa retornando 0 em assembly para 
                  //satisfazer int main do inicio que tudo deu certo
  }

