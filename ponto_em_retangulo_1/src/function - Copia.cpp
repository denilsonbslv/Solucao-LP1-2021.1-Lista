#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

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
