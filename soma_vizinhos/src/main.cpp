/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    // TODO: Adicione seu código aqui.

    // Laço de repetição para verificar os intervalos
    int m;
    int n;
    while((cin >> std::ws >> m) && (cin >> std::ws >> n)) {
        // Declaração da variavel soma
        int somaViz = 0;

        // Somando os vizinhos
        if(n >= -10000 && n <= 10000){
            if (n > 0) // Se n for positivo
            {
                for (int i = m; i < (m + n); i++)
                {
                    somaViz += i;
                }
            }
            if (n < 0) // Se n for negativo
            {
                if (m < 0)
                {
                    for (int i = m; i > (m + n); i--)
                    {
                        somaViz+= i;
                    }
                }else{
                    if(m > 0)
                    {
                        for (int i = m; i > (m - (n*-1)); i--)
                        {
                            somaViz+= i;
                        }       
                    }
                }   
            }
            if (n == 0) // Se n for zero
            {
                somaViz = m;
            }
        }

        // SAIDA
        cout << somaViz << endl;
    }
    return 0;
}
