#include "function.h"
#include <iostream>

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], std::size_t n )
{
    // TODO: Adicione aqui sua solução.
    // Criando pair
    std::pair <int , int> min_max;
    if (n > 0) // Verificando se existe elementos no vetor
    {
        for (std::size_t i = 0; i < n; i++) // Pegando o menor e o maior elemento
        {
            if(V[i] < V[min_max.first]){
                min_max.first = i;
            }
            if(V[i] >= V[min_max.second]){
                min_max.second = i;
            }
        }
    }else{
        min_max.first = -1;
        min_max.second = -1;       
    }
    
    return min_max;
}
