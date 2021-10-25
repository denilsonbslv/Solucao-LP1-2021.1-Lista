/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    // TODO: Adicione aqui a sua solução.
    // Array para fazer a contagem de dos intervalos
    double contIntervalos[5] = {};
    double qtdValores = 0;

    // Iniciando array da contagem
    for (size_t i = 0; i < 5; i++)
    {
        contIntervalos[i] = 0;
    }
    
    // Laço de repetição para verificar os intervalos
    int vlr;
    while(cin >> std::ws >> vlr) {    
        if(vlr >= 0 && vlr < 25)  // Intervalo [0 ; 25) : contIntervalos[0]
        {
            contIntervalos[0]++;
            qtdValores++;
        }else{
            if (vlr >= 25 && vlr < 50) // Intervalo [25 ; 50) : contIntervalos[1]
            {
                contIntervalos[1]++;
                qtdValores++;
            }else{
                if (vlr >= 50 && vlr < 75) // Intervalo [50 ; 75) : contIntervalos[2]
                {
                    contIntervalos[2]++;
                    qtdValores++;
                }else{
                    if (vlr >= 75 && vlr < 100) // Intervalo [75 ; 100) : contIntervalos[3]
                    {
                        contIntervalos[3]++;
                        qtdValores++;
                    }else{ // Valores fora dos intervalos ]0 ; 100[ : contIntervalos[4]
                        contIntervalos[4]++;
                        qtdValores++;
                    }
                }
            }
        }
    }

    for (size_t i = 0; i < 5; i++)
    {
        cout << std::setprecision(4) << (contIntervalos[i] * 100 / qtdValores) << endl; 
    }

    return 0;
}
