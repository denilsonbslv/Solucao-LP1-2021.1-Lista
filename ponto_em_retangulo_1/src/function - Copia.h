#ifndef FUNCTION_H
#define FUNCTION_H
#include <array>
using std::array;

#include <string>
using std::string;

/// Representa um ponto em 2D
struct Ponto {
    int x; //!< coordenada x.
    int y; //!< coordenada y.
    Ponto( int xi=0, int yi=0 ) : x{xi}, y{yi}
    {}
};

/// Tipos de localização do ponto no retângulo.
enum location_t :int { INSIDE=0, BORDER=1, OUTSIDE=2 };

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    location_t lt;

    // TODO: Coloque aqui seu código.
    if ((P.x >= IE.x && P.x <= SD.x) && ( P.y == IE.y || P.y == SD.y)) // Verificando se o ponto está na linha inferior ou inferior
    {
        lt = BORDER;
    }
    else if (( P.y >= IE.y && P.y <= SD.y) && ( P.x == IE.x || P.x == SD.x )) // Verificando se o ponto está na linha esqueda ou direita
    {
        lt = BORDER;
    }
    else if ( ( P.x > IE.x && P.x <  SD.x) && ( P.y > IE.y && P.y < SD.y ) )
    {
        lt = INSIDE;
    }else{
        lt = OUTSIDE;
    }

    // TODO: Substitua o retorno conforme desejar. Isso é apenas um STUB, usado apenas para compilar.
    return lt;
}

location_t pt_in_rect( const Ponto&, const Ponto&, const Ponto& );

#endif
