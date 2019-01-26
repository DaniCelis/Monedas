#ifndef MULTILISTAS2_H
#define MULTILISTAS2_H
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;

template <class T>
struct nodo{
	T info;
	nodo<T> *sig;
};
template<class T>
struct nodoHijos{
	int idPadre;
	string nomb;
	string fechaNaci;
	int edad;
	nodoHijos<T> *sig;
};

template<class T>
struct nodoSucursal{
	string nombreSucu;
	string direccionSucu;
	string barrioSucu;
	string agenteSucu;
	nodoSucursal<T> *sig;	
};


template <class T>
struct nodoPersona{
	string id;
	string nombre;
	string apellido;
	string settipoid;
	string numid;
	string genero;
	string telf;
	string telc;
	string mail;
	string fecnac;
	string edad;
	string cidnac;
	string paisnac;
	string cidres;
	string dire;
	string barrio;
	string actividad;
	string hijos;
	string numhijos;
	string sucursal;
	nodoHijos<T> nhijos;
	nodoSucursal<T> sucu;
	nodoPersona<T> *sig;
};

template<class T>
class Hijos{
	nodoHijos<T> *cab;
	public:
		Hijos(){
			cab=new nodoHijos<T>;
			cab->nomb="";
			cab->fechaNaci="";
			cab->edad=0;
			cab->sig=NULL;
		}
		
	void insertarHijo(T dato, string fech, int edad);
	T retornarHijo(int pos);
};

template<class T>
class Sucursal{
	nodoSucursal<T> *cab;
	public:
		Sucursal(){
			cab=new nodoSucursal<T>;
			cab->nombreSucu="";
			cab->direccionSucu="";
			cab->barrioSucu="";
			cab->agenteSucu="";
			cab->sig=NULL;
			
		}
		
	void insertarSucursal(char nombre[20], char direccion[30], char barrio[15], char gerente[20]);
	T retornarSucursal(int pos);
	void sucu();
};

template<class T>
class persona{
	
	nodoPersona<T> *cabP;
	nodoHijos<T> *cabH;
	nodoSucursal<T> *cabS;
	public:
		persona(){
			cabP = new nodoPersona<T>;
			cabP->id="";
			cabP->nombre="";
			cabP->apellido="";
			cabP->settipoid="";
			cabP->numid="";
			cabP->genero="";
			cabP->telf="";
			cabP->telc="";
			cabP->mail="";
			cabP->fecnac="";
			cabP->edad="";
			cabP->cidnac="";
			cabP->paisnac="";
			cabP->cidres="";
			cabP->dire="";
			cabP->barrio="";
			cabP->actividad="";
			cabP->hijos="";
			cabP->numhijos="";
			cabP->sucursal="";
		//	cabP->hijos=NULL;
			cabH=new nodoHijos<T>;
			cabH->nomb="";
			cabH->fechaNaci="";
			cabH->edad=0;
			cabH->sig=NULL;
		//	cabP->sucu=NULL;
			cabS=new nodoSucursal<T>;
			cabS->nombreSucu="";
			cabS->direccionSucu="";
			cabS->barrioSucu="";
			cabS->agenteSucu="";
			cabS->sig=NULL;
		
			cabP->sig=NULL;
			
		}
		
	void insertarPersona(char ingid[3], char ingnombre[10], char ingapellido[20], char settipoid[2], char ingdocumento[15], char genero[2], char ingfijo[10], char ingcelular[10], char ingemail[30],
			 char ingfechaNac[10], char ingedad[2], char ingciudadNac[15], char ingpaisNac[15], char ingciudadRes[15], char ingdireccion[30], char ingbarrio[15], char ingactividad[25], char hijos[2], char ingnumhijos[2], char sucursal[15]);
	void insertarHijo(int idPadre, string nombreHijo, string fechanaci, int edad);
	T retornarHijo(int pos);
	void retornarPersona(int pos);
	//void sucu();
	
	//metodos de consulta
	
	void buscarSucursal(string texto);
	
	
};
template <class T>
class lista{
	
	nodo<T> *cab;
	
	public:
		lista(){
			cab = new nodo<T>;
			cab->info ="";
			cab->sig=NULL;
		}
		
	void insertarLista(T dato);
	T retornarLista(int pos);
};
//metodos lista
template <class T>
void persona<T>::insertarPersona(char ingid[3], char ingnombre[10], char ingapellido[20], char settipoid[2], char ingdocumento[15], char genero[2], char ingfijo[10], char ingcelular[10], char ingemail[30],
			 char ingfechaNac[10], char ingedad[2], char ingciudadNac[15], char ingpaisNac[15], char ingciudadRes[15], char ingdireccion[30], char ingbarrio[15], char ingactividad[25], char hijos[2], char ingnumhijos[2], char sucursal[15]){
	
	
	string idAux(ingid);
	string nombreAux(ingnombre);
	string apellidoAux(ingapellido);
	string settAux(settipoid);
	string documentoAux(ingdocumento);
	string generoAux(genero);
	string fijoAux(ingfijo);
	string celularAux(ingcelular);
	string emailAux(ingemail);
	string fechaNacAux(ingfechaNac);
	string edadAux(ingedad);
	string ciudadNacAux(ingciudadNac);
	string paisNacAux(ingpaisNac);
	string ciudadResAux(ingciudadRes);
	string direccAux(ingdireccion);
	string barrioAux(ingbarrio);
	string actividadAux(ingactividad);
	string hijosAux(hijos);
	string numHijosAux(ingnumhijos);
	string sucursalAux(sucursal);	
	
	
	nodoPersona<T> *aux, *aux1=cabP;
	aux = new nodoPersona<T>;
	aux->id = idAux;
	aux->nombre = nombreAux;
	aux->apellido= apellidoAux;
	aux->settipoid = settAux;
	aux->numid= documentoAux;
	aux->genero = generoAux;
	aux->telf= fijoAux;
	aux->telc = celularAux;
	aux->mail = emailAux;
	aux->fecnac= fechaNacAux;
	aux->edad = edadAux;
	aux->cidnac = ciudadNacAux;
	aux->paisnac= paisNacAux;
	aux->cidres = ciudadResAux;
	aux->dire = direccAux;
	aux->barrio = barrioAux;
	aux->actividad = actividadAux;
	aux->hijos = hijosAux;
	aux->numhijos = numHijosAux;
	aux->sucursal = sucursalAux;
	
	aux->sig = NULL;
	
	while(aux1->sig != NULL){
		aux1 = aux1->sig;
	}
	
	aux1->sig = aux;	
	
	cout<<"Persona Agregada a Lista"<<endl;
}


template<class T>
void persona<T>::retornarPersona(int pos){
    int i;
	nodoPersona<T> *aux,*aux1=cabP;
	aux=new nodoPersona<T>;
	for(i=1;i<=pos&& aux1->sig!=NULL;i++){
		aux1=aux1->sig;
	}
	cout<< aux1->nombre;
}

//metodos de lista
template<class T>
void lista<T>::insertarLista(T dato){
	nodo<T> *aux,*aux1=cab;
	aux= new nodo<T>;
	aux->info=dato;
	aux->sig=NULL;
	while(aux1->sig !=NULL){
		aux1=aux1->sig;
	}
	aux1->sig=aux;
}
template<class T>
T  lista<T>::retornarLista(int pos){
    int i;
	nodo<T> *aux,*aux1=cab;
	aux=new nodo<T>;
	for(i=1;i<=pos&& aux1->sig!=NULL;i++){
		aux1=aux1->sig;
	}
	return aux1->info;
}
//metodos nodoHijos
template<class T>
void persona<T>::insertarHijo(int idPadre, string nombre, string fech, int edad){
	nodoHijos<T> *aux,*aux1=cabH;
	aux= new nodoHijos<T>;
	aux->idPadre= idPadre;
	aux->nomb=nombre;
	aux->fechaNaci= fech;
	aux->edad= edad;
	aux->sig=NULL;
	while(aux1->sig !=NULL){
		aux1=aux1->sig;
	}
	aux1->sig=aux;
}


template<class T>
T persona<T>::retornarHijo(int pos){
    int i;
	nodoHijos<T> *aux,*aux1=cabH;
	aux=new nodoHijos<T>;
	for(i=1;i<=pos&& aux1->sig!=NULL;i++){
		aux1=aux1->sig;
	}
	return aux1->nomb;
}
//Metodos sucursal
template<class T>
void Sucursal<T>::insertarSucursal(char nombre[20], char direccion[30], char barrio[15], char gerente[20]){
	
	string nombreAux(nombre);
	string direccionAux(direccion);
	string barrioAux(barrio);
	string gerenteAux(gerente);
	
	nodoSucursal<T> *aux,*aux1=cab;
	aux= new nodoSucursal<T>;
	aux->nombreSucu = nombreAux;
	aux->direccionSucu = direccionAux;
	aux->barrioSucu = barrioAux;
	aux->agenteSucu = gerenteAux;
	aux->sig=NULL;
	while(aux1->sig !=NULL){
		aux1=aux1->sig;
	}
	aux1->sig=aux;
}

template<class T>
T Sucursal<T>::retornarSucursal(int pos){
	
    int i;
	nodoSucursal<T> *aux,*aux1=cab;
	aux=new nodoSucursal<T>;
	for(i=1;i<=pos&& aux1->sig!=NULL;i++){
		aux1=aux1->sig;
	}
	
	return aux1->nombreSucu;
}

template<class T>
void persona<T>::buscarSucursal(string texto){
	int i,cont=0;
	nodoPersona<T> *aux,*aux1=cabP;
	while(aux1->sig!=NULL){
		if(aux1->sucursal==texto){
			cont++;
		}
		aux1=aux1->sig;
	}
	cout<<cont<<endl;
}

template<class T>
void Sucursal<T>::sucu(){
	int cont=1;
	nodoSucursal<T> *aux,*aux1=cab;
	aux=new nodoSucursal<T>;
	while(aux1->sig!=NULL){
		aux1=aux1->sig;
		cout<<cont<<". "<<aux1->nombreSucu<<endl;
		cont++;
	}
}
#endif
