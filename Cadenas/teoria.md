## Tipos de datos alfanumericos

# Introducción

En el lenguaje de programación C, no existe un tipo de datos que permita contener cadenas de caracteres. Las cadenas se implementan sobre arrays de caracteres.

# Carácter

Un carácter es un símbolo tipográfico como ser una letra en mayúscula o en minúscula, un signo de puntuación, un dígito numérico, etc.

## El tipo de datos *char*

El tipo de datos *char* permite definir variables cuyo contenido será el código ASCII de un carácter. Como este código es un valor entero corto, el *char* es, en realidad, un tipo de datos numérico de 1 byte de longitud.

# Cadenas

## Longitud de una cadena

Para contener una cadena de longitud *n* será necesario utilizar un *array* con capacidad para almacenar al menos $n+1$ caracteres ya que tenemos que considerar el carácter '\n0' para delimitar el final.

Es decir, una cadena de longitud *n*  se almacena en $n+1$ caracteres y utiliza $n+1$ *bytes* de memoria.

## Formas de inicializar una cadena.

char w[10] = {0} ; -> cadena vacia