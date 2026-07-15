#ifndef USUARIOS_H
#define USUARIOS_H
#include "estructuras.h"

int registrarUsuario(
    Usuario usuarios[],
    int &cantUsuarios
);

int listarUsuarios(
    Usuario usuarios[],
    int cantUsuarios
);

int buscarUsuario(
    Usuario usuarios[],
    int cantUsuarios
);

int modificarUsuario(
    Usuario usuarios[],
    int cantUsuarios
);

int suspenderUsuario(
    Usuario usuarios[],
    int cantUsuarios
);

int reactivarUsuario(
    Usuario usuarios[],
    int cantUsuarios
);

#endif
