# Entrevista

Programa 1

Se hace una función Booleana “respuestainvalidadeloop” para determinar si el usuario quiere pues seguir corriendo el programa.
Se crea la función “FormulaCubica” para resolver por el método de Cardano un polinomio de grado 3  en el que pedimos al usuario que ingrese los coeficientes 
Nuestro objetivo es imprimir las raíces reales en las que gracias al método de Cardano podemos darnos cuenta si sus tres raíces son reales y si  una raíz es real o si todas sus raíces son iguales
En el main se llaman las funciones para más información sobre el método de Cardano aquí dejo el enlace que lo explica a detalle http://www.1728.org/cubic2.htm 

Programa 2

Se crea una función llamada list_dir que nos permite listar los elementos de un directorio
Para el manejo de directorio se incluye la librería dirent.h (la función list_dir) donde se pase la ruta del directorio(dir)
Se crea un puntero para manejar el directorio (directorios) 
Para acceder a la información de los elementos, trabaremos con la estructura de datos dirent
Vamos a crear un puntero llamado elemento y una variable llamada elem donde se guardará el nombre de cada archivo
Abrimos el directorio y se recorre uno a uno sus elementos en el bucle while con la función readdir
En cada elemento asignamos el nombre a elem y el tamaño a una cadena llamada newString con ayuda de .tellg() 
Guardamos estos datos en xx cerramos el directorio y eso lo vamos a ver en la función init donde se pide que se introduzca la ruta del directorio y la guardamos en dir
Enseguida se llama a la función list_dir e incluimos el directorio y se vuelve a llamar a la función init para que el usuario pueda volver a llamar el programa.
Y ahora llamamos a la función init en la función main.
