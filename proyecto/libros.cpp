#include <iostream>
#include <string>

#include "libros.h"

using namespace std;

int registrarLibro(
    Libro libros[],
    int &cantLibros
)
{
    cout << "\n===== REGISTRAR LIBRO =====\n";

    cout << "Codigo: ";
    cin >> libros[cantLibros].codigo;

    cin.ignore();

    cout << "Titulo: ";
    getline(cin, libros[cantLibros].titulo);

    cout << "Autor: ";
    getline(cin, libros[cantLibros].autor);

    cout << "Editorial: ";
    getline(cin, libros[cantLibros].editorial);

    cout << "Anio: ";
    cin >> libros[cantLibros].anio;

    cout << "Stock: ";
    cin >> libros[cantLibros].stock;

    cout << "Multa diaria: ";
    cin >> libros[cantLibros].multaDiaria;

    cantLibros++;

    cout << "\nLibro registrado correctamente.\n";

    return 1;
}

int listarLibros(
    Libro libros[],
    int cantLibros
)
{
    cout << "\n===== LISTA DE LIBROS =====\n";

    if(cantLibros == 0)
    {
        cout << "No hay libros registrados.\n";
        return 0;
    }

    for(int i = 0; i < cantLibros; i++)
    {
        cout << "\nLibro " << i + 1 << endl;

        cout << "Codigo: "
             << libros[i].codigo << endl;

        cout << "Titulo: "
             << libros[i].titulo << endl;

        cout << "Autor: "
             << libros[i].autor << endl;

        cout << "Editorial: "
             << libros[i].editorial << endl;

        cout << "Anio: "
             << libros[i].anio << endl;

        cout << "Stock: "
             << libros[i].stock << endl;

        cout << "Multa diaria: S/. "
             << libros[i].multaDiaria << endl;
    }

    return 1;
}

int buscarLibro(
    Libro libros[],
    int cantLibros
)
{
    int codigo;

    cout << "\nIngrese codigo del libro: ";
    cin >> codigo;

    for(int i = 0; i < cantLibros; i++)
    {
        if(libros[i].codigo == codigo)
        {
            cout << "\nLibro encontrado\n";

            cout << "Titulo: "
                 << libros[i].titulo << endl;

            cout << "Autor: "
                 << libros[i].autor << endl;

            cout << "Stock: "
                 << libros[i].stock << endl;

            return i;
        }
    }

    cout << "\nLibro no encontrado.\n";

    return -1;
}

int modificarLibro(
    Libro libros[],
    int cantLibros
)
{
    int codigo;

    cout << "\nIngrese el codigo del libro a modificar: ";
    cin >> codigo;

    for(int i = 0; i < cantLibros; i++)
    {
        if(libros[i].codigo == codigo)
        {
            cin.ignore();

            cout << "\nNuevo titulo: ";
            getline(cin, libros[i].titulo);

            cout << "Nuevo autor: ";
            getline(cin, libros[i].autor);

            cout << "Nueva editorial: ";
            getline(cin, libros[i].editorial);

            cout << "Nuevo anio: ";
            cin >> libros[i].anio;

            cout << "Nuevo stock: ";
            cin >> libros[i].stock;

            cout << "Nueva multa diaria: ";
            cin >> libros[i].multaDiaria;

            cout << "\nLibro modificado correctamente.\n";

            return 1;
        }
    }

    cout << "\nLibro no encontrado.\n";

    return 0;
}

int eliminarLibro(
    Libro libros[],
    int &cantLibros
)
{
    int codigo;

    cout << "\nIngrese el codigo del libro a eliminar: ";
    cin >> codigo;

    for(int i = 0; i < cantLibros; i++)
    {
        if(libros[i].codigo == codigo)
        {
            for(int j = i; j < cantLibros - 1; j++)
            {
                libros[j] = libros[j + 1];
            }

            cantLibros--;

            cout << "\nLibro eliminado correctamente.\n";

            return 1;
        }
    }

    cout << "\nLibro no encontrado.\n";

    return 0;
}

int ordenarLibros(
    Libro libros[],
    int cantLibros
)
{
    Libro aux;

    for(int i = 0; i < cantLibros - 1; i++)
    {
        for(int j = 0; j < cantLibros - i - 1; j++)
        {
            if(libros[j].titulo > libros[j + 1].titulo)
            {
                aux = libros[j];
                libros[j] = libros[j + 1];
                libros[j + 1] = aux;
            }
        }
    }

    cout << "\nLibros ordenados correctamente.\n";

    return 1;
}


