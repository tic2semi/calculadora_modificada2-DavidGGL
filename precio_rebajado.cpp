#include <iostream>
#include <tgmath.h>
using namespace std;

//Función de tipo float que calcula el 15% del precio
float calcula_rebaja (float precio_original, float porcentaje_rebaja)
{
	float nuevo_precio;
	nuevo_precio = precio_original*(100-porcentaje_rebaja)/100;
	nuevo_precio = round( nuevo_precio*100) /100; /*Redondea el resultado del nuevo precio */
	return nuevo_precio;	//Devuelve como valor float el nuevo_precio	
}

/*Funcion principal*/ 
int main(int argc, char *argv[]) {
	float precio;
	float precio_rebajado;
	string producto;
	
	//Le pide al usuario el nombre del producto
	cout << "Introduce el nombre del producto:\n";
	cin >> producto;
	
	//Le pide al usuario el precio de producto
	cout << "Introduce el precio del producto:\n";
	cin >> precio;	
	
	/*A la variable precio_rebajado le da el valor que se devuelve en la función calcula_rebaja*/
	precio_rebajado = calcula_rebaja(precio, 15);
	//Muestra por pantalla el nuevo precio del producto
	cout << "El precio rebajado un 15% del artículo " 
		<< producto << " es " << precio_rebajado << " euros\n";
	
	
	return 0;
}

