#pragma once

#include <iostream>
#include <fstream>
#include <istream>
using namespace std;

#include "Lista.h"
class GestorArchivos {
private:
    string ruta;
    fstream archivo;
public:
    GestorArchivos(string);
    virtual ~GestorArchivos();

    //****Paso 1****
    virtual void abrirFlujoModoEscritura();
    virtual void abrirFlujoModoLectura();
    virtual void cerrarFlujo();

    //****Paso 2****
    static int obtenerInt(string);
    static double obtenerDouble(string);
    static bool obtenerBool(string);
    //****Paso 3****
    virtual void guardarInt(int, char);
    virtual void guardarDouble(double, char);
    virtual void guardarString(string, char);
    virtual void guardarBool(bool, char);
//    virtual void guardarFacultadEscuela(Facultad*, char);
//    virtual void guardarEscuelaArchivos(Escuela*, char);
//    virtual void guardaUsuarioArchivos(Usuario*, char);//Agregar a la otra version 
//    virtual void guardarCarreraArchivos(Carrera*, char);//Agregar a la otra version
//    virtual void guardarRegistroArchivos(RegistroCiclo*, char);//Agregar a la otra version
//    virtual void guardarCursoArchivos(Curso*, char);//Agregar a la otra version
//    virtual void guardarHoraArchivos(Hora*, char);//Agregar a la otra version
//    virtual void guardarGrupoArchivos(Grupo*, char);
//
//    virtual int recuperarInt(char);
//    virtual double recuperarDouble(char);
//    virtual string recuperarString(char);
//    virtual bool recuperarBool(char);
//    //****Paso 4*****
////Facultad
//    virtual void guardarFacultad(Facultad*);
//    virtual Facultad* recuperarFacultad();
//    virtual Facultad* recuperarFacultad1(char);
//    virtual void guardarFacultades(Lista<Facultad>*);
//    virtual Lista<Facultad>* recuperarFacultades();
//    //****Paso 5***
//     //Escuela
//    virtual void guardarEscuela(Escuela*);
//    virtual Escuela* recuperarEscuela();
//    virtual Escuela* recuperarEscuela1(char);
//    virtual void guardarEscuelas(Lista<Escuela>*);
//    virtual Lista<Escuela>* recuperarEscuelas();
//    //Usuarios
//    virtual void guardarUsuario(Usuario*);
//    virtual Usuario* recuperarUsuario();
//    virtual Usuario* recuperarUsuario(char);
//    virtual void guardarUsuarios(Lista<Usuario>*);
//    virtual Lista<Usuario>* recuperarUsuarios();
//    //Carreras
//    virtual void guardarCarrera(Carrera*);
//    virtual Carrera* recuperarCarrera();
//    virtual Carrera* recuperarCarrera1(char);
//    virtual void guardarCarreras(Lista<Carrera>*);
//    virtual Lista<Carrera>* recuperarCarreras();
//    //Empadronamiento
//    virtual void guardarEmpadronamiento(Empadronamiento*);
//    virtual Empadronamiento* recuperarEmpadronamiento();
//    virtual void guardarEmpadronamientos(Lista<Empadronamiento>*);
//    virtual Lista<Empadronamiento>* recuperarEmpadronamientos();
//    //Registro Ciclo
//    virtual void guardarRegistroCiclo(RegistroCiclo*);
//    virtual RegistroCiclo* recuperarRegistroCiclo();
//    virtual RegistroCiclo* recuperarRegistroCiclo1(char);
//    virtual void guardarRegistroCiclos(Lista<RegistroCiclo>*);
//    virtual Lista<RegistroCiclo>* recuperarRegistroCiclos();
//    //Curso
//    virtual void guardarCurso(Curso*);
//    virtual Curso* recuperarCurso();
//    virtual Curso* recuperarCurso1(char);
//    virtual void guardarCursos(Lista<Curso>*);
//    virtual Lista<Curso>* recuperarCursos();
//    //Grupo
//    virtual void guardarGrupo(Grupo*);
//    virtual Grupo* recuperarGrupo();
//    virtual Grupo* recuperarGrupo1(char);
//    virtual void guardarGrupos(Lista<Grupo>*);
//    virtual Lista<Grupo>* recuperarGrupos();
//    //Hora
//    virtual Hora* recuperarHora(char);
//    //Academicos
//    virtual void guardarAcademico(Academicos*);
//    virtual Academicos* recuperarAcademico();
//    virtual void guardarAcademicos(Lista<Academicos>*);
//    virtual Lista<Academicos>* recuperarAcademicos();
//    //Matricula
//    virtual void guardarMatricula(Matricula*);
//    virtual Matricula* recuperarMatricula();
//    virtual void guardarAMatriculas(Lista<Matricula>*);
//    virtual Lista<Matricula>* recuperarMatriculas();
//    //Actas
//    virtual void guardarActa(Actas*);
//    virtual Actas* recuperarActa();
//    virtual void guardarActas(Lista<Actas>*);
//    virtual Lista<Actas>* recuperarActas();
};
