# Lista de Exercícios 2 - Estruturas de repetição

[VOLTAR](/readme.md)

## Exercícios

1. Crie um programa que imprima os números de 1 a 10.

    <details>
      <summary>Correção</summary><br/>

      ```cpp
      #include <iostream>
      using namespace std;

      int main() {
          for (int i = 1; i <= 10; i++) {
              cout << i << " ";
          }
      }
      ```

    </details><br/>

2. Elabore um programa que calcule e imprima a soma dos números de 1 a 100.

    <details>
      <summary>Correção</summary><br/>

      ```cpp
      #include <iostream>
      using namespace std;

      int main() {
          int soma = 0;
          for (int i = 1; i <= 100; i++) {
              soma += i;
          }
          cout << "A soma dos números de 1 a 100 é: " << soma << "\n";
      }
      ```

    </details><br/>
    
3. Crie um programa que imprima os números pares de 1 a 20.

    <details>
      <summary>Correção</summary><br/>

      ```cpp
      #include <iostream>
      using namespace std;

      int main() {
          for (int i = 2; i <= 20; i += 2) {
              cout << i << " ";
          }
      }
      ```

    </details><br/>
    
4. Desenvolva um programa que calcule e imprima o fatorial de um número inteiro fornecido pelo usuário.

    <details>
      <summary>Correção</summary><br/>

      ```cpp
      #include <iostream>
      using namespace std;

      int main() {
          int numero, fatorial = 1;
          cout << "Digite um número inteiro: ";
          cin >> numero;

          for (int i = 1; i <= numero; i++) {
              fatorial *= i;
          }

          cout << "O fatorial de " << numero << " é: " << fatorial << "\n";
      }
      ```

    </details><br/>
    
5. Crie um programa que solicite ao usuário 10 números e imprima a média deles.

    <details>
      <summary>Correção</summary><br/>

      ```cpp
      #include <iostream>
      using namespace std;

      int main() {
          double numero, soma = 0;

          for (int i = 1; i <= 10; i++) {
              cout << "Digite o número " << i << ": ";
              cin >> numero;
              soma += numero;
          }

          double media = soma / 10;
          cout << "A média dos números é: " << media << "\n";
      }
      ```

    </details><br/>
    
6. Elabore um programa que solicite ao usuário um número e imprima a tabuada desse número de 1 a 10.

    <details>
      <summary>Correção</summary><br/>

      ```cpp
      #include <iostream>
      using namespace std;

      int main() {
          int numero;
          cout << "Digite um número: ";
          cin >> numero;

          for (int i = 1; i <= 10; i++) {
              cout << numero << " x " << i << " = " << numero * i << "\n";
          }
      }
      ```

    </details><br/>
    
7. Crie um programa que imprima os primeiros 20 termos da sequência de Fibonacci.

    <details>
      <summary>Correção</summary><br/>

      ```cpp
      #include <iostream>
      using namespace std;

      int main() {
          int termo1 = 0, termo2 = 1, termoAtual;

          cout << "Os primeiros 20 termos da sequência de Fibonacci são:" << "\n";

          for (int i = 1; i <= 20; i++) {
              cout << termo1 << " ";
              termoAtual = termo1 + termo2;
              termo1 = termo2;
              termo2 = termoAtual;
          }
      }
      ```

    </details><br/>
    
8. Desenvolva um programa que solicite ao usuário um número e verifique se é um número primo.

    <details>
      <summary>Correção</summary><br/>

      ```cpp
      #include <iostream>
      using namespace std;

      int main() {
          int numero;
          bool ehPrimo = true;

          cout << "Digite um número inteiro positivo: ";
          cin >> numero;

          if (numero <= 1) {
              cout << "O número não é primo." << "\n";
          } else {
              for (int i = 2; i * i <= numero; i++) {
                  if (numero % i == 0) {
                      ehPrimo = false;
                      break;
                  }
              }

              if (ehPrimo) {
                  cout << "O número é primo." << "\n";
              } else {
                  cout << "O número não é primo." << "\n";
              }
          }
      }
      ```

    </details><br/>
    
9. Crie um programa que solicite ao usuário um número e imprima os seus divisores.

    <details>
      <summary>Correção</summary><br/>

      ```cpp
      #include <iostream>
      using namespace std;

      int main() {
          int numero;

          cout << "Digite um número inteiro positivo: ";
          cin >> numero;

          cout << "Os divisores de " << numero << " são:" << "\n";

          for (int i = 1; i <= numero; i++) {
              if (numero % i == 0) {
                  cout << i << " ";
              }
          }
      }
      ```

    </details><br/>
    
10. Elabore um programa que calcule e imprima o resultado da seguinte série:
S = 1 - 2 + 3 - 4 + 5 - 6 + ... + 99 - 100

    <details>
      <summary>Correção</summary><br/>

      ```cpp
      #include <iostream>
      using namespace std;

      int main() {
          int resultado = 0;

          for (int i = 1; i <= 100; i++) {
              if (i % 2 == 0) {
                  resultado -= i;
              } else {
                  resultado += i;
              }
          }

          cout << "O resultado da série é: " << resultado << "\n";
      }
      ```

    </details><br/>
    
11. Crie um programa que determine o maior número dentre 5 números fornecidos pelo usuário.

    <details>
      <summary>Correção</summary><br/>

      ```cpp
      #include <iostream>
      using namespace std;

      int main() {
          int numero, maior = INT_MIN;

          for (int i = 1; i <= 5; i++) {
              cout << "Digite o número " << i << ": ";
              cin >> numero;
              if (numero > maior) {
                  maior = numero;
              }
          }

          cout << "O maior número é: " << maior << "\n";
      }
      ```

    </details><br/>
    
12. Desenvolva um programa que calcule e imprima o produto dos números ímpares de 1 a 15.

    <details>
      <summary>Correção</summary><br/>

      ```cpp
      #include <iostream>
      using namespace std;

      int main() {
          int produto = 1;

          for (int i = 1; i <= 15; i += 2) {
              produto *= i;
          }

          cout << "O produto dos números ímpares de 1 a 15 é: " << produto << "\n";
      }
      ```

    </details><br/>
    
13. Crie um programa que determine quantos dígitos pares e ímpares um número inteiro possui.

    <details>
      <summary>Correção</summary><br/>

      ```cpp
      #include <iostream>
      using namespace std;

      int main() {
          int numero, digitosPares = 0, digitosImpares = 0;

          cout << "Digite um número inteiro: ";
          cin >> numero;

          while (numero != 0) {
              int digito = numero % 10;
              if (digito % 2 == 0) {
                  digitosPares++;
              } else {
                  digitosImpares++;
              }
              numero /= 10;
          }

          cout << "O número possui " << digitosPares << " dígitos pares e " << digitosImpares << " dígitos ímpares." << "\n";
      }
      ```

    </details><br/>
    
14. Elabore um programa que imprima os números primos de 1 a 50.

    <details>
      <summary>Correção</summary><br/>

      ```cpp
      #include <iostream>
      using namespace std;

      int main() {
          cout << "Os números primos de 1 a 50 são:" << "\n";

          for (int numero = 2; numero <= 50; numero++) {
              bool ehPrimo = true;

              for (int i = 2; i * i <= numero; i++) {
                  if (numero % i == 0) {
                      ehPrimo = false;
                      break;
                  }
              }

              if (ehPrimo) {
                  cout << numero << " ";
              }
          }
      }
      ```

    </details><br/>
    
15. Crie um programa que determine e imprima a soma dos dígitos de um número inteiro fornecido pelo usuário.

    <details>
      <summary>Correção</summary><br/>

      ```cpp
      #include <iostream>
      using namespace std;

      int main() {
          int numero, soma = 0;

          cout << "Digite um número inteiro: ";
          cin >> numero;

          while (numero != 0) {
              int digito = numero % 10;
              soma += digito;
              numero /= 10;
          }

          cout << "A soma dos dígitos do número é: " << soma << "\n";
      }
      ```

    </details><br/>

## Mais exercícios?

[Lista de Exercícios da Python Brasil - Estrutura de Repetição](https://wiki.python.org.br/EstruturaDeRepeticao)
