#include <iostream>
#include "prestamos.h"

using namespace std;

int registrarPrestamo(
    Prestamo prestamos[],
    int &cantPrestamos,
    Usuario usuarios[],
    int cantUsuarios,
    Libro libros[],
    int cantLibros
)
{
    int codigoUsuario;
    int codigoLibro;
    
    if(cantPrestamos >= 100)
    {
        cout << "\nLimite de prestamos alcanzado.\n";
        return 0;
    }

    cout << "\n===== REGISTRAR PRESTAMO =====\n";

    cout << "Codigo de usuario: ";
    cin >> codigoUsuario;

    int posUsuario = -1;

    for(int i = 0; i < cantUsuarios; i++)
    {
        if(usuarios[i].codigo == codigoUsuario)
        {
            posUsuario = i;
        }
    }

    if(posUsuario == -1)
    {
        cout << "\nUsuario no encontrado.\n";
        return 0;
    }

    if(usuarios[posUsuario].estado == 0)
    {
        cout << "\nUsuario suspendido.\n";
        return 0;
    }

    cout << "Codigo del libro: ";
    cin >> codigoLibro;

    int posLibro = -1;

    for(int i = 0; i < cantLibros; i++)
    {
        if(libros[i].codigo == codigoLibro)
        {
            posLibro = i;
        }
    }

    if(posLibro == -1)
    {
        cout << "\nLibro no encontrado.\n";
        return 0;
    }

    if(libros[posLibro].stock <= 0)
    {
        cout << "\nNo hay ejemplares disponibles.\n";
        return 0;
    }

    prestamos[cantPrestamos].codigoPrestamo =
        cantPrestamos + 1;

    prestamos[cantPrestamos].codigoUsuario =
        codigoUsuario;

    prestamos[cantPrestamos].codigoLibro =
        codigoLibro;

    prestamos[cantPrestamos].diasPrestamo = 7;

    prestamos[cantPrestamos].diasRetraso = 0;

    prestamos[cantPrestamos].deuda = 0;
    
    prestamos[cantPrestamos].estado = 1;

    libros[posLibro].stock--;

    cantPrestamos++;

    cout << "\nPrestamo registrado correctamente.\n";

    return 1;
}

int registrarDevolucion(
    Prestamo prestamos[],
    int cantPrestamos,
    Libro libros[],
    int cantLibros
)
{
    int codigoPrestamo;

    cout << "\nCodigo de prestamo: ";
    cin >> codigoPrestamo;

    for(int i = 0; i < cantPrestamos; i++)
    {
        if(prestamos[i].codigoPrestamo == codigoPrestamo)
        {
            cout << "Dias de retraso: ";
            cin >> prestamos[i].diasRetraso;

            int posLibro = -1;

            for(int j = 0; j < cantLibros; j++)
            {
                if(libros[j].codigo ==
                   prestamos[i].codigoLibro)
                {
                    posLibro = j;
                }
            }

            if(posLibro != -1)
            {
                libros[posLibro].stock++;
            }

            prestamos[i].deuda =
                prestamos[i].diasRetraso *
                libros[posLibro].multaDiaria;
                prestamos[i].estado = 0;

            cout << "\nDeuda generada: S/. "
                 << prestamos[i].deuda
                 << endl;

            return 1;
        }
    }

    cout << "\nPrestamo no encontrado.\n";

    return 0;
}

int mostrarPrestamos(
    Prestamo prestamos[],
    int cantPrestamos
)
{
    cout << "\n===== PRESTAMOS ACTIVOS =====\n";

    if(cantPrestamos == 0)
    {
        cout << "No existen prestamos.\n";
        return 0;
    }

    for(int i = 0; i < cantPrestamos; i++)
    {
    	if(prestamos[i].estado == 1)
    	{
        	cout << "\nPrestamo "
            	 << prestamos[i].codigoPrestamo
            	 << endl;

        	cout << "Usuario: "
            	 << prestamos[i].codigoUsuario
            	 << endl;

        	cout << "Libro: "
            	 << prestamos[i].codigoLibro
            	 << endl;

        	cout << "Dias de retraso: "
            	 << prestamos[i].diasRetraso
            	 << endl;

        	cout << "Deuda: S/. "
            	 << prestamos[i].deuda
            	 << endl;
    	}
	}
    return 1;
}
