#include <iostream>//Biblioteca para entrada e saída de dados
#include <math.h>//Biblioteca para operacões matemáticas
#include <stdlib.h>//Biblioteca que possui a função de limpar o console

using namespace std;

char selectChalange;
char func;//Define qual funcao será utilizada.
char continueProgram;//Define se o programa deve continuar ou nao.
double num1, num2, num3;
int num11;

//Macro que contem a função de limpar o console. Mais detalhes na função main()
#define clear (void)system("clear||cls");
#define space cout << endl;


/*.....................................*/
double funcA(double x){
  double result = (pow(x, 2)) - (3*x) + 5;

  clear
  cout << "Valor de x: \n" << result << endl;
  return result;
}


double funcB(double a, double b, double c){
  double result = (a + b + c) / 3;

  if(result < 5){
    cout << "Aluno abaixo da media\n";
  } else if (result == 5){
    cout << "Aluno na media\n";
  } else {
    cout << "Aluno acima da media\n";
  }

  cout << "Media do aluno: \n" << result << endl;
  return result;
}


double funcC(int x){
  int base = 1;
  for(int i = 1; i <= x; i++){
    base *= i;
  }

  cout << "O resultado de " << num11 << " fatorial e: \n" << base << endl;
  return 0;
}


void funcD(double x, int y){
  double z = x;//Necessário para nao se multiplicar o valor atual de x por ele mesmo, mas sim o valor inicial informado
  
  for(int i = 2; i <= y; i++){
    x *= z;
  }

  if (y <= 0){
    x = 1;
  }
  
  cout << "O resultado de " << num1 << " elevado a " << num11 << " e: \n" << x << endl;
}


void funcE(double x, int y){
  cout << "Estamos realizando um programa de moradia acessível para pessoas de baixa renda! Por favor, informe sua idade: \n";
  cin >> y;
  cout << "Informe sua renda mensal: \n";
  cin >> x;

  if(y >= 21 && x < 1200){
    cout << "Voce pode participar do programa de moradia!\n";
  } else {
    cout << "Infelizmente voce nao se enquadra nos requisitos necessários para participar do programa\n";
  }
}


//Funcao que puxa as funcões do primeiro vídeo de desafio
void functionsCalculate(){
  cout << "Escolha qual funcao deseja realizar: 1 | 2 | 3 | 4 | 5\n1: f(x) = x^2 - 3x + 5\n2: f(m) = (a + b + c) / 3 || Formato: a(0.0), b(0.0), c(0.0)\n3: x!\n4: x^y\n5: Programa de moradia\n";
  cin >> func;
  clear

  switch(func){
    case '1':
    cout << "Digite o valor de x: \n";
    cin >> num1;
    funcA(num1);
    break;

    case '2':
    cout << "Digite as tres notas do aluno: \n";
    cin >> num1;
    cin >> num2;
    cin >> num3;
      funcB(num1, num2, num3);
    break;

    case '3':
    cout << "Digite um número inteiro positivo\n";
    cin >> num11;
    if (num11 <= 0){
      cout << "O número informado e negativo ou inválido.\n";
    } else {
      funcC(num11);
    }
    break;

    case '4':
    cout << "Digite um número real\n";
    cin >> num1;
    cout << "Digite um número inteiro\n";
    cin >> num11;
    funcD(num1, num11);
    break;

    case '5':
    funcE(num1, num11);
    break;

    default:
    cout << "Funcao invalida ou nao encontrada\n";
    break;
  }
}



void func1(){
  clear;
  cout << "Estamos calculando os gastos em alimento das familias em nossa cidade. Por favor, informe quantas familias entao sendo analisadas: \n";

  int x;
  cin >> x;

  double family[x];
  double total = 0.0;//Total de gastos
  clear;

  for(int i = 0; i < x; i++){
    cout << "Informe o gasto da familia " << i + 1 << endl;
    cin >> family[i];
    total += family[i];
    clear;
  }
  
  
  cout << "Gastos totais: " << total << endl;
  space;

  double result = total / x;//Media de gastos
  cout << "Media de gastos: " << result << endl;
  space;
  
  for(int i = 0; i < x; i++){
    space;
    if(family[i] > result){
      cout << "Familia " << i + 1 << " gastou mais que a media\n";
    }else if(family[i] < result){
      cout << "Familia " << i + 1 << " gastou menos que a media\n";
    }else{
      cout << "Familia " << i + 1 << " teve um gasto igual a media\n";
    }
  }
}


//Função de confirmação para continuar na função 2
bool confirm(){
  char x;
  cout << "Aperte qualquer tecla para continuar\n";
  cin >> x;

  if(x != ' '){
    return true;
  }
  return false;
}
void func2(){
  int x, y;
  double z;
  
  cout << "Informe a quantidade de linhas da matriz:\n";
  cin >> x;
  clear;
  cout << "Informe a quantidade de colunas da matriz:\n";
  cin >> y;

  clear;

  double matrizA[x][y], matrizB[x][y];//Matrizes

  for(int i = 0; i < x; i++){
    for(int j = 0; j < y; j++){
      cout << "Primeira matriz: Informe o valor da linha " << i + 1 << " e coluna " << j + 1 << endl;
      cin >> z;
      matrizA[i][j] = z;
      clear;
    }
  }

  for(int i = 0; i < x; i++){
    for(int j = 0; j < y; j++){
      cout << "Segunda matriz: Informe o valor da linha " << i + 1 << " e coluna " << j + 1 << endl;
      cin >> z;
      matrizB[i][j] = z;
      clear;
    }
  }  



  int i = 0;
  while(i != 5){
    clear;

    cout << "Primeira matriz:\n";

    for(int i = 0; i < x; i++){
      for(int j = 0; j < y; j++){
        cout << matrizA[i][j] << " ";
      }
      cout << endl;
    }

    space;

    cout << " \n";
    cout << "Segunda matriz:\n";

    for(int i = 0; i < x; i++){
      for(int j = 0; j < y; j++){
        cout << matrizB[i][j] << " ";
      }
      cout << endl;
    }

    space;
    cout << " \n";


    
    
    cout << "O que deseja fazer com as matrizes?\n1: Somar\n2: Subtrair\n3: Multiplicar\n4: Dividir\n5: Sair\n";
    cin >> i;

    switch(i){
      case 1:
      cout << " \n";
      cout << "Soma das matrizes:\n";
      for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
          cout << matrizA[i][j] + matrizB[i][j] << " ";
        }
        cout << endl;
      }
      cout << " \n";
      confirm();
      break;


      case 2:
      cout << " \n";
      cout << "Subtracao das matrizes:\n";
      for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
          cout << matrizA[i][j] - matrizB[i][j] << " ";
        }
        cout << endl;
      }
      cout << " \n";
      confirm();
      break;


      case 3:
      cout << " \n";
      cout << "Multiplicacao das matrizes:\n";
      for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
          cout << matrizA[i][j] * matrizB[i][j] << " ";
        }
        cout << endl;
      }
      cout << " \n";
      confirm();
      break;


      case 4:
      cout << " \n";
      cout << "Divisao das matrizes:\n";
      for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
          cout << matrizA[i][j] / matrizB[i][j] << " ";
        }
        cout << endl;
      }
      cout << " \n";
      confirm();
      break;


      case 5:
      clear;
      break;


      default:
      cout << "Opcao invalida\n";
      break;
    }
  }
}


void func3(){
  int vectorWidth;
  
  cout << "Informe o tamanho de seu vetor: \n";
  cin >> vectorWidth;

  char* vector = new char[vectorWidth];
  clear

  for(int i = 0; i < vectorWidth; i++){
    cout << "Informe o valor da posicao " << i << endl;
    cin >> vector[i];
    clear
  }

  cout << "Seu vetor: \n[ ";
  for(int i = 0; i < vectorWidth; i++){
    cout << vector[i] << " ";
  }
  cout << "]" << endl;

  //Para usar o delete em seu vetor, e necessário usá-lo como um ponteiro que reserva um espaço na memória.
  delete [] vector;
  space
  cout << "Deseja fazer outro vetor? (1 = yes, 2 = no)\n";
  int x;
  cin >> x;
  clear

  if(x == 1){
    func3();
  }
}


void func4(){
  int* x = new int;
  int* y = new int;
  int* z = new int;

  cout << "Informe a primeira idade: \n";
  cin >> *x; //Uso o asterisco para acessar ou definir o valor do ponteiro.
  clear;

  cout << "Informe a segunda idade: \n";
  cin >> *y;
  clear;

  *z = (*x + *y) / 2;
  cout << "A media das idades e: " << *z << endl;

  space;
  cout << "Deseja fazer outra media? (1 = yes, 2 = no)\n";
  int* a = new int;
  cin >> *a;

  if(*a == 1){
    clear;
    func4();
  }
}


void change(int* &x, int* &y){//Sem o '&', o valor de x e y não seria alterado. e necessário este símbolo para que o parâmetro aponte para o endereço de memória de x e y da func5().
  int* temp = new int;//Variável temporária para trocar os valores de x e y.

  *temp = *x;
  *x = *y;
  *y = *temp;

  delete temp;//Deletar este ponteiro para armazenar mais nada na memória.
}
void func5(){
  int* x = new int;
  int* y = new int;
  
  cout << "Digite o valor do primeiro inteiro: \n";
  cin >> *x;
  clear;
  cout << "Digite o valor do segundo inteiro: \n";
  cin >> *y;
  clear;

  cout << "Endereco do primeiro inteiro: " << x << " \nValor: " << *x << endl;
  space;
  cout << "Endereco do segundo inteiro: " << y << " \nValor: " << *y << endl;

  space;
  space;
  cout << "Trocando os valores...\n";
  change(x, y);//Os parâmetros de x e y são o endereço de memória dos mesmos para que eu possa acessar seus valores na função change().
  space;
  space;

  cout << "Endereco do primeiro inteiro: " << x << " \nValor: " << *x << endl;
  space;
  cout << "Endereco do segundo inteiro: " << y << " \nValor: " << *y << endl;
}

void functionsChalangeB(){
  clear;
  cout << "Escolha qual funcao deseja realizar: 1 | 2 | 3 | 4 | 5\n";
  space;
  cout << "1: Gastos em alimentos de familias \n2: Calculo entre duas matrizes \n3: Fazer seu proprio vetor com caracteres personalizados \n4: Media entre duas idades \n5: Troca do valor de ponteiros \n";
  cin >> func;

  clear
  switch(func){
    case '1':
    func1();
    break;

    case '2':
    func2();
    break;

    case '3':
    func3();
    break;

    case '4':
    func4();
    break;

    case '5':
    func5();
    break;

    default:
    cout << "Operacao nao encontrada\n";
    break;
  }

  
}

/*...................................................*/
int main() {
  space
  cout << "Qual desafio deseja realizar? 1 | 2\n";
  cin >> selectChalange;

  if(selectChalange == '1'){
    clear
    functionsCalculate();
  } else if (selectChalange == '2'){
    /*
    Esta e a função para limpar o console: system(). Ela recebe um argumento em string, que neste caso e "clear" ou "cls". Aqui eu uso os dois argumentos por conta de compatibilidade, pois o clear e mais usado no linux e o cls no windows. 
    Faço um cast desta função para void para ela não retornar nada <(void) assim seria o cast para void>. 
    Como eu não uso o valor de retorno da função system, estava me gerando um erro, por isso foi necessário fazer um cast para void para eu não usar seu valor de retorno ou então não retornar nada.
    */
    (void)system("clear||cls");
    functionsChalangeB();
    
  } else {
    clear
    cout << "Operacao nao encontrada\n";
  }

  space;
  space;
  
  cout << "Voce gostaria de continuar no programa? [1(yes)/2(no)]" << endl;
  cin >> continueProgram;

  clear

  (continueProgram == 'y' || continueProgram == 'Y' || continueProgram == '1') ? cout << "Obrigado por usar este aplicativo!" << endl << main() : cout << "Good bye! :D";

  return 0;
}