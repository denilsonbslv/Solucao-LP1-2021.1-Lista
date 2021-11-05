#include <iostream>
#include <array>
using std::cin;
using std::cout;
using std::endl;

/// Representa um ponto em 2D
struct Ponto {
    int x; //!< coordenada x.
    int y; //!< coordenada y.
    Ponto( int xi=0, int yi=0 ) : x{xi}, y{yi}
    {}
};

/// Tipos de localização do ponto no retângulo.
enum location_t :int { INSIDE=0, BORDER=1, OUTSIDE=2 };

int main(void)
{
    Ponto ie{2, 2}; Ponto sd{7, 9};   


    Ponto P{2, 7};

    location_t lt;

    if(ie.x < sd.x && ie.y < sd.y) // Verificando qual ponto é o IE e o SD
    {
        Ponto aux = ie;
        ie = sd; sd = aux;
    }

    if ((P.x >= ie.x && P.x <= sd.x) && ( P.y == ie.y || P.y == sd.y)) // Verificando se o ponto está na linha inferior
    {
        lt = BORDER;
        cout << lt << std::endl;

        return lt;
    }

    if (( P.y >= ie.y && P.y <= sd.y) && ( P.x == ie.x || P.x == sd.x )) // Verificando se o ponto está na linha esqueda ou direita
    {
        lt = BORDER;
        cout << lt << std::endl;

        return lt;
    }
    
    if ( ( P.x > ie.x && P.x <  sd.x) && ( P.y > ie.y && P.y < sd.y ) )
    {
        lt = INSIDE;
        cout << lt << std::endl;

        return lt;
    }else{
        lt = OUTSIDE;
        cout << lt << std::endl;
        
        return lt;
    }
    

    cout << lt << std::endl;
    
}