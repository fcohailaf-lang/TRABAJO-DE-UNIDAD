#include <iostream>
#include "menu.h"
#include "estructuras.h"
#include "libros.h"
#include "usuarios.h"
#include "prestamos.h"
#include "reportes.h"

using namespace std;

int main()
{
    Libro libros[100];
    Usuario usuarios[100];
    Prestamo prestamos[100];

    int cantLibros = 0;
    int cantUsuarios = 0;
    int cantPrestamos = 0;
    int opcion;

    do
    {
        opcion = mostrarMenu();
        switch(opcion)
        {
            // PARTE PARA LA GESTIÓN DE LIBROS

            case 1:
                registrarLibro(libros, cantLibros);
                break;
            case 2:
                listarLibros(libros, cantLibros);
                break;
            case 3:
                buscarLibro(libros, cantLibros);
                break;
            case 4:
                modificarLibro(libros, cantLibros);
                break;
            case 5:
                eliminarLibro(libros, cantLibros);
                break;
            case 6:
                ordenarLibros(libros, cantLibros);
                break;

            // PARTE PARA LA GESTIÓN DE USUARIOS

            case 7:
                registrarUsuario(usuarios, cantUsuarios);
                break;
            case 8:
                listarUsuarios(usuarios, cantUsuarios);
                break;
            case 9:
                buscarUsuario(usuarios, cantUsuarios);
                break;
            case 10:
                modificarUsuario(usuarios, cantUsuarios);
                break;
            case 11:
                suspenderUsuario(usuarios, cantUsuarios);
                break;
            case 12:
                reactivarUsuario(usuarios, cantUsuarios);
                break;

            // PARTE PARA LA GESTIÓN DE PRÉSTAMOS

            case 13:
                registrarPrestamo(
                    prestamos,
                    cantPrestamos,
                    usuarios,
                    cantUsuarios,
                    libros,
                    cantLibros
                );
                break;
            case 14:
                registrarDevolucion(
                    prestamos,
                    cantPrestamos,
                    libros,
                    cantLibros
                );
                break;
            case 15:
                mostrarPrestamos(
                    prestamos,
                    cantPrestamos
                );
                break;

            // PARTE PARA LOS REPORTES

            case 16:
                librosDisponibles(
                    libros,
                    cantLibros
                );
                break;
            case 17:
                librosSinStock(
                    libros,
                    cantLibros
                );
                break;
            case 18:
                usuariosConDeuda(
                    prestamos,
                    cantPrestamos,
                    usuarios,
                    cantUsuarios
                );
                break;
            case 19:
                usuariosSuspendidos(
                    usuarios,
                    cantUsuarios
                );
                break;
            case 20:
                deudaTotal(
                    prestamos,
                    cantPrestamos
                );
                break;
            case 21:
                reporteGeneral(
                    libros,
                    cantLibros,
                    usuarios,
                    cantUsuarios,
                    prestamos,
                    cantPrestamos
                );
                break;

            case 0:
                cout << "\nGracias por utilizar el sistema.\n";
                break;
            default:
                cout << "\nOpcion invalida.\n";
        }

        cout << endl;
    } while(opcion != 0);

    return 0;
}
