#include <iostream>
using namespace std;

int main()
{
  int tamanho = 10;

  int vetor_a[tamanho];     // 10
  int vetor_b[tamanho];     // 10
  int vetor_c[tamanho * 2]; // 20

  // lê os inteiros do primeiro vetor
  cout << "\nInforme os numeros do primeiro vetor:\n";
  for (int i = 0; i < tamanho; i++)
  {
    cout << "Informe o " << i + 1 << " numero";
    cin >> vetor_a[i];
  }

  // lê os inteiros do segundo vetor
  cout << "\nInforme os numeros do segundo vetor:\n";
  for (int i = 0; i < tamanho; i++)
  {
    cout << "Informe o " << i + 1 << " numero";
    cin >> vetor_b[i];
  }

  int i_vetor_c = 0; // índice do terceiro vetor
  // intercala o primeiro e o segundo vetor no terceiro
  for (int i = 0; i < tamanho; i++)
  {
    vetor_c[i_vetor_c] = vetor_a[i];
    i_vetor_c = i_vetor_c + 1;

    vetor_c[i_vetor_c] = vetor_b[i];
    i_vetor_c = i_vetor_c + 1;
  }

  // exibe o terceiro vetor
  for (int i = 0; i < tamanho * 2; i++)
  {
    cout << vetor_c[i] << "\n";
  }

  cout << "\n\n\n";
}