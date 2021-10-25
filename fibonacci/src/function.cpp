#include "function.h"
#include <iostream>

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.
    // Criando o vector
    vector<unsigned int> fib = {};
    
    // If caso seja 1
    if (n != 1)
    {
        fib.push_back(1);
        fib.push_back(1);

        // Criando os interadores para poder trabalhar com o vector
        vector<unsigned int>::iterator ult = std::prev(fib.end());
        vector<unsigned int>::iterator penult = fib.end(); 

        // Variavel auxiliar
        unsigned int aux = *penult + *ult;

        // Laço para implementar a sequencia
        while (aux < n){
            penult = fib.end() - 2;
            ult = fib.end() - 1;
            aux = *penult + *ult;
            if (aux < n)
            {
                fib.push_back(aux);
            }
        }  
    };
    
    return fib;
}
