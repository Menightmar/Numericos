
# Versión actual minimo requerida para este proyecto.

cmake_minimum_required (VERSION 3.2)

# Establecemos el nombre de este proyecto.

project ("Numericos")

# Añadiremos la biblioteca que se genera con este proyecto y su archivo fuente.
	
add_library (Numericos "src/Numericos.cpp")

# Añadiremos los directorios de busqueda "include" para nuestra biblioteca creando
# la interfaz para su busqueda en este directorio actual en include.

target_include_directories (Numericos

	# Establecemos la interfaz publica en el directorio : include dentro de esta carpeta.

	PUBLIC
		
		# Creamos la interfaz
		
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
		
		# Instalamos la interfaz.
		
		$<INSTALL_INTERFACE:include>

	# Como privado tenemos el codigo fuente.
	
	PRIVATE
		
		# Los codigos fuente de la biblioteca en este directorio.
		
		src/
	
)
