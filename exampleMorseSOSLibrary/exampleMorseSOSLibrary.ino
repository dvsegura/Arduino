#include <MorseSOS.h>
int pin = 13;
MorseSOS morse(pin);

void setup() {

}

void loop() {
  //programa principal q gerera ...---...
  morse.dot(); morse.dot(); morse.dot(); //genera la s
  morse.dash(); morse.dash(); morse.dash(); // genera la o
  morse.dot(); morse.dot(); morse.dot(); //genera la s
  delay(3000);
}

/*Notas:
  1. Necesitas 2 archivos:
    -> archivo de cabecera(*.h) que contiene definiciones para la libreria, básicamente una lista de todo lo q contiene. Ej. Morse.h
    -> archivo fuente(*.cpp)  que tiene el código real. Ej. Morse.cpp
  2. Debemos incluir un "include" que le da acceso a los tipos estándares y constantes del lenguaje Arduino
    (esto se añade automaticamente en los programas que hacemos con Arduino, pero no a las librerias).

    #include <Arduino.h> 

    NOTA: Diferencia entre #include “my_library.h” e #include <my_library.h> .
    Cuando incluya un archivo de encabezado ubicado en el directorio de su proyecto, use “”.
    Si el archivo de encabezado está instalado globalmente, o en este caso, desde la carpeta de bibliotecas de Arduino, use <>.
 3. Ver código de la liberia en el directorio "exampleLibraryMorse"
    MorseSOS.h  
        
 4.Creear los ejemplos en carpeta Examples
 5.crear archivo keywords.txt para incluir palabras claves de la libreria para que sean reconocidas desde el IDE de arduino

  //Eliminar libreria: ir a archivo de preferencias.txt y buscar la ruta dónde se gardan este tipo de librerías: Normalmente documentos del usuario carpeta Arduino y borrar la carpeta.

*/
