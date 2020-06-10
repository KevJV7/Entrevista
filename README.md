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
