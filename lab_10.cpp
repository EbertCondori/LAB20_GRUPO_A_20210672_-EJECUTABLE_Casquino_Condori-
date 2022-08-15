/*
//EJERCICIO 1
#include <iostream>
using namespace std;
class Nodo {
public:
Nodo(int,Nodo * =NULL);
friend class Lista;
private:
int valor;
Nodo *sig;
};
Nodo::Nodo(int v,Nodo *s)
{
valor = v;
sig =s;
}
class Lista {
public:
Lista();
~Lista();
void insertarUltimo(int);
void imprimir();
private:
Nodo* cabeza;
};
Lista::Lista() {
cabeza = NULL;
}
Lista::~Lista()
{
Nodo *temp = cabeza;
Nodo *borrar;
while(temp != NULL)
{
borrar = temp;
temp = temp->sig;

delete borrar;
}
cabeza = NULL;
}
void Lista::insertarUltimo(int v)
{
Nodo *nuevo = new Nodo(v);
if(cabeza == NULL)
{
cabeza = nuevo;
}
else{
Nodo *aux = cabeza;
while(aux->sig !=NULL)
{
aux=aux->sig;
}
aux->sig=nuevo;
}

}
void Lista::imprimir()
{
Nodo *temp = cabeza;
while(temp!=NULL)
{
cout << temp->valor << "-";
temp = temp->sig;
}
cout << "\n";
}
int main(int argc, char *argv[])
{
Lista *listaA;
Lista *listaB;

listaA = new Lista();

listaB = new Lista();

listaA->insertarUltimo(1);
listaA->insertarUltimo(2);
listaA->insertarUltimo(3);
listaA->insertarUltimo(4);
listaA->imprimir();

listaB->insertarUltimo(5);
listaB->insertarUltimo(6);
listaB->insertarUltimo(7);
listaB->imprimir();

delete listaA;
delete listaB;
return 0;
}
*/
/*
//EJERCICIO 2
#include <iostream>
	using namespace std;
class Nodo {
public:
	Nodo(int,Nodo * =NULL);
	friend class Lista;
private:
	int valor;
	Nodo *sig;
};
Nodo::Nodo(int v,Nodo *s)
{
	valor = v;
	sig =s;
}
class Lista {
public:
	Lista();
	~Lista();
	void insertarUltimo(int);
	void insertarPrimero(int);
	void imprimir();
private:
	Nodo* cabeza;
};
Lista::Lista() {
	cabeza = NULL;
}
Lista::~Lista()
{
	Nodo *temp = cabeza;
	Nodo *borrar;
	while(temp != NULL)
	{
		
		borrar = temp;
		temp = temp->sig;
		delete borrar;
	}
	cabeza = NULL;
}
void Lista::insertarUltimo(int v)
{
	Nodo *nuevo = new Nodo(v);
	if(cabeza == NULL)
	{
		cabeza = nuevo;
	}
	else{
		Nodo *aux = cabeza;
		while(aux->sig !=NULL)
		{
			aux=aux->sig;
		}
		aux->sig=nuevo;
	}
}
void Lista::insertarPrimero(int v)
{
	Nodo *nuevo = new Nodo(v);
	if (cabeza == NULL)
	{
		nuevo->sig =NULL;
		cabeza = nuevo;
	}
	else
	{
		nuevo->sig = cabeza;
		cabeza = nuevo;
	}
	
}
void Lista::imprimir()
{
	Nodo *temp = cabeza;
	while(temp!=NULL)
		
	{
		cout << temp->valor << "-";
		temp = temp->sig;
	}
	cout << "\n";
}
int main(int argc, char *argv[])
{
	Lista *listaA;
	Lista *listaB;
	
	listaA = new Lista();
	listaB = new Lista();
	listaA->insertarUltimo(1);
	listaA->insertarUltimo(2);
	listaA->insertarUltimo(3);
	listaA->insertarUltimo(4);
	listaA->insertarPrimero(0);
	listaA->insertarPrimero(15);
	listaA->imprimir();
	listaB->insertarUltimo(5);
	listaB->insertarUltimo(6);
	listaB->insertarUltimo(7);
	listaB->insertarPrimero(4);
	listaB->insertarPrimero(3);
	listaB->insertarPrimero(2);
	listaB->imprimir();
	delete listaA;
	delete listaB;
	return 0;
}
*/


/*
//EJERCICIO3
*/

/*

//EJERCICIO 4 
#include <iostream>
	using namespace std;
class Nodo {
public:
	Nodo(int,Nodo * =NULL);
	friend class Lista;
private:
	int valor;
	Nodo *sig;
};
Nodo::Nodo(int v,Nodo *s)
{
	valor = v;
	sig =s;
}
class Lista {
public:
	Lista();
	~Lista();
	void insertarUltimo(int);
	
	void insertarPrimero(int);
	void insertarEntre(int,int);
	void borrarUltimo();
	int ultimoElemento();
	int sizeLista();
	void imprimir();
private:
	Nodo* cabeza;
};
Lista::Lista() {
	cabeza = NULL;
}
Lista::~Lista()
{
	Nodo *temp = cabeza;
	Nodo *borrar;
	while(temp != NULL)
	{
		borrar = temp;
		temp = temp->sig;
		delete borrar;
	}
	cabeza = NULL;
}
void Lista::insertarUltimo(int v)
{
	Nodo *nuevo = new Nodo(v);
	if(cabeza == NULL)
	{
		cabeza = nuevo;
	}
	else{
		Nodo *aux = cabeza;
		while(aux->sig !=NULL)
		{
			aux=aux->sig;
		}
		aux->sig=nuevo;
	}
}

void Lista::insertarPrimero(int v)
{
	Nodo *nuevo = new Nodo(v);
	if (cabeza == NULL)
	{
		nuevo->sig =NULL;
		cabeza = nuevo;
	}
	else
	{
		nuevo->sig = cabeza;
		cabeza = nuevo;
	}
	
}
void Lista::insertarEntre(int v,int i)
{
}
int Lista::sizeLista()
{
	Nodo *temp = cabeza;
	int tam=0;
	while(temp!=NULL)
	{
		temp = temp->sig;
		tam++;
	}
	return tam;
}
void Lista::borrarUltimo()
{
	Nodo *temp = cabeza;
	Nodo *nuevo = cabeza;
	int aux=0;
	while(temp!=NULL && aux!=sizeLista()-1)
	{
		nuevo = temp;
		
		temp=temp->sig;
		aux++;
		cout<<nuevo->valor<<'-';
	}
	nuevo->sig=temp;
	cout << "\n";
	
}

void Lista::imprimir()
{
	Nodo *temp = cabeza;
	while(temp!=NULL)
	{
		cout << temp->valor << "-";
		temp = temp->sig;
	}
	cout << "\n";
}
int main(int argc, char *argv[])
{
	Lista *listaA;
	Lista *listaB;
	
	listaA = new Lista();
	listaB = new Lista();
	
	listaA->insertarUltimo(1);
	listaA->insertarUltimo(2);
	listaA->insertarUltimo(3);
	listaA->insertarUltimo(4);
	listaA->insertarPrimero(0);
	
	listaA->imprimir();
	listaA->borrarUltimo();
	
	delete listaA;
	
	return 0;
}
*/

/*
//EJERCICIO 5
	
#include <iostream>
	using namespace std;
class Nodo {
public:
	Nodo(int,Nodo * =NULL);
	friend class Lista;
private:
	int valor;
	Nodo *sig;
};
Nodo::Nodo(int v,Nodo *s)
{
	
	valor = v;
	sig =s;
}
class Lista {
public:
	Lista();
	~Lista();
	void insertarUltimo(int);
	void insertarPrimero(int);
	void insertarEntre(int,int);
	void borrarUltimo();
	int ultimoElemento();
	int sizeLista();
	void imprimir();
private:
	Nodo* cabeza;
};
Lista::Lista() {
	cabeza = NULL;
}
Lista::~Lista()
{
	Nodo *temp = cabeza;
	Nodo *borrar;
	while(temp != NULL)
	{
		borrar = temp;
		temp = temp->sig;
		delete borrar;
	}
	cabeza = NULL;
}
void Lista::insertarUltimo(int v)
{
	Nodo *nuevo = new Nodo(v);
	if(cabeza == NULL)
	{
		cabeza = nuevo;
	}
	
	else{
		Nodo *aux = cabeza;
		while(aux->sig !=NULL)
		{
			aux=aux->sig;
		}
		aux->sig=nuevo;
	}
}
void Lista::insertarPrimero(int v)
{
	Nodo *nuevo = new Nodo(v);
	if (cabeza == NULL)
	{
		nuevo->sig =NULL;
		cabeza = nuevo;
	}
	else
	{
		nuevo->sig = cabeza;
		cabeza = nuevo;
	}
	
}
void Lista::insertarEntre(int v,int i)
{
}
int Lista::sizeLista()
{
	Nodo *temp = cabeza;
	int tam=0;
	while(temp!=NULL)
	{
		temp = temp->sig;
		tam++;
	}
	return tam;
}
void Lista::borrarUltimo()
{
	
	Nodo *temp = cabeza;
	Nodo *nuevo = cabeza;
	int aux=0;
	while(temp!=NULL )
	{
		nuevo= temp->sig;
		temp = temp->sig;
		cout << nuevo->valor << "-";
		aux++;
	}
	cout << "\n";
}

void Lista::imprimir()
{
	Nodo *temp = cabeza;
	while(temp!=NULL)
	{
		cout << temp->valor << "-";
		temp = temp->sig;
	}
	cout << "\n";
}
int main(int argc, char *argv[])
{
	Lista *listaA;
	listaA = new Lista();
	listaA->insertarUltimo(1);
	listaA->insertarUltimo(2);
	listaA->insertarUltimo(3);
	listaA->insertarUltimo(4);
	listaA->insertarPrimero(0);
	
	listaA->imprimir();
	listaA->borrarUltimo();
	delete listaA;
	
	return 0;
}
*/


/*

//EJERCICIO 6
	
#include <iostream>
	using namespace std;
class Nodo {
public:
	Nodo(int,Nodo * =NULL);
	friend class Lista;
private:
	int valor;
	Nodo *sig;
};
Nodo::Nodo(int v,Nodo *s)
{
	valor = v;
	sig =s;
}
class Lista {
public:
	Lista();
	
	~Lista();
	void insertarUltimo(int);
	void insertarPrimero(int);
	void borrarelemento(int);
	int sizeLista();
	void imprimir();
private:
	Nodo* cabeza;
};
Lista::Lista() {
	cabeza = NULL;
}
Lista::~Lista()
{
	Nodo *temp = cabeza;
	Nodo *borrar;
	while(temp != NULL)
	{
		borrar = temp;
		temp = temp->sig;
		delete borrar;
	}
	cabeza = NULL;
}
void Lista::insertarUltimo(int v)
{
	Nodo *nuevo = new Nodo(v);
	if(cabeza == NULL)
	{
		cabeza = nuevo;
	}
	else{
		Nodo *aux = cabeza;
		while(aux->sig !=NULL)
		{
			aux=aux->sig;
		}
		aux->sig=nuevo;
	}
}

void Lista::insertarPrimero(int v)
{
	Nodo *nuevo = new Nodo(v);
	if (cabeza == NULL)
	{
		nuevo->sig =NULL;
		cabeza = nuevo;
	}
	else
	{
		nuevo->sig = cabeza;
		cabeza = nuevo;
	}
	
}

int Lista::sizeLista()
{
	Nodo *temp = cabeza;
	int tam=0;
	while(temp!=NULL)
	{
		temp = temp->sig;
		tam++;
	}
	return tam;
}
void Lista::borrarelemento(int n)
{
	Nodo *temp = cabeza;
	if(temp!=NULL)
	{
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
		aux_borrar = temp;
		while((aux_borrar != NULL) && (aux_borrar->valor !=n))
		{
			anterior = aux_borrar;
			
			aux_borrar = aux_borrar->sig;
		}
		if(aux_borrar== NULL)
		{
			cout<<"el elemento no esta ";
		}
		else if(anterior == NULL)
		{
			temp=temp->sig;
			delete aux_borrar;
		}
		else{
			anterior->sig=aux_borrar->sig;
			delete aux_borrar;
		}
	}
	
}

void Lista::imprimir()
{
	Nodo *temp = cabeza;
	while(temp!=NULL)
	{
		cout << temp->valor << "-";
		temp = temp->sig;
	}
	cout << "\n";
}
int main(int argc, char *argv[])
{
	Lista *listaA;
	Lista *listaB;
	
	listaA = new Lista();
	listaB = new Lista();
	
	listaA->insertarUltimo(1);
	listaA->insertarUltimo(2);
	listaA->insertarUltimo(3);
	listaA->insertarUltimo(4);
	listaA->insertarPrimero(0);
	listaA->imprimir();
	listaA->borrarelemento(3);
	listaA->imprimir();
	
	delete listaA;
	
	return 0;
}

*/


/*

//EJERCICIO7


#include <iostream>
using namespace std;
class Nodo {
public:
Nodo(int,Nodo * =NULL);
friend class Lista;
private:
int valor;
Nodo *sig;
};
Nodo::Nodo(int v,Nodo *s)
{
valor = v;
sig =s;
}
class Lista {
public:
Lista();
~Lista();
void insertarUltimo(int);
void insertarPrimero(int);
void borrarelemento(int);
void ancendente();
void descendente();

int sizeLista();
void imprimir();
private:
Nodo* cabeza;
};
Lista::Lista() {
cabeza = NULL;

}
Lista::~Lista()
{
Nodo *temp = cabeza;
Nodo *borrar;
while(temp != NULL)
{
borrar = temp;
temp = temp->sig;
delete borrar;
}
cabeza = NULL;
}
void Lista::insertarUltimo(int v)
{
Nodo *nuevo = new Nodo(v);
if(cabeza == NULL)
{
cabeza = nuevo;
}
else{
Nodo *aux = cabeza;
while(aux->sig !=NULL)
{
aux=aux->sig;
}
aux->sig=nuevo;
}
}
void Lista::insertarPrimero(int v)
{
Nodo *nuevo = new Nodo(v);
if (cabeza == NULL)
{
nuevo->sig =NULL;
cabeza = nuevo;
}
else
{
nuevo->sig = cabeza;
cabeza = nuevo;

}

}

int Lista::sizeLista()
{
Nodo *temp = cabeza;
int tam=0;
while(temp!=NULL)
{
temp = temp->sig;
tam++;
}
return tam;
}
void Lista::borrarelemento(int n)
{
Nodo *temp = cabeza;
if(temp!=NULL)
{
Nodo *aux_borrar;
Nodo *anterior = NULL;
aux_borrar = temp;
while((aux_borrar != NULL) && (aux_borrar->valor !=n))
{
anterior = aux_borrar;
aux_borrar = aux_borrar->sig;
}
if(aux_borrar== NULL)
{
cout<<"el elemento no esta ";
}
else if(anterior == NULL)
{
temp=temp->sig;
delete aux_borrar;
}
else{

anterior->sig=aux_borrar->sig;
delete aux_borrar;
}
}
}
void Lista::ancendente()
{
Nodo *temp = cabeza;
Nodo *aux1 = cabeza;
Nodo *aux2 = cabeza;
int mayor=0,menor=20;

//ascendente
for(int i=0;i<sizeLista();i++)
{
	*aux1=*(temp+i);
	*aux2=i;
	while((aux2>0) && (*(temp-aux2-1)>aux1 ))
	{
		*(temp+aux2)=*(temp+(aux2-1));
		aux2=aux2-1;
	}
	*(temp+aux2)=aux1;
}
//descendente
for(int i=0;i<sizeLista();i++)
{
	*aux1=*(temp+i);
	*aux2=i;
	
	while((aux2>0) && (*(temp-aux2-1)<aux1 ))
	{
		*(temp+aux2)=*(temp+(aux2-1));
		aux2=aux2-1;
	}
	*(temp+aux2)=aux1;
}

}

void Lista::imprimir()
{
	Nodo *temp = cabeza;
	while(temp!=NULL)
	{
		cout << temp->valor << "-";
		temp = temp->sig;
	}
	cout << "\n";
}
int main(int argc, char *argv[])
{
	Lista *listaA;
	Lista *listaB;
	
	listaA = new Lista();
	listaB = new Lista();
	
	listaA->insertarUltimo(1);
	listaA->insertarUltimo(2);
	listaA->insertarUltimo(3);
	listaA->insertarUltimo(4);
	listaA->insertarPrimero(0);
	listaA->imprimir();
	
	listaA->borrarelemento(3);
	listaA->ancendente();
	listaA->imprimir();
	
	delete listaA;
	
	return 0;
}
//incompleto

*/
