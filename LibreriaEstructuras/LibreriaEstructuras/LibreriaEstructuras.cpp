
#include <iostream>
#include <stdlib.h>

using namespace std;

#pragma region Declaracion y construccion estructuras


/*     -> Cliente <-    */
struct nodoCliente
{
	int cedula;
	string nombre;
	string ap1;
	string ap2;
	double balance;
	string usuario;
	string password;
	nodoCliente* siguiente;
};
typedef struct nodoCliente* cliente;


/*     -> Crear Cliente <-    */
nodoCliente* crearCliente(int cedula, string nombre,string ap1,string ap2,double balance, string usuario, string password) {
	nodoCliente* aux = new(struct nodoCliente);
	aux->cedula = cedula;
	aux->nombre = nombre;
	aux->ap1 = ap1;
	aux->ap2 = ap2;
	aux->balance = balance;
	aux->usuario = usuario;
	aux->password = password;
	aux->siguiente = NULL;
	return aux;
}


/*     -> Libro <-    */
struct nodoLibro
{
	string titulo;
	string autor;
	int ventas;
	double rating;
	string genero;
	string sinopsis;
};


/*     -> Letra <-    */
struct nodoGlosario {

	char letra;
	int codigo;
	nodoGlosario* siguiente;
	nodoLibro* libro;
};
typedef struct nodoGlosario* glosario;



/*     -> Crear Letra <-    */
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

void crearCliente(cliente &cab, int cedula, string nombre, string ap1, string ap2, double balance, string usuario, string password) {
	nodoCliente* nuevo;
	cliente aux;
	nuevo = crearCliente(cedula, nombre, ap1,  ap2, balance, usuario, password);
	if (cab == NULL)
	{
		cab == nuevo;
		cout << "-> !// Info: Usuario "<<usuario<<" creado!" << endl;
	}
	else
	{
		aux = cab;

		while (aux->siguiente != NULL)
		aux = aux->siguiente;
		aux->siguiente = nuevo;
		cout << "-> !// Info: Usuario " << usuario << " creado!" << endl;

	}

}

bool login(cliente cab,string usuario, string pass) {

	cliente aux;
	bool chk=false;

	if (cab == NULL)
	{
		cout << "Vacia!" << endl;
	}
	else
	{
		aux = cab;

		while (aux->siguiente != NULL)
		{
			if (aux->usuario == usuario)
			{
				if (aux->password == pass)
				{
					chk = true;
				}
				else
				{
					cout << "-> Password incorrecta! " << endl;
					chk = false;
				}
			}
			else {
				aux = aux->siguiente;
			}

			chk = false;
			cout << "-> Usuario no encontrado!" << endl;
		}

	}
	return chk;
}
#pragma endregion



int main()
{
#pragma region Listas y constantes de arranque
	cout << "-> !// " << endl;
	cliente listaClientes = NULL;
	cout << "-> !// Info: listaClientes creado //! " << endl;
	glosario inventario = NULL;
	cout << "-> !// Info: inventario creado //! " << endl;

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
	crearCliente(listaClientes,504280988,"Daniel","Hernandez","Sanchez",10000.000,"DanielCliente","123");
#pragma endregion
	
system("PAUSE");
system("CLS");

/* -> Funcionalidad y controles <-*/

int salir = 0; /* Controla el While del menu principal*/
int salirLog = 0; /*Controla el salir del Login(Usuario / admin)*/
int opcLog = 0; /* Controla el switch del login */


/* -> Informacion de Usuario <- */

string inUser; /* Usuario del Login*/
string inPass; /* Pass del usuario*/
bool chk = false;

while (salir == 0)	
{
	cout << " --- Biblioteca Ulatina --- " << endl;

	cout << "    -> Menu Princial <- " << endl;

	cout << " 1) Ingresar como Cliente" << endl;
	cout << " 2) Ingresar como Administrador" << endl;
	cout << " 3) Registrarse " << endl;
	cout << " 0) Salir" << endl;
	cin >> opcLog;

	switch (opcLog)
	{
	case 1:

		while (salirLog ==0)
		{
			cout << " -> Ingrese su nombre de Usuario: " << endl;
			cin >> inUser;
			cout << " " << endl;
			cout << " -> Ingrese su Password: " << endl;
			cin >> inPass;
			chk = login(listaClientes,inUser,inPass);

			if (chk == true)
			{
				salirLog++;
			}

		}
		


	break;

	case 2:
	break;

	case 0:
		salir++;
	break;
	}

}
system("CLS");
cout << " Adios!" << endl;
}


