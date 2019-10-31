#ifndef SEGURIDAD_H
#define SEGURIDAD_H
 
using namespace std;
class Seguridad //Declaramos la clase con el nombre palabra
{
private:
char abc[50];
public:
     Seguridad (){
        char i;
        int cont=0;
        for(i='a'; i<'z'; i++){
          abc[cont]=i;
          cont++;
        }
     }
     string encriptar(char frase[80]){
          char salida[80];
          for (unsigned int i=0;i<80;i++){
             salida[i]=frase[i]+1;
          }
          return salida;
     }
     string desencriptar(string frase){
          char salida[80];
          for (unsigned int i=0;i<80;i++){
             salida[i]=frase[i]-1;
          }
          return salida;
 
     }
};
 
#endif
