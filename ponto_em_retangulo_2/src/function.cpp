#include "function.h"
#include <iostream>

// Função para retornar onde o ponto está no retângulo
location_t pt_in_rect_1( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    Ponto IEa = IE, SDa = SD;

    if(IE.x < SD.x && IE.y < SD.y) // Verificando qual ponto é o IE e o SD
    {
        IEa = SD, SDa = IE;
    }

    location_t lt;

    // TODO: Coloque aqui seu código.
    if ((P.x >= IEa.x && P.x <= SDa.x) && ( P.y == IEa.y || P.y == SDa.y)) // Verificando se o ponto está na linha inferior ou inferior
    {
        lt = BORDER;
    }
    else if (( P.y >= IEa.y && P.y <= SDa.y) && ( P.x == IEa.x || P.x == SDa.x )) // Verificando se o ponto está na linha esqueda ou direita
    {
        lt = BORDER;
    }
    else if ( ( P.x > IEa.x && P.x <  SDa.x) && ( P.y > IEa.y && P.y < SDa.y ) )
    {
        lt = INSIDE;
    }else{
        lt = OUTSIDE;
    }

    // TODO: Substitua o retorno conforme desejar. Isso é apenas um STUB, usado apenas para compilar.
    return lt;
}


/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P)
{   
    location_t lt;

    if (IE.x == SD.x || IE.y == SD.y)  // Verificando se o retângulo é válido.
    {
        lt = OUTSIDE;
        
    }else{
        lt = pt_in_rect_1(IE, SD, P);
    }
    return lt;
}
