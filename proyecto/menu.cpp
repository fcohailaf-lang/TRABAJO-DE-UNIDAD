#include <iostream>
#include "menu.h"

using namespace std;

int mostrarMenu(){
    int opcion;

    cout << "====================================================" << endl;
    cout << " SISTEMA DE GESTION BIBLIOTECARIA - UNJBG" << endl;
    cout << "====================================================" << endl;
    cout << endl;

    cout << "GESTION DE LIBROS" << endl;
    cout << "1. Registrar libro" << endl;
    cout << "2. Listar libros" << endl;
    cout << "3. Buscar libro" << endl;
    cout << "4. Modificar libro" << endl;
    cout << "5. Eliminar libro" << endl;
    cout << "6. Ordenar libros" << endl;
    cout << endl;

    cout << "GESTION DE USUARIOS" << endl;
    cout << "7. Registrar usuario" << endl;
    cout << "8. Listar usuarios" << endl;
    cout << "9. Buscar usuario" << endl;
    cout << "10. Modificar usuario" << endl;
    cout << "11. Suspender usuario" << endl;
    cout << "12. Reactivar usuario" << endl;
    cout << endl;

    cout << "GESTION DE PRESTAMOS" << endl;
    cout << "13. Registrar prestamo" << endl;
    cout << "14. Registrar devolucion" << endl;
    cout << "15. Mostrar prestamos activos" << endl;
    cout << endl;

    cout << "REPORTES" << endl;
    cout << "16. Libros disponibles" << endl;
    cout << "17. Libros sin stock" << endl;
    cout << "18. Usuarios con deuda" << endl;
    cout << "19. Usuarios suspendidos" << endl;
    cout << "20. Deuda total acumulada" << endl;
    cout << "21. Reporte general" << endl;
    cout << endl;

    cout << "0. Salir" << endl;
    cout << endl;

    cout << "Seleccione una opcion: ";
    cin >> opcion;

    return opcion;
}