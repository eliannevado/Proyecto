#include "archivo.h"
#include <cstdlib>
#include <iostream>
#include <cassert>
#include <string>
 
using namespace std;
void limpiar(){
    system("clear");
    }
int main()
{
   Archivo obj;
   Palabra obj2;
   bool opcion=false;
   int tecla;
   do {
    limpiar();
       cin.clear();
       cout << "Editor de Texto" << endl;
       cout << "-----------" << endl << endl;
       cout << "\t1  .- Crear Archivo" << endl;
       cout << "\t2  .- Leer Archivo" << endl;
       cout << "\t3  .- Guardar Archivo" << endl;
       cout << "\t4  .- Borrar archivo" << endl ;
  //     cout << "\t8  .- Encriptar Archivo" << endl ;
 //      cout << "\t9  .- Desencriptar Archivo" << endl;
       cout << "\t10  .- Aliniear a la Derecha" << endl ;
       cout << "\t11  .- Aliniear a la Izquierda" << endl ;
       cout << "\t12  .- Centrar" << endl ;
//       cout << "\t13  .- Justifica "<< endl;
       cout << "\t14 .- Salir" << endl<< endl ;
       cout << "Elije una opcion: ";
       cin >> tecla;
    switch(tecla){
      case 1:
        limpiar();
        cout << "Creaciòn de Archivo.\n";
        obj.crearArchivo();
        break;
      case 2:
        limpiar();
        obj.leerArchivo();
   	 cin.get();
        break;
      case 3:
        limpiar();
        obj.guardaArchivo();
   	 cin.get();
        break;
      case 4:
        limpiar();
        obj.borrarArchivo();
   	 cin.get();
        break;
        
      case 8:
        limpiar();
               obj.encriptaArchivo();
   	   cin.get();
        break;        
      case 9:
        limpiar();
               obj.desencriptaArchivo();
   	  cin.get();
        break;        
      case 10:
        limpiar();
               obj.justificarDerecha();
   	   cin.get();
        break;        
      case 11:
        limpiar();
               obj.justificarIzquierda();
   	   cin.get();
        break;        
      case 12:
        limpiar();
       obj.centrar();
   	 cin.get();
        break;        
 
      case 14:
        opcion=true;
        break;
      default:
       limpiar();
        cout << "Opcion no valida.\a\n";
        break;
 
    }
   }while(opcion!=true);
}


