
#include <cstdlib>
#include "iostream"
#include "LibroCalificaciones.h"
using namespace std;

int main() {
    LibroCalificaciones CursoA(" Contabilidad ",90);
    LibroCalificaciones CursoB(" Gerencia ",87);
    LibroCalificaciones CursoC(" Programacion II ",72);
    LibroCalificaciones CursoD(" Estructuras ",65);
    LibroCalificaciones CursoF(" Adm.Proyectos ",32);
    LibroCalificaciones CursoE(" Paradigmas ",40);
    cout<<CursoA.obtenerMensaje()<<endl;
    cout<<CursoB.obtenerMensaje()<<endl;
    cout<<CursoC.obtenerMensaje()<<endl;
    cout<<CursoD.obtenerMensaje()<<endl;
    cout<<CursoF.obtenerMensaje()<<endl;
    cout<<CursoE.obtenerMensaje()<<endl;
    return 0;
}