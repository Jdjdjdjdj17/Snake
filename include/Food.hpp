#ifndef FOOD_H
#define FOOD_H

#include "Position.hpp"

class Food {
private:
    Posicion posicion;

public:
    Food(int ancho, int alto);

    const Posicion& obtenerPosicion() const;
    void regenerar(int ancho, int alto);
};

#endif // FOOD_H