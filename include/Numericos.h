
// Archivo de biblioteca con las clases y metodos para manipulaciones numericas de 2 valores.

// Crearemos la clase principal para los valores numericos.

class Numericos {
	
	// Como propiedades privadas tenemos estos valores.
	
	private :
		
		// Valores de contenido.
		
		double Numero_1 , Numero_2;
	
	// Ahora los metodos publicos.
	
	public :
		
		// Constructor por defecto explicito para contruir.
		
		explicit Numericos (double Num_1 , double Num_2);
		
		// Ahora obtenemos los accesores de datos.
		
		// Numero 1 : colocar.
		
		void Set_Num_1 (double Num_1);
		
		// Numero 1 : Obtener.
		
		double Get_Num_1 () const;
		
		// Numero 2 : Colocar.
		
		void Set_Num_2 (double Num_2);
		
		// Numero 1 : Obtener.
		
		double Get_Num_2 () const;
	
};
