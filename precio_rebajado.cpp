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
//Función de tipo float que calcula el 25% del precio
float calcula_rebaja_vip (float precio_original, float porcentaje_rebaja_vip)
{
	float nuevo_precio_vip;
	nuevo_precio_vip = precio_original*(100-porcentaje_rebaja_vip)/100;
	nuevo_precio_vip = round( nuevo_precio_vip*100) /100; //Redondea el precio
	return nuevo_precio_vip; //Devuelve el valor del precio
}
//Función de tipo float que calcula el 40% del precio
float calcula_rebaja_estudiante (float precio_original, float porcentaje_rebaja_estudiante)
{
	float nuevo_precio_estudiante;
	nuevo_precio_estudiante = precio_original*(100-porcentaje_rebaja_estudiante)/100;
	nuevo_precio_estudiante = round( nuevo_precio_estudiante*100) /100; //Redondea el precio
	return nuevo_precio_estudiante; //Devuelve el valor del precio
}
//Función de tipo float que calcula el precio en dolares, por lo que se multiplica el precio por 1.12
float euro_dolar (float precio_original, float cotizacion)
{
	float nuevo_precio_dolar;
	nuevo_precio_dolar = precio_original*cotizacion;
	nuevo_precio_dolar = round(nuevo_precio_dolar*100) /100; //redondea el precio en dolares
	return nuevo_precio_dolar; //Devuelve el valor del precio en dolar
	
}

/*Funcion principal*/ 
int main(int argc, char *argv[]) {
	float precio, precio_rebajado, precio_rebajado_vip, precio_rebajado_estudiante, precio_dolar, precio_rebajado_dolar, precio_dolar_vip, precio_dolar_estudiante;
	string producto;
	
	//Le pide al usuario el nombre del producto
	cout << "Introduce el nombre del producto:\n";
	cin >> producto;
	
	//Le pide al usuario el precio de producto
	cout << "Introduce el precio del producto:\n";
	cin >> precio;	
	
	/*A la variable precio_dolar le da el valor que se devuelve en la función euro_dolar*/
	precio_dolar = euro_dolar(precio, 1.12);
	cout << "El precio en dolares del producto " << producto << " es de " << precio_dolar << "$\n";
	
	/*A la variable precio_rebajado le da el valor que se devuelve en la función calcula_rebaja*/
	precio_rebajado = calcula_rebaja(precio, 15);
	//Muestra por pantalla el nuevo precio del producto
	cout << "El precio rebajado un 15% del artículo " 
		<< producto << " es de " << precio_rebajado << " euros\n";
	//Precio en dolar de rebaja al 15%
	precio_rebajado_dolar = euro_dolar(precio_rebajado, 1.12);
	cout << "El precio en dolares del producto rebajado al 15% es de " << precio_rebajado_dolar << "$\n";
	
	/*A la variable precio_rebajado_vip le da el valor que se devuelve en la función calcula_rebaja_vip*/
	precio_rebajado_vip = calcula_rebaja_vip (precio, 25);
	//Calcula el precio en dolar del precio para vips
	precio_dolar_vip = euro_dolar(precio_rebajado_vip,1.12);
	//Muestra por pantalla el precio rebajado para VIPs
	cout << "El precio rebajado para clientes VIP es de "
		<< precio_rebajado_vip << " euros\n";
	cout << "El precio del producto rebajado para VIPs en dolares es de " << precio_dolar_vip << "$\n";
	/*A la variable precio_rebajado_estudiante le da el valor que se devuelve en la función calcula_rebaja_estudiante*/
	precio_rebajado_estudiante = calcula_rebaja_estudiante(precio,40);
	
	//Muestra por pantalla el precio del producto para estudiantes
	cout << "El precio para estudiantes del producto " << producto << " es de "
		<< precio_rebajado_estudiante << " euros\n";
	//Precio en dolar de estudiantes
	precio_dolar_estudiante = euro_dolar(precio_rebajado_estudiante, 1.12);
	cout << "El precio en dolares para estudiantes es de " << precio_dolar_estudiante << "$\n";
	return 0;
}

