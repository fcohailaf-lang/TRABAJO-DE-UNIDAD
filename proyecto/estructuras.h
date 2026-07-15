#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H
#include <string>
using namespace std;

struct Libro
{
    int codigo;
    string titulo;
    string autor;
    string editorial;
    int anio;
    int stock;
    float multaDiaria;
};

struct Usuario
{
    int codigo;
    string nombre;
    string carrera;
    int ciclo;
    int estado;
};

struct Prestamo
{
    int codigoPrestamo;
    int codigoUsuario;
    int codigoLibro;
    int diasPrestamo;
    int diasRetraso;
    float deuda;
    int estado;

};

#endif
