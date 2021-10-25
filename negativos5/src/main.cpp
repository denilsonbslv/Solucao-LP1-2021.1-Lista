#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    // TODO: Adicione aqui seu código.
    // Variavel para salvar os números negativos
    int somaN = 0;
    // Laço de repetição para a entrada
    for (size_t i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        if (x < 0)
        {
            somaN++;
        }   
    }
    // Saida
    cout << somaN << std::endl;
    
    return 0;
}