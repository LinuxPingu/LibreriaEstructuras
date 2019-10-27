
#include <iostream>

using namespace std;

#pragma region Declaracion de estructuras
struct nodoPersona
{
	int cedula;
	string nombre;
	string ap1;
	string ap2;
	double balance;
	string usuario;
	string password;
	nodoPersona* siguiente;
};
typedef struct nodoPersona* persona;


struct nodoLibro
{
	string titulo;
	string autor;
	int ventas;
	double rating;
	string genero;
	string sinopsis;
};

struct nodoGlosario {

	char letra;
	int codigo;
	nodoGlosario* siguiente;
	nodoLibro* libro;
};
typedef struct nodoGlosario* glosario;



#pragma endregion



int main()
{
	persona listaClientes;
	persona listaAdministradores;
	glosario inventario;
}


