#include <iostream>
#include <string>
#include "usuarios.h"

using namespace std;

int registrarUsuario(
    Usuario usuarios[],
    int &cantUsuarios
)
{
	if(cantUsuarios >= 100)
    {
        cout << "\nLimite de usuarios alcanzado.\n";
        return 0;
    }
    
    cout << "\n===== REGISTRAR USUARIO =====\n";

    cout << "Codigo: ";
    cin >> usuarios[cantUsuarios].codigo;
    for(int i = 0; i < cantUsuarios; i++)
	{
	    if(usuarios[i].codigo ==
	       usuarios[cantUsuarios].codigo)
	    {
	        cout << "\nCodigo ya registrado.\n";
	        return 0;
	    }
	}
    cin.ignore();

    cout << "Nombre: ";
    getline(cin, usuarios[cantUsuarios].nombre);

    cout << "Carrera: ";
    getline(cin, usuarios[cantUsuarios].carrera);

    cout << "Ciclo: ";
    cin >> usuarios[cantUsuarios].ciclo;

    usuarios[cantUsuarios].estado = 1;

    cantUsuarios++;

    cout << "\nUsuario registrado correctamente.\n";

    return 1;
}

int listarUsuarios(
    Usuario usuarios[],
    int cantUsuarios
)
{
    cout << "\n===== LISTA DE USUARIOS =====\n";

    if(cantUsuarios == 0)
    {
        cout << "No hay usuarios registrados.\n";
        return 0;
    }

    for(int i = 0; i < cantUsuarios; i++)
    {
        cout << "\nUsuario " << i + 1 << endl;

        cout << "Codigo: "
             << usuarios[i].codigo << endl;

        cout << "Nombre: "
             << usuarios[i].nombre << endl;

        cout << "Carrera: "
             << usuarios[i].carrera << endl;

        cout << "Ciclo: "
             << usuarios[i].ciclo << endl;

        if(usuarios[i].estado == 1)
        {
            cout << "Estado: Activo" << endl;
        }
        else
        {
            cout << "Estado: Suspendido" << endl;
        }
    }

    return 1;
}

int buscarUsuario(
    Usuario usuarios[],
    int cantUsuarios
)
{
    int codigo;

    cout << "\nIngrese codigo del usuario: ";
    cin >> codigo;

    for(int i = 0; i < cantUsuarios; i++)
    {
        if(usuarios[i].codigo == codigo)
        {
            cout << "\nUsuario encontrado\n";

            cout << "Nombre: "
                 << usuarios[i].nombre << endl;

            cout << "Carrera: "
                 << usuarios[i].carrera << endl;

            cout << "Ciclo: "
                 << usuarios[i].ciclo << endl;

            return i;
        }
    }

    cout << "\nUsuario no encontrado.\n";

    return -1;
}

int modificarUsuario(
    Usuario usuarios[],
    int cantUsuarios
)
{
    int codigo;

    cout << "\nIngrese el codigo del usuario: ";
    cin >> codigo;

    for(int i = 0; i < cantUsuarios; i++)
    {
        if(usuarios[i].codigo == codigo)
        {
            cin.ignore();

            cout << "\nNuevo nombre: ";
            getline(cin, usuarios[i].nombre);

            cout << "Nueva carrera: ";
            getline(cin, usuarios[i].carrera);

            cout << "Nuevo ciclo: ";
            cin >> usuarios[i].ciclo;

            cout << "\nUsuario modificado correctamente.\n";

            return 1;
        }
    }

    cout << "\nUsuario no encontrado.\n";

    return 0;
}

int suspenderUsuario(
    Usuario usuarios[],
    int cantUsuarios
)
{
    int codigo;

    cout << "\nIngrese codigo del usuario: ";
    cin >> codigo;

    for(int i = 0; i < cantUsuarios; i++)
    {
        if(usuarios[i].codigo == codigo)
        {
            usuarios[i].estado = 0;

            cout << "\nUsuario suspendido.\n";

            return 1;
        }
    }

    cout << "\nUsuario no encontrado.\n";

    return 0;
}

int reactivarUsuario(
    Usuario usuarios[],
    int cantUsuarios
)
{
    int codigo;

    cout << "\nIngrese codigo del usuario: ";
    cin >> codigo;

    for(int i = 0; i < cantUsuarios; i++)
    {
        if(usuarios[i].codigo == codigo)
        {
            usuarios[i].estado = 1;

            cout << "\nUsuario reactivado.\n";

            return 1;
        }
    }

    cout << "\nUsuario no encontrado.\n";

    return 0;
}
