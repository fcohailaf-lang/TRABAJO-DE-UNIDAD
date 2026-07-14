#ifndef REPORTES_H
#define REPORTES_H

#include "estructuras.h"

int librosDisponibles(
    Libro libros[],
    int cantLibros
);

int librosSinStock(
    Libro libros[],
    int cantLibros
);

int usuariosConDeuda(
    Prestamo prestamos[],
    int cantPrestamos,
    Usuario usuarios[],
    int cantUsuarios
);

int usuariosSuspendidos(
    Usuario usuarios[],
    int cantUsuarios
);

int deudaTotal(
    Prestamo prestamos[],
    int cantPrestamos
);

int reporteGeneral(
    Libro libros[],
    int cantLibros,
    Usuario usuarios[],
    int cantUsuarios,
    Prestamo prestamos[],
    int cantPrestamos
);

#endif