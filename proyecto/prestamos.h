#ifndef PRESTAMOS_H
#define PRESTAMOS_H

#include "estructuras.h"

int registrarPrestamo(
    Prestamo prestamos[],
    int &cantPrestamos,
    Usuario usuarios[],
    int cantUsuarios,
    Libro libros[],
    int cantLibros
);

int registrarDevolucion(
    Prestamo prestamos[],
    int cantPrestamos,
    Libro libros[],
    int cantLibros
);

int mostrarPrestamos(
    Prestamo prestamos[],
    int cantPrestamos
);

#endif