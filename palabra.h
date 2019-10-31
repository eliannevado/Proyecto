#ifndef PALABRA_H
#define PALABRA_H
#include <string>
#include <iostream>
using namespace std;
class Palabra //Declaramos la clase con el nombre palabra
{
public:
    
     string justificarDerecha(char frase[80]){
            int v;
            char salida[80];
            for (int i=0; i<80;i++){ salida[i]=' '; }   
            int tam=strlen(frase);
            v=tam;
            for (int y=79; y>-1;y--){
                if (v<0) break;
                else salida[y]=frase[v];
                v--;
            }
            string sal=salida;
            return sal;
     }
     string justificarIzquierda(char frase[80]){
            int v=0, ind=0;
            char salida[80];
            for (int y=0; y<80;y++){
                if (frase[y]!=' ') break;
                else v++;
            }
            for (int i=v; i<80;i++){
                salida[ind]=frase[i];
                ind++;
            }
            string sal=salida;
            return sal;
     }
     string justificarCentro(char frase[80]){
            int v=0, ind=0;
            int tam=0,tam2=0;
            char temp[80];            
            char salida[80];
            for (int i=0; i<80;i++){ salida[i]=' '; }   
            for (int y=0; y<80;y++){
                if (frase[y]!=' ') break;
                else v++;
            }
            for (int i=v; i<80;i++){
                temp[ind]=frase[i];
                ind++;
            }
            tam=strlen(temp);
            tam2=tam/2;
            ind=0;
            for (int i=tam2; i<40;i++){
                salida[i]=temp[ind];
                ind++;
            }
            for (int i=40; i<80;i++){
                salida[i]=temp[ind];
                ind++;
            }
           
            string sal=salida;
            return sal;
     }
 
};
 
#endif

