#include <iostream>
#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <string.h>
#include <cstdlib>
#include "palabra.h"
#include "seguridad.h"
#include <fstream>
 
using namespace std;
class Archivo //Declaramos la clase con el nombre Persona
{
    
private:     //a partir de aquí todos los miembros serán privados
//los datos miembro pueden ser cualquier tipo de dato, incluso otras clases como string
 string nombre;
 
public:      //a patir de aquí todas las declaraciones serán de acceso público
        void crearArchivo(){
              string nArchivo;
               ofstream archivoT;  // objeto de la clase ofstream
               archivoT.open("info.txt");
               archivoT << "Primera linea de texto\n";
               archivoT << "Segunda linea de texto\n";
               archivoT << "Ultima linea de texto\n";
               archivoT.close();
              cout<<"Archivo creado"<<endl;
              cin.get();
              }
        // Metodo para Guardar  Frases en un archivo
        void guardaArchivo(){
              string nArchivo;
              char cadena2[80];
              string cadena,cadena1;
              bool continua=true;
               ofstream archivoT("info.txt",ios::app);       
               cout << "Nota: Ingrese texto para continuar en la linea siguinte presione enter"<<endl;
               cout<< "para guardar escriba guardar y presione enter\n";
               cout<< "para salir escriba salir y presione enter\n";
               while (continua==true){
                      cout << "Ingrese texto: "<<endl;
                      cin.getline(cadena2,80); // getlinepermite leer la linea completa incluyendo espacios
                      cadena1=cadena2; 
                      if (cadena1=="salir"){continua=false; }
                      else if (cadena1=="guardar"){continua=false;  break;}
                      else {
                           cadena=cadena+cadena1+"\n";
                           cout<<cadena<<endl;
                      }
         
               }
               if (cadena1=="guardar"){
                       archivoT << cadena;
               }
               archivoT.close();
               cout<<"Archivo Actualizado"<<endl;
               cin.get();
        }
        // Metodo para Mostrar por pantalla datosde  un archivo
        void leerArchivo(){
             char cadena1[80]; // porque es el tamaño maximo de una linea enun archivo de texto.
             string cadena;
             ifstream fe("info.txt");
             while(!fe.eof()) {
                  fe.getline(cadena1, 80,'\n'); // lee la linea de 80 caracteres y lo guarda en la variable cadena \n paraindicar fin delinea
                  cout<< cadena1 << endl;
              }
              fe.close();
              char n;
              cout<<"Presione enter"<<endl;
              cin>>n;
        }
        // Metodo para Inicializar el archivo
        void borrarArchivo(){
              string nArchivo;
               ofstream archivoT;  // objeto de la clase ofstream
               archivoT.open("info.txt");
               archivoT.close();
              cout<<"Archivo creado"<<endl;
              system("PAUSE");
              }

       void encriptaArchivo(){
            char cadena1[80]; // porque es el tamaño maximo de una linea enun archivo de texto.
            string cadena;
            ifstream fe("info.txt");
            Seguridad obj3;
            while(!fe.eof()) {
                 fe.getline(cadena1, 80,'\n'); // lee la linea de 80 caracteres y lo guarda en la variable cadena \n paraindicar fin delinea
                 cout<<"Cadena: "<< cadena1 <<" Frase Encriptada "<<obj3.encriptar(cadena1)<<endl;
                 cadena=cadena+obj3.encriptar(cadena1)+"\n";
            }
           fe.close();
           ofstream archivoT;  // objeto de la clase ofstream
           archivoT.open("info.txt");
           archivoT << cadena;
           archivoT.close();
           cout<<"Archivo Encriptado...."<<endl;
          
       }
       void desencriptaArchivo(){
            char cadena1[80]; // porque es el tamaño maximo de una linea enun archivo de texto.
            string cadena;
            ifstream fe("info.txt");
            Seguridad obj3;
            while(!fe.eof()) {
                 fe.getline(cadena1, 80,'\n'); // lee la linea de 80 caracteres y lo guarda en la variable cadena \n paraindicar fin delinea
                 cout<<"Cadena: "<< cadena1 <<" Frase DesEncriptada "<<obj3.desencriptar(cadena1)<<endl;
                 cadena=cadena+obj3.desencriptar(cadena1)+"\n";
            }
           fe.close();
           ofstream archivoT;  // objeto de la clase ofstream
           archivoT.open("info.txt");
           archivoT << cadena;
           archivoT.close();
           cout<<"Archivo Encriptado...."<<endl;
          
       }
       void justificarDerecha(){
            Palabra obj2;
            char cadena1[80]; // porque es el tamaño maximo de una linea enun archivo de texto.
            string cadena;
            ifstream fe("info.txt");
            while(!fe.eof()) {
                 fe.getline(cadena1, 80,'\n'); // lee la linea de 80 caracteres y lo guarda en la variable cadena \n paraindicar fin delinea
                 cadena+=obj2.justificarDerecha(cadena1)+"\n";
           }
           fe.close();
           ofstream archivoT;  // objeto de la clase ofstream
           archivoT.open("info.txt");
           archivoT << cadena;
           archivoT.close();
           cout<<"Archivo Justificado a la Derecha..."<<endl;
       }
       void justificarIzquierda(){
            Palabra obj2;
            char cadena1[80]; // porque es el tamaño maximo de una linea enun archivo de texto.
            string cadena;
            ifstream fe("info.txt");
            while(!fe.eof()) {
                 fe.getline(cadena1, 80,'\n'); // lee la linea de 80 caracteres y lo guarda en la variable cadena \n paraindicar fin delinea
                 cadena+=obj2.justificarIzquierda(cadena1)+"\n";
                //cout<<"Tamaño cadena: "<<strlen(cadena1)<<endl;
             //    cout<<"Cadena: "<<cadena<<endl;
           }
           fe.close();
           ofstream archivoT;  // objeto de la clase ofstream
           archivoT.open("info.txt");
           archivoT << cadena;
           archivoT.close();
           cout<<"Archivo Justificado a la Izquierda..."<<endl;
       }
       void centrar(){
            Palabra obj2;
            char cadena1[80]; // porque es el tamaño maximo de una linea enun archivo de texto.
            string cadena;
            ifstream fe("info.txt");
            while(!fe.eof()) {
                 fe.getline(cadena1, 80,'\n'); // lee la linea de 80 caracteres y lo guarda en la variable cadena \n paraindicar fin delinea
                 cadena+=obj2.justificarCentro(cadena1)+"\n";
                 cout<<"Tamaño cadena: "<<strlen(cadena1)<<endl;
                 cout<<"Cadena: "<<cadena<<endl;
           }
           fe.close();
           ofstream archivoT;  // objeto de la clase ofstream
           archivoT.open("info.txt");
           archivoT << cadena;
           archivoT.close();
           cout<<"Archivo Justificado al Centro..."<<endl;
       }
 
      void split(string palabra, string delimitador){
      //    string salida[]=palabra.split(delimitador);
        //  cout<<salida[0]<<endl;
        char frase[]="Me van a dividir jojo jojo ji";
        char *ptr;
        cout << "LA FRASE ANTES: " << frase << endl;
        ptr = strtok(frase," ");//argumentos: frase, caracter delimitador
        while(ptr != NULL)
   {
     cout << ptr << endl;
     ptr = strtok(NULL, " ");
   }
 cout << "LA FRASE DESPUES: " << frase << endl;
 
  	  cin.get();
       }   
      
};
#endif
