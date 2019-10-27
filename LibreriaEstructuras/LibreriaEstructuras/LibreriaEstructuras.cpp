
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


nodoGlosario* crearLetra(char letra,int codigo) {
	nodoGlosario* aux = new(struct nodoGlosario);
	aux->letra = letra;
	aux->codigo = codigo;
	aux->siguiente = NULL;
	aux->codigo = NULL;
	return aux;
	
}

#pragma endregion


#pragma region Funciones y otras cosas divertidas

void crearLetra(glosario &cab, char letra,int codigo) {
	nodoGlosario* nuevo;
	glosario aux;
	nuevo = crearLetra(letra, codigo);

	if (cab == NULL)
	{
		cab == nuevo;
		cout << "-> !// Info: se ingreso la letra: " << letra << " con el codigo: "<< codigo<< " //!" << endl;
	}
	else
	{
	 aux=cab;

	 while (aux->siguiente != NULL) 
	 aux = aux->siguiente;
	 aux->siguiente = nuevo;
	 cout << "-> !// Info: se ingreso la letra: " << letra << " con el codigo: " << codigo << " //!" << endl;

	 
		
	}

}


#pragma endregion



int main()
{
	cout << "-> !// " << endl;
	persona listaClientes=NULL;
	cout << "-> !// Info: listaClientes creado //! " << endl;
	glosario inventario=NULL;
	cout << "-> !// Info: inventario creado //! " << endl;
	system("PAUSE");
	cout << "-> !// Creando Glosario..." << endl;
		crearLetra(inventario, 'A', 1);
		crearLetra(inventario, 'B', 2);
		crearLetra(inventario, 'C', 3);
		crearLetra(inventario, 'D', 4);
		crearLetra(inventario, 'E', 5);
		crearLetra(inventario, 'F', 6);
		crearLetra(inventario, 'G', 7);
		crearLetra(inventario, 'H', 8);
		crearLetra(inventario, 'I', 9);
		crearLetra(inventario, 'J', 10);
		crearLetra(inventario, 'K', 11);
		crearLetra(inventario, 'L', 12);
		crearLetra(inventario, 'M', 13);
		crearLetra(inventario, 'N', 14);
		crearLetra(inventario, 'O', 15);
		crearLetra(inventario, 'P', 16);
		crearLetra(inventario, 'Q', 17);
		crearLetra(inventario, 'R', 18);
		crearLetra(inventario, 'S', 19);
		crearLetra(inventario, 'T', 20);
		crearLetra(inventario, 'U', 21);
		crearLetra(inventario, 'V', 22);
		crearLetra(inventario, 'W', 23);
		crearLetra(inventario, 'X', 24);
		crearLetra(inventario, 'Y', 25);
		crearLetra(inventario, 'Z', 26);
	
	
}


