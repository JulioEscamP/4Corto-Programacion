#include <iostream>
using namespace std;
void media(double estat[]);
void comparar(double *estat);
int main(){
    double estat[25]={1.75,1.82,1.85,1.69,1.42,1.92,1.53,1.63,1.75,1.64,1.87,1.73,1.81,1.90,1.41,1.51,1.49,1.59,2.00,1.67,1.93,1.76,1.91,1.98,1.44};
cout<<"programa que calcula la media de estatura de una clase de 25 alumnos."<<endl<<endl;
for(int i=0;i<25;i++){
cout<<"La estatura del alumno "<<i<<" es: ";
cout<<estat[i]<<"m";
cout<<endl;
}
cout<<endl;
cout<<"La media es igual a: ";
media(estat);
comparar(estat);
return 0;
}

void media(double estat[]){
    double sum=0;
    double media=0;
    for (int i=0;i<25;i++){
        sum +=estat[i];
    }
    media=(sum/25);
    cout<<media;
    cout<<endl<<endl;
}

void comparar(double *estat){
    double media;
    int cmenoresmedia=0;
    int cmayoresmedia=0;
for(int n=0;n<25;n++){
    estat[n];
    if(estat[n]<media){
        cmenoresmedia++;
    }
    else if(estat[n]>media){
        cmayoresmedia++;
    }
}
cout<<"La cantidad de estudiantes debajo de la media son: "<<cmenoresmedia<<endl;
cout<<"La cantidad de estudiantes por encimade la media son: "<<cmayoresmedia<<endl;
}
