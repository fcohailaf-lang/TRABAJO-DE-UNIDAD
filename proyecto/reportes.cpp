#include <iostream>

#include "reportes.h"

using namespace std;

int librosDisponibles(
    Libro libros[],
    int cantLibros
)
{
    cout << "\n===== LIBROS DISPONIBLES =====\n";

    for(int i = 0; i < cantLibros; i++)
    {
        if(libros[i].stock > 0)
        {
            cout << "\nCodigo: "
                 << libros[i].codigo;

            cout << "\nTitulo: "
                 << libros[i].titulo;

            cout << "\nStock: "
                 << libros[i].stock;

            cout << "\n";
        }
    }

    return 1;
}

int librosSinStock(
    Libro libros[],
    int cantLibros
)
{
    cout << "\n===== LIBROS SIN STOCK =====\n";

    for(int i = 0; i < cantLibros; i++)
    {
        if(libros[i].stock == 0)
        {
            cout << "\nCodigo: "
                 << libros[i].codigo;

            cout << "\nTitulo: "
                 << libros[i].titulo;

            cout << "\n";
        }
    }

    return 1;
}

int usuariosConDeuda(
    Prestamo prestamos[],
    int cantPrestamos,
    Usuario usuarios[],
    int cantUsuarios
)
{
    cout << "\n===== USUARIOS CON DEUDA =====\n";

    for(int i = 0; i < cantPrestamos; i++)
    {
        if(prestamos[i].deuda > 0)
        {
            for(int j = 0; j < cantUsuarios; j++)
            {
                if(usuarios[j].codigo ==
                   prestamos[i].codigoUsuario)
                {
                    cout << "\nCodigo: "
                         << usuarios[j].codigo;

                    cout << "\nNombre: "
                         << usuarios[j].nombre;

                    cout << "\nDeuda: S/. "
                         << prestamos[i].deuda;

                    cout << "\n";
                }
            }
        }
    }

    return 1;
}

int usuariosSuspendidos(
    Usuario usuarios[],
    int cantUsuarios
)
{
    cout << "\n===== USUARIOS SUSPENDIDOS =====\n";

    for(int i = 0; i < cantUsuarios; i++)
    {
        if(usuarios[i].estado == 0)
        {
            cout << "\nCodigo: "
                 << usuarios[i].codigo;

            cout << "\nNombre: "
                 << usuarios[i].nombre;

            cout << "\nCarrera: "
                 << usuarios[i].carrera;

            cout << "\n";
        }
    }

    return 1;
}

int deudaTotal(
    Prestamo prestamos[],
    int cantPrestamos
)
{
    float total = 0;

    for(int i = 0; i < cantPrestamos; i++)
    {
        total += prestamos[i].deuda;
    }

    cout << "\n===== DEUDA TOTAL =====\n";

    cout << "Monto acumulado: S/. "
         << total
         << endl;

    return 1;
}

int reporteGeneral(
    Libro libros[],
    int cantLibros,
    Usuario usuarios[],
    int cantUsuarios,
    Prestamo prestamos[],
    int cantPrestamos
)
{
    cout << "\n===== REPORTE GENERAL =====\n";

    cout << "\nTotal de libros: "
         << cantLibros;

    cout << "\nTotal de usuarios: "
         << cantUsuarios;

    cout << "\nTotal de prestamos: "
         << cantPrestamos;

    int disponibles = 0;

    for(int i = 0; i < cantLibros; i++)
    {
        if(libros[i].stock > 0)
        {
            disponibles++;
        }
    }

    cout << "\nLibros disponibles: "
         << disponibles;

    int suspendidos = 0;

    for(int i = 0; i < cantUsuarios; i++)
    {
        if(usuarios[i].estado == 0)
        {
            suspendidos++;
        }
    }

    cout << "\nUsuarios suspendidos: "
         << suspendidos;

    float deuda = 0;

    for(int i = 0; i < cantPrestamos; i++)
    {
        deuda += prestamos[i].deuda;
    }

    cout << "\nDeuda acumulada: S/. "
         << deuda
         << endl;

    return 1;
}