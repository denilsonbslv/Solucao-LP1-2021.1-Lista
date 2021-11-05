/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{
    Ponto IE{-3, -1}, SD{3, 1}, P{0,0};
    while (cin >> std::ws >> IE.x && cin >> std::ws >> IE.y &&
           cin >> std::ws >> SD.x && cin >> std::ws >> SD.y &&
           cin >> std::ws >> P.x && cin >> std::ws >> P.y)
    {
        cout << pt_in_rect(IE, SD, P) << std::endl;
    }
    
    return 0;
}
