
// Archivo de definición de los númericos.

#include "Numericos.h"

// -----------------------------------------------------------------------------

// Constructor por defecto explicito para contruir.

Numericos::Numericos (double Num_1 , double Num_2) {
	
	// Asignamos los valores.
	
	Numero_1 = Num_1;
	Numero_2 = Num_2;
	
}

// Ahora definiremos los accesores de datos.

// Numero 1 : colocar.

void Numericos::Set_Num_1 (double Num_1) {
	
	// Asignamos el valor.
	
	Numero_1 = Num_1;
	
}

// Numero 1 : Obtener.

double Numericos::Get_Num_1 () const {
	
	// Devolvemos el valor actual.
	
	return Numero_1;
	
}

// Numero 2 : Colocar.

void Numericos::Set_Num_2 (double Num_2) {
	
	// Asignamos el valor.
	
	Numero_2 = Num_2;
	
}

// Numero 1 : Obtener.

double Numericos::Get_Num_2 () const {
	
	// Devolvemos el valor actual.
	
	return Numero_2;
	
}

// -----------------------------------------------------------------------------
