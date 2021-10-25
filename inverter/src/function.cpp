#include <iostream>
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    // Pegando o tamanho do array
    size_t tam = arr.size();

    if (tam != 0) // Verificando se o array contem elementos
    {
        if (tam % 2 == 0) // Verificando se o tamanho do array é pá ou não
        {
           for (size_t i = 0; i < tam/2; i++)
           {
               std::string Aux = arr[tam - 1 - i];
               arr[tam - 1 - i] = arr[i];
               arr[i] = Aux;
           }
        }else{
            for (size_t i = 0; i < (tam - 1)/2; i++)
            {
                std::string Aux = arr[tam - 1 - i];
                arr[tam - 1 - i] = arr[i];
                arr[i] = Aux;
            }
        }
    }
    
}
