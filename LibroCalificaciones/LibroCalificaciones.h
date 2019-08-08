//
// Created by maria on 6/8/2019.
//

#ifndef LIBROCALIFICACIONES_LIBROCALIFICACIONES_H
#define LIBROCALIFICACIONES_LIBROCALIFICACIONES_H

#include "string"
class LibroCalificaciones {
private:
    std::string nombreCurso;
    int nota;
    std::string obtenerRangoLetra();
public:
    LibroCalificaciones();
    LibroCalificaciones(std::string nom, int no);
    virtual ~LibroCalificaciones();
    std::string obtenerMensaje();
    void SetNota(int nota);
    int GetNota() const;
    void SetNombreCurso(std::string nombreCurso);
    std::string GetNombreCurso() const;

};


#endif //LIBROCALIFICACIONES_LIBROCALIFICACIONES_H
