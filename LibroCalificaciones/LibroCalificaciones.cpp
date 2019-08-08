//
// Created by maria on 6/8/2019.
//

#include "LibroCalificaciones.h"

LibroCalificaciones::LibroCalificaciones() {
    nombreCurso="";
    nota=0;
}

LibroCalificaciones::LibroCalificaciones(std::string nom,int no) {
    nombreCurso=nom;
    nota=no;

}

LibroCalificaciones::~LibroCalificaciones() {
}

void LibroCalificaciones::SetNota(int nota) {
    this->nota = nota;
}

int LibroCalificaciones::GetNota() const {
    return nota;
}

void LibroCalificaciones::SetNombreCurso(std::string nombreCurso) {
    this->nombreCurso = nombreCurso;
}

std::string LibroCalificaciones::GetNombreCurso() const {
    return nombreCurso;
}
 std::string LibroCalificaciones::obtenerRangoLetra() {
     std::string letra;
     if (GetNota() >= 90) {
         letra = "A";
     } else if (GetNota() >= 80) {
         letra = "B";
     } else if (GetNota() >= 70) {
         letra = "C";
     } else if (GetNota() >= 60) {
         letra = "D";
     } else
         letra = "F";


    return letra;
}

std::string LibroCalificaciones::obtenerMensaje(){
    std::string mensaje="";
    mensaje = "El Curso:" + GetNombreCurso() +"con la nota :" + (std::to_string(GetNota())) + " pertenece al rango :"+ obtenerRangoLetra();
    return mensaje;
}