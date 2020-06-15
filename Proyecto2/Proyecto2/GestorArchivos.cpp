#include "GestorArchivos.h"


GestorArchivos::GestorArchivos(string ruta)
    : ruta(ruta) {
}


GestorArchivos::~GestorArchivos() {
}

void GestorArchivos::abrirFlujoModoEscritura() {
    archivo.open(ruta, ios::out);
}

void GestorArchivos::abrirFlujoModoLectura() {
    archivo.open(ruta, ios::in);
}

void GestorArchivos::cerrarFlujo() {
    archivo.close();
}


int GestorArchivos::obtenerInt(std::string s) {
    int v;
    std::stringstream r(s);
    r >> v;
    return v;
}
double GestorArchivos::obtenerDouble(std::string s) {
    double v;
    std::stringstream r(s);
    r >> v;
    return v;
}

bool GestorArchivos::obtenerBool(std::string s) {
    bool v;
    std::stringstream r(s);
    r >> v;
    return v;
}

void GestorArchivos::guardarInt(int i, char delimitador) {
    archivo << i << delimitador;
}

void GestorArchivos::guardarDouble(double d, char delimitador) {
    archivo << d << delimitador;
}

void GestorArchivos::guardarString(string s, char delimitador) {
    archivo << s << delimitador;
}

void GestorArchivos::guardarBool(bool s, char delimitador) {
    archivo << s << delimitador;
}

//
//void GestorArchivos::guardarFacultadEscuela(Facultad* i, char delimitador) {
//    archivo << i->getNombre() << delimitador;
//}
//
//void GestorArchivos::guardarEscuelaArchivos(Escuela* i, char delimitador) {
//    archivo << i->getFacultad()->getNombre() << delimitador;
//    archivo << i->getNombre() << delimitador;
//}
//
//void GestorArchivos::guardaUsuarioArchivos(Usuario* i, char delimitador) {//////Agregar a la otra version
//    archivo << i->getId() << delimitador;
//    archivo << i->getNombre() << delimitador;
//    archivo << i->getClave() << delimitador;
//    archivo << i->getRol() << delimitador;
//    archivo << i->getEstado() << delimitador;
//}
//
//void GestorArchivos::guardarCarreraArchivos(Carrera* i, char delimitador) {//////Agregar a la otra version
//    archivo << i->getEscuela()->getFacultad()->getNombre() << delimitador;
//    archivo << i->getEscuela()->getNombre() << delimitador;
//    archivo << i->getCodigo() << delimitador;
//    archivo << i->getNombre() << delimitador;
//    archivo << i->getGrado() << delimitador;
//    archivo << i->getEstado() << delimitador;
//}
//
//void GestorArchivos::guardarRegistroArchivos(RegistroCiclo* i, char delimitador) {//////Agregar a la otra version
//    archivo << i->getAnnio() << delimitador;
//    archivo << i->getCiclo() << delimitador;
//    archivo << i->getInicioCiclo() << delimitador;
//    archivo << i->getFinCiclo() << delimitador;
//}
//
//void GestorArchivos::guardarCursoArchivos(Curso* i, char delimitador) {//////Agregar a la otra version
//    archivo << i->getCarrera()->getEscuela()->getFacultad()->getNombre() << delimitador;
//    archivo << i->getCarrera()->getEscuela()->getNombre() << delimitador;
//    archivo << i->getCarrera()->getCodigo() << delimitador;
//    archivo << i->getCarrera()->getNombre() << delimitador;
//    archivo << i->getCarrera()->getGrado() << delimitador;
//    archivo << i->getCarrera()->getEstado() << delimitador;
//    archivo << i->getCodigo() << delimitador;
//    archivo << i->getNombre() << delimitador;
//    archivo << i->getTipoCurso() << delimitador;
//    archivo << i->getCreditos() << delimitador;
//    archivo << i->getRequisitos() << delimitador;
//    archivo << i->getHrsLecSemanal() << delimitador;
//    archivo << i->getEstado() << delimitador;
//}
//
//void GestorArchivos::guardarHoraArchivos(Hora* i, char delimitador) {//////Agregar a la otra version
//    archivo << i->getDia() << delimitador;
//    archivo << i->getHoraInicio() << delimitador;
//    archivo << i->getHoraFin() << delimitador;
//}
//
//void GestorArchivos::guardarGrupoArchivos(Grupo* i, char delimitador) {
//    archivo << i->getCiclo()->getAnnio() << delimitador;
//    archivo << i->getCiclo()->getCiclo() << delimitador;
//    archivo << i->getCiclo()->getInicioCiclo() << delimitador;
//    archivo << i->getCiclo()->getFinCiclo() << delimitador;
//    archivo << i->getCurso()->getCarrera()->getEscuela()->getFacultad()->getNombre() << delimitador;
//    archivo << i->getCurso()->getCarrera()->getEscuela()->getNombre() << delimitador;
//    archivo << i->getCurso()->getCarrera()->getCodigo() << delimitador;
//    archivo << i->getCurso()->getCarrera()->getNombre() << delimitador;
//    archivo << i->getCurso()->getCarrera()->getGrado() << delimitador;
//    archivo << i->getCurso()->getCarrera()->getEstado() << delimitador;
//    archivo << i->getCurso()->getCodigo() << delimitador;
//    archivo << i->getCurso()->getNombre() << delimitador;
//    archivo << i->getCurso()->getTipoCurso() << delimitador;
//    archivo << i->getCurso()->getCreditos() << delimitador;
//    archivo << i->getCurso()->getRequisitos() << delimitador;
//    archivo << i->getCurso()->getHrsLecSemanal() << delimitador;
//    archivo << i->getCurso()->getEstado() << delimitador;
//    archivo << i->getNumGrupo() << delimitador;
//    archivo << i->getNRC() << delimitador;
//    archivo << i->getHorario()->getDia() << delimitador;
//    archivo << i->getHorario()->getHoraInicio() << delimitador;
//    archivo << i->getHorario()->getHoraFin() << delimitador;
//    archivo << i->getProfesor()->getId() << delimitador;
//    archivo << i->getProfesor()->getNombre() << delimitador;
//    archivo << i->getProfesor()->getClave() << delimitador;
//    archivo << i->getProfesor()->getRol() << delimitador;
//    archivo << i->getProfesor()->getEstado() << delimitador;
//    archivo << i->getCupo() << delimitador;
//}
//
//int GestorArchivos::recuperarInt(char delimitador) {
//    string r;
//    getline(archivo, r, delimitador);
//    return obtenerInt(r);
//}
//double GestorArchivos::recuperarDouble(char delimitador) {
//    string r;
//    getline(archivo, r, delimitador);
//    return obtenerDouble(r);
//}
//string GestorArchivos::recuperarString(char delimitador) {
//    string r;
//    getline(archivo, r, delimitador);
//    return r;
//}
//
//bool GestorArchivos::recuperarBool(char delimitador) {
//    string r;
//    bool b;
//    getline(archivo, r, delimitador);
//    std::istringstream(r) >> b;
//    return b;
//}
//
/////////////////////////////Facultades////////////////////////////////////////////
//void GestorArchivos::guardarFacultad(Facultad* i) {
//    guardarString(i->getNombre(), '\n');
//}
//
//Facultad* GestorArchivos::recuperarFacultad() {
//    Facultad* i;
//    string nombre;
//    nombre = recuperarString('\n');
//    i = new Facultad(nombre);
//    return i;
//}
//
//Facultad* GestorArchivos::recuperarFacultad1(char delimitador) {
//    Facultad* i;
//    string nombre;
//    nombre = recuperarString(delimitador);
//    i = new Facultad(nombre);
//    return i;
//}
//
//void GestorArchivos::guardarFacultades(Lista<Facultad>* listaFacultades) {
//    listaFacultades->inicializarActual();
//    Facultad* p;
//
//    int n = listaFacultades->getN();
//
//    guardarInt(n, '\n');
//
//    int i = 0;
//    while (i < n) {
//        p = listaFacultades->recuperarFacultadArchivos();
//        guardarFacultad(p);
//        i++;
//    }
//}
//
//
//Lista<Facultad>* GestorArchivos::recuperarFacultades() {
//    int cantidadFacultades;
//    Lista<Facultad>* _listaFacultades = new Lista<Facultad>;
//    Facultad* in;
//    cantidadFacultades = recuperarInt('\n');
//
//    int i = 0;
//    while (i < cantidadFacultades) {
//        in = recuperarFacultad();
//        if (in != NULL) {
//            _listaFacultades->ingresarDeUltimo(in);
//            i++;
//        }
//    }
//    return _listaFacultades;
//}
//
/////////////////////////////Escuelas////////////////////////////////////////////
//void GestorArchivos::guardarEscuela(Escuela* i) {
//    guardarFacultadEscuela(i->getFacultad(), '\t');
//    guardarString(i->getNombre(), '\n');
//}
//
//Escuela* GestorArchivos::recuperarEscuela() {
//    Facultad* f = NULL;
//    Escuela* i;
//    string nombre;
//    f = recuperarFacultad1('\t');
//    nombre = recuperarString('\n');
//    i = new Escuela(f, nombre);
//    return i;
//}
//
//Escuela* GestorArchivos::recuperarEscuela1(char delimitador) {
//    Escuela* i;
//    Facultad* f;
//    string nombre;
//    f = recuperarFacultad1(delimitador);
//    nombre = recuperarString(delimitador);
//    i = new Escuela(f, nombre);
//    return i;
//}
//
//void GestorArchivos::guardarEscuelas(Lista<Escuela>* listaEscuelas) {
//    listaEscuelas->inicializarActual();
//    Escuela* p;
//
//    int n = listaEscuelas->getN();
//
//    guardarInt(n, '\n');
//
//    int i = 0;
//    while (i < n) {
//        p = listaEscuelas->recuperarEscuelaArchivos();
//        guardarEscuela(p);
//        i++;
//    }
//}
//
//
//Lista<Escuela>* GestorArchivos::recuperarEscuelas() {
//    int cantidadEscuelas;
//    Lista<Escuela>* _listaEscuelas = new Lista<Escuela>;
//    Escuela* in;
//    cantidadEscuelas = recuperarInt('\n');
//
//    int i = 0;
//    while (i < cantidadEscuelas) {
//        in = recuperarEscuela();
//        if (in != NULL) {
//            _listaEscuelas->ingresarDeUltimo(in);
//            i++;
//        }
//    }
//    return _listaEscuelas;
//}
/////////////////////////USUARIOS/////////////////////
//void GestorArchivos::guardarUsuario(Usuario* i) {
//    guardarString(i->getId(), '\t');
//    guardarString(i->getNombre(), '\t');
//    guardarString(i->getClave(), '\t');
//    guardarString(i->getRol(), '\t');
//    guardarBool(i->getEstado(), '\n');
//    /*if (i->getRol() == "Administrador") {
//        guardarBool(i->getEstado(), '\n');
//    }
//    if (i->getRol() == "Estudiante") {
//        guardarBool(i->getEstado(), '\n');
//    }
//    if (i->getRol() == "Profesor") {
//        Profesor* p =NULL;
//        guardarBool(i->getEstado(), '\t');
//        guardarString(p->getNumeroTelefonico(), '\t');
//        guardarString(p->getGradoAcademico(), '\n');
//    }
//    if (i->getRol() == "Registro") {
//        guardarBool(i->getEstado(), '\n');
//    }
//    if (i->getRol() == "Mantenimiento") {
//        guardarBool(i->getEstado(), '\n');
//    }*/
//}
//
//
//Usuario* GestorArchivos::recuperarUsuario() {
//    Usuario* u = NULL;
//    string id, nombre, clave, rol, numTel, grado;
//    bool estado;
//    id = recuperarString('\t');
//    nombre = recuperarString('\t');
//    clave = recuperarString('\t');
//    rol = recuperarString('\t');
//    if (rol == "Administrador") {
//        estado = recuperarBool('\n');
//        u = new Administrador(id, nombre, clave, rol, estado);
//    }
//    if (rol == "Estudiante") {
//        estado = recuperarBool('\n');
//        u = new Estudiante(id, nombre, clave, rol, estado);
//    }
//    if (rol == "Profesor") {
//        estado = recuperarBool('\n');
//        //numTel = recuperarString('\t');
//        //grado = recuperarString('\t');
//        u = new Profesor(id, nombre, clave, rol, estado/*, numTel, grado*/);
//    }
//    if (rol == "Registro") {
//        estado = recuperarBool('\n');
//        u = new Registro(id, nombre, clave, rol, estado);
//    }
//    if (rol == "Mantenimiento") {
//        estado = recuperarBool('\n');
//        u = new Mantenimiento(id, nombre, clave, rol, estado);
//    }
//    //u = new Usuario(id,nombre,clave,rol,estado);
//    return u;
//}
//
//Usuario* GestorArchivos::recuperarUsuario(char delimitador) {
//    Usuario* u = NULL;
//    string id, nombre, clave, rol;
//    bool estado;
//    id = recuperarString(delimitador);
//    nombre = recuperarString(delimitador);
//    clave = recuperarString(delimitador);
//    rol = recuperarString(delimitador);
//    if (rol == "Estudiante") {
//        estado = recuperarBool(delimitador);
//        u = new Estudiante(id, nombre, clave, rol, estado);
//    }
//    if (rol == "Profesor") {
//        estado = recuperarBool(delimitador);
//        u = new Profesor(id, nombre, clave, rol, estado);
//    }
//    return u;
//}
//
//void GestorArchivos::guardarUsuarios(Lista<Usuario>* listaUsuarios) {
//    listaUsuarios->inicializarActual();
//    Usuario* p;
//
//    int n = listaUsuarios->getN();
//
//    guardarInt(n, '\n');
//
//    int i = 0;
//    while (i < n) {
//        p = listaUsuarios->recuperarEstudianteArchivos();
//        guardarUsuario(p);
//        i++;
//    }
//}
//
//Lista<Usuario>* GestorArchivos::recuperarUsuarios() {
//    int cantidadUsuarios;
//    Lista<Usuario>* _listaUsuarios = new Lista<Usuario>;
//    Usuario* in;
//    cantidadUsuarios = recuperarInt('\n');
//
//    int i = 0;
//    while (i < cantidadUsuarios) {
//        in = recuperarUsuario();
//        if (in != NULL) {
//            _listaUsuarios->ingresarDeUltimo(in);
//            i++;
//        }
//    }
//    return _listaUsuarios;
//}
//
///////////////////CARRERAS//////////////////////
//void GestorArchivos::guardarCarrera(Carrera* i) {
//    guardarEscuelaArchivos(i->getEscuela(), '\t');
//    guardarString(i->getCodigo(), '\t');
//    guardarString(i->getNombre(), '\t');
//    guardarString(i->getGrado(), '\t');
//    guardarBool(i->getEstado(), '\n');
//}
//
//Carrera* GestorArchivos::recuperarCarrera() {
//    Escuela* E = NULL;
//    Carrera* c;
//    string codigo, nombre, grado;
//    bool estado;
//    E = recuperarEscuela1('\t');
//    codigo = recuperarString('\t');
//    nombre = recuperarString('\t');
//    grado = recuperarString('\t');
//    estado = recuperarBool('\n');
//    c = new Carrera(E, codigo, nombre, grado, estado);
//    return c;
//}
//
//Carrera* GestorArchivos::recuperarCarrera1(char delimitador) {
//    Escuela* E = NULL;
//    Carrera* u;
//    string codigo, nombre, grado;
//    bool estado;
//    E = recuperarEscuela1(delimitador);
//    codigo = recuperarString(delimitador);
//    nombre = recuperarString(delimitador);
//    grado = recuperarString(delimitador);
//    estado = recuperarBool(delimitador);
//    u = new Carrera(E, codigo, nombre, grado, estado);
//    return u;
//}
//
//void GestorArchivos::guardarCarreras(Lista<Carrera>* listaCarreras) {
//    listaCarreras->inicializarActual();
//    Carrera* p;
//    int n = listaCarreras->getN();
//    guardarInt(n, '\n');
//    int i = 0;
//    while (i < n) {
//        p = listaCarreras->recuperarCarreraArchivos();
//        guardarCarrera(p);
//        i++;
//    }
//}
//
//
//Lista<Carrera>* GestorArchivos::recuperarCarreras() {
//    int cantidadCarreras;
//    Lista<Carrera>* _listaCarreras = new Lista<Carrera>;
//    Carrera* in;
//    cantidadCarreras = recuperarInt('\n');
//
//    int i = 0;
//    while (i < cantidadCarreras) {
//        in = recuperarCarrera();
//        if (in != NULL) {
//            _listaCarreras->ingresarDeUltimo(in);
//            i++;
//        }
//    }
//    return _listaCarreras;
//}
//
////////////////////////////EMPADRONAMIENTO//////////////////////////
//
//void GestorArchivos::guardarEmpadronamiento(Empadronamiento* i) {
//    guardaUsuarioArchivos(i->getEstudiante(), '\t');
//    guardarCarreraArchivos(i->getCarrera(), '\t');
//    guardarString(i->getTel(), '\n');
//}
//
//Empadronamiento* GestorArchivos::recuperarEmpadronamiento() {
//    Empadronamiento* emp;
//    Usuario* U = NULL;
//    Carrera* c = NULL;
//    string tel;
//    U = recuperarUsuario('\t');
//    c = recuperarCarrera1('\t');
//    tel = recuperarString('\n');
//    emp = new Empadronamiento(U, c, tel);
//    return emp;
//}
//
//void GestorArchivos::guardarEmpadronamientos(Lista<Empadronamiento>* listaEmpadronamiento) {
//    listaEmpadronamiento->inicializarActual();
//    Empadronamiento* p;
//    int n = listaEmpadronamiento->getN();
//    guardarInt(n, '\n');
//    int i = 0;
//    while (i < n) {
//        p = listaEmpadronamiento->recuperarEmpadronamientoArchivos();
//        guardarEmpadronamiento(p);
//        i++;
//    }
//}
//
//Lista<Empadronamiento>* GestorArchivos::recuperarEmpadronamientos() {
//    int cantidadEmp;
//    Lista<Empadronamiento>* _listaEmp = new Lista<Empadronamiento>;
//    Empadronamiento* in;
//    cantidadEmp = recuperarInt('\n');
//
//    int i = 0;
//    while (i < cantidadEmp) {
//        in = recuperarEmpadronamiento();
//        if (in != NULL) {
//            _listaEmp->ingresarDeUltimo(in);
//            i++;
//        }
//    }
//    return _listaEmp;
//}
//
//////////////////////REGISTRO CICLOS/////////////////////////////
//void GestorArchivos::guardarRegistroCiclo(RegistroCiclo* i) {
//    guardarString(i->getAnnio(), '\t');
//    guardarString(i->getCiclo(), '\t');
//    guardarString(i->getInicioCiclo(), '\t');
//    guardarString(i->getFinCiclo(), '\n');
//}
//
//RegistroCiclo* GestorArchivos::recuperarRegistroCiclo() {
//    RegistroCiclo* r;
//    string annio, ciclo, fechaIni, fechaFin;
//    annio = recuperarString('\t');
//    ciclo = recuperarString('\t');
//    fechaIni = recuperarString('\t');
//    fechaFin = recuperarString('\n');
//    r = new RegistroCiclo(annio, ciclo, fechaIni, fechaFin);
//    return r;
//}
//
//RegistroCiclo* GestorArchivos::recuperarRegistroCiclo1(char delimitador) {
//    RegistroCiclo* r;
//    string annio, ciclo, fechaIni, fechaFin;
//    annio = recuperarString(delimitador);
//    ciclo = recuperarString(delimitador);
//    fechaIni = recuperarString(delimitador);
//    fechaFin = recuperarString(delimitador);
//    r = new RegistroCiclo(annio, ciclo, fechaIni, fechaFin);
//    return r;
//}
//
//void GestorArchivos::guardarRegistroCiclos(Lista<RegistroCiclo>* listaRegistroCiclos) {
//    listaRegistroCiclos->inicializarActual();
//    RegistroCiclo* p;
//    int n = listaRegistroCiclos->getN();
//    guardarInt(n, '\n');
//    int i = 0;
//    while (i < n) {
//        p = listaRegistroCiclos->recuperarRegistroCiclosArchivos();
//        guardarRegistroCiclo(p);
//        i++;
//    }
//}
//
//Lista<RegistroCiclo>* GestorArchivos::recuperarRegistroCiclos() {
//    int cantidadRegistros;
//    Lista<RegistroCiclo>* _listaRegCiclos = new Lista<RegistroCiclo>;
//    RegistroCiclo* in;
//    cantidadRegistros = recuperarInt('\n');
//
//    int i = 0;
//    while (i < cantidadRegistros) {
//        in = recuperarRegistroCiclo();
//        if (in != NULL) {
//            _listaRegCiclos->ingresarDeUltimo(in);
//            i++;
//        }
//    }
//    return _listaRegCiclos;
//}
///////////////////////////CURSOS/////////////////////////////////
//void GestorArchivos::guardarCurso(Curso* i) {
//    guardarCarreraArchivos(i->getCarrera(), '\t');
//    guardarString(i->getCodigo(), '\t');
//    guardarString(i->getNombre(), '\t');
//    guardarString(i->getTipoCurso(), '\t');
//    guardarInt(i->getCreditos(), '\t');
//    guardarString(i->getRequisitos(), '\t');
//    guardarInt(i->getHrsLecSemanal(), '\t');
//    guardarBool(i->getEstado(), '\n');
//}
//Curso* GestorArchivos::recuperarCurso() {
//    Curso* cur;
//    Carrera* c = NULL;
//    string codigo, nombre, tipoCurso, requisitos;
//    int creditos, horasSemana;
//    bool estado;
//    c = recuperarCarrera1('\t');
//    codigo = recuperarString('\t');
//    nombre = recuperarString('\t');
//    tipoCurso = recuperarString('\t');
//    creditos = recuperarInt('\t');
//    requisitos = recuperarString('\t');
//    horasSemana = recuperarInt('\t');
//    estado = recuperarBool('\n');
//    cur = new Curso(c, codigo, nombre, tipoCurso, creditos, requisitos, horasSemana, estado);
//    return cur;
//}
//
//Curso* GestorArchivos::recuperarCurso1(char delimitador) {
//    Curso* cur;
//    Carrera* c = NULL;
//    string codigo, nombre, tipoCurso, requisitos;
//    int creditos, horasSemana;
//    bool estado;
//    c = recuperarCarrera1(delimitador);
//    codigo = recuperarString(delimitador);
//    nombre = recuperarString(delimitador);
//    tipoCurso = recuperarString(delimitador);
//    creditos = recuperarInt(delimitador);
//    requisitos = recuperarString(delimitador);
//    horasSemana = recuperarInt(delimitador);
//    estado = recuperarBool(delimitador);
//    cur = new Curso(c, codigo, nombre, tipoCurso, creditos, requisitos, horasSemana, estado);
//    return cur;
//}
//
//void GestorArchivos::guardarCursos(Lista<Curso>* listaCursos) {
//    listaCursos->inicializarActual();
//    Curso* p;
//    int n = listaCursos->getN();
//    guardarInt(n, '\n');
//    int i = 0;
//    while (i < n) {
//        p = listaCursos->recuperarCursoArchivos();
//        guardarCurso(p);
//        i++;
//    }
//}
//
//Lista<Curso>* GestorArchivos::recuperarCursos() {
//    int cantidadCursos;
//    Lista<Curso>* _listaCursos = new Lista<Curso>;
//    Curso* in;
//    cantidadCursos = recuperarInt('\n');
//
//    int i = 0;
//    while (i < cantidadCursos) {
//        in = recuperarCurso();
//        if (in != NULL) {
//            _listaCursos->ingresarDeUltimo(in);
//            i++;
//        }
//    }
//    return _listaCursos;
//}
///////////////////////////////GRUPO///////////////////////////
//void GestorArchivos::guardarGrupo(Grupo* i) {
//    guardarRegistroArchivos(i->getCiclo(), '\t');
//    guardarCursoArchivos(i->getCurso(), '\t');
//    guardarInt(i->getNumGrupo(), '\t');
//    guardarInt(i->getNRC(), '\t');
//    guardarHoraArchivos(i->getHorario(), '\t');
//    guardaUsuarioArchivos(i->getProfesor(), '\t');
//    guardarInt(i->getCupo(), '\n');
//}
//Grupo* GestorArchivos::recuperarGrupo() {
//    Grupo* grupo;
//    RegistroCiclo* ciclo = NULL;
//    Curso* cur = NULL;
//    Hora* hora = NULL;
//    Usuario* profe;
//    int numgrupo, nrc, cupo;
//    ciclo = recuperarRegistroCiclo1('\t');
//    cur = recuperarCurso1('\t');
//    numgrupo = recuperarInt('\t');
//    nrc = recuperarInt('\t');
//    hora = recuperarHora('\t');
//    profe = recuperarUsuario('\t');
//    cupo = recuperarInt('\n');
//    grupo = new Grupo(ciclo, cur, numgrupo, nrc, hora, profe, cupo);
//    return grupo;
//}
//Grupo* GestorArchivos::recuperarGrupo1(char delimitador) {
//    Grupo* gru;
//    Usuario* usu = NULL;
//    Curso* cur = NULL;
//    Hora* hora = NULL;
//    RegistroCiclo* reg = NULL;
//    int numGrupo, nrc, cupo;
//    reg = recuperarRegistroCiclo1(delimitador);
//    cur = recuperarCurso1(delimitador);
//    numGrupo = recuperarInt(delimitador);
//    nrc = recuperarInt(delimitador);
//    hora = recuperarHora(delimitador);
//    usu = recuperarUsuario(delimitador);
//    cupo = recuperarInt(delimitador);
//    gru = new Grupo(reg, cur, numGrupo, nrc, hora, usu, cupo);
//    return gru;
//}
//
//
//void GestorArchivos::guardarGrupos(Lista<Grupo>* listaGrupos) {
//    listaGrupos->inicializarActual();
//    Grupo* p;
//    int n = listaGrupos->getN();
//    guardarInt(n, '\n');
//    int i = 0;
//    while (i < n) {
//        p = listaGrupos->recuperarGrupoArchivos();
//        guardarGrupo(p);
//        i++;
//    }
//}
//Lista<Grupo>* GestorArchivos::recuperarGrupos() {
//    int cantidadGrupos;
//    Lista<Grupo>* _listaGrupos = new Lista<Grupo>;
//    Grupo* in;
//    cantidadGrupos = recuperarInt('\n');
//
//    int i = 0;
//    while (i < cantidadGrupos) {
//        in = recuperarGrupo();
//        if (in != NULL) {
//            _listaGrupos->ingresarDeUltimo(in);
//            i++;
//        }
//    }
//    return _listaGrupos;
//}
///////////////////////////HORA/////////////////////
//Hora* GestorArchivos::recuperarHora(char delimitador) {
//    Hora* hora;
//    string dia;
//    int inicio, fin;
//    dia = recuperarString(delimitador);
//    inicio = recuperarInt(delimitador);
//    fin = recuperarInt(delimitador);
//    hora = new Hora(dia, inicio, fin);
//    return hora;
//}
/////////////////////ACADEMICOS///////////////////////////
//void GestorArchivos::guardarAcademico(Academicos* i) {
//    guardaUsuarioArchivos(i->getProfesor(), '\t');
//    guardarCarreraArchivos(i->getCarrera(), '\t');
//    guardarString(i->getTelefono(), '\t');
//    guardarString(i->getGrado(), '\n');
//}
//
//Academicos* GestorArchivos::recuperarAcademico() {
//    Academicos* aca = NULL;
//    Carrera* carrera;
//    Usuario* profe;
//    string tel, grado;
//    profe = recuperarUsuario('\t');
//    carrera = recuperarCarrera1('\t');
//    tel = recuperarString('\t');
//    grado = recuperarString('\n');
//    aca = new Academicos(profe, carrera, tel, grado);
//    return aca;
//}
//
//void GestorArchivos::guardarAcademicos(Lista<Academicos>* listaAcademicos) {
//    listaAcademicos->inicializarActual();
//    Academicos* p;
//    int n = listaAcademicos->getN();
//    guardarInt(n, '\n');
//    int i = 0;
//    while (i < n) {
//        p = listaAcademicos->recuperarAcademicosArchivos();
//        guardarAcademico(p);
//        i++;
//    }
//}
//
//Lista<Academicos>* GestorArchivos::recuperarAcademicos() {
//    int cantidadAcademicos;
//    Lista<Academicos>* _listaAcademicos = new Lista<Academicos>;
//    Academicos* in;
//    cantidadAcademicos = recuperarInt('\n');
//
//    int i = 0;
//    while (i < cantidadAcademicos) {
//        in = recuperarAcademico();
//        if (in != NULL) {
//            _listaAcademicos->ingresarDeUltimo(in);
//            i++;
//        }
//    }
//    return _listaAcademicos;
//}
////////////////////MATRICULA////////////////////
//void GestorArchivos::guardarMatricula(Matricula* i) {
//    guardarRegistroArchivos(i->getCiclo(), '\t');
//    guardaUsuarioArchivos(i->getEstudiante(), '\t');
//    guardarGrupoArchivos(i->getGrupo(), '\n');
//}
//
//Matricula* GestorArchivos::recuperarMatricula() {
//    Matricula* matri = NULL;
//    RegistroCiclo* reg = NULL;
//    Usuario* est;
//    Grupo* gru = NULL;
//    reg = recuperarRegistroCiclo1('\t');
//    est = recuperarUsuario('\t');
//    gru = recuperarGrupo1('\n');
//    matri = new Matricula(reg, est, gru);
//    return matri;
//}
//void GestorArchivos::guardarAMatriculas(Lista<Matricula>* listaMatricula) {
//    listaMatricula->inicializarActual();
//    Matricula* p;
//    int n = listaMatricula->getN();
//    guardarInt(n, '\n');
//    int i = 0;
//    while (i < n) {
//        p = listaMatricula->recuperarMatriculaArchivos();
//        guardarMatricula(p);
//        i++;
//    }
//}
//
//Lista<Matricula>* GestorArchivos::recuperarMatriculas() {
//    int cantidadMatricula;
//    Lista<Matricula>* _listaMatricula = new Lista<Matricula>;
//    Matricula* in;
//    cantidadMatricula = recuperarInt('\n');
//    int i = 0;
//    while (i < cantidadMatricula) {
//        in = recuperarMatricula();
//        if (in != NULL) {
//            _listaMatricula->ingresarDeUltimo(in);
//            i++;
//        }
//    }
//    return _listaMatricula;
//}
///////////////////ACTAS/////////////////////////
//void GestorArchivos::guardarActa(Actas* i) {
//    guardarGrupoArchivos(i->getGrupo(), '\t');
//    guardaUsuarioArchivos(i->getEstudiante(), '\t');
//    guardarDouble(i->getNota(), '\t');
//    guardarString(i->getEstado(), '\n');
//}
//Actas* GestorArchivos::recuperarActa() {
//    Actas* acta = NULL;
//    Usuario* est = NULL;
//    Grupo* gru = NULL;
//    double nota;
//    string estado;
//    gru = recuperarGrupo1('\t');
//    est = recuperarUsuario('\t');
//    nota = recuperarDouble('\t');
//    estado = recuperarString('\n');
//    acta = new Actas(gru, est, nota, estado);
//    return acta;
//}
//void GestorArchivos::guardarActas(Lista<Actas>* listaActas) {
//    listaActas->inicializarActual();
//    Actas* p;
//    int n = listaActas->getN();
//    guardarInt(n, '\n');
//    int i = 0;
//    while (i < n) {
//        p = listaActas->recuperarActasArchivos();
//        guardarActa(p);
//        i++;
//    }
//}
//Lista<Actas>* GestorArchivos::recuperarActas() {
//    int cantidadActas;
//    Lista<Actas>* _listaActas = new Lista<Actas>;
//    Actas* in;
//    cantidadActas = recuperarInt('\n');
//    int i = 0;
//    while (i < cantidadActas) {
//        in = recuperarActa();
//        if (in != NULL) {
//            _listaActas->ingresarDeUltimo(in);
//            i++;
//        }
//    }
//    return _listaActas;
//}

