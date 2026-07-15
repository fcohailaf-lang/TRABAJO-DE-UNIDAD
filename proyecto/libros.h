#ifndef LIBROS_H
#define LIBROS_H
#include "estructuras.h"

int registrarLibro(
    Libro libros[],
    int &cantLibros
);

int listarLibros(
    Libro libros[],
    int cantLibros
);

int buscarLibro(
    Libro libros[],
    int cantLibros
);

int modificarLibro(
    Libro libros[],
    int cantLibros
);

int eliminarLibro(
    Libro libros[],
    int &cantLibros
);

int ordenarLibros(
    Libro libros[],
    int cantLibros
);

#endif
