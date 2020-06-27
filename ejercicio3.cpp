#include <iostream>
using namespace std;
void llenar(double n,double notas[5]);
void notafinal(double n,double *notas);
double notas[5];


int main(){
    double n=0.0;
    cout<<"sistema de notas(se reprueba con menos de 6 de promedio final)"<<endl<<endl;
cout<<"Ingrese la cantidad estudiantes: "<<endl;
cin>>n;
for(int i=0;i<n;i++){
    cout<<"Estudiante numero "<<i<<" :"<<endl;
        llenar(n,notas);
    cout<<"Estudiante numero "<<i<<" tiene notas equivalentes a: ";
notafinal(n,notas);
}
return 0;
}

void llenar(double n,double notas[5]){
                cout<<"ingrese nota 1:"<<endl;
                    cin>>notas[0];
                cout<<"ingrese nota 2:"<<endl;
                    cin>>notas[1];
                cout<<"ingrese nota 3:"<<endl;
                    cin>>notas[2];
                cout<<"ingrese nota 4:"<<endl;
                    cin>>notas[3];
                cout<<"ingrese nota 5:"<<endl;
                    cin>>notas[4];

        }


void notafinal(double n,double *notas){
double nf=0.0;

    for (int a=0;a<5;a++){
        cout<<notas[a]<<", ";
    }
    cout<<endl<<endl;
    cout<<"La nota final es: ";
    nf=(notas[0]*0.2)+(notas[1]*0.2)+(notas[2]*0.2)+(notas[3]*0.2)+(notas[4]*0.2);
    cout<<nf;
            if (nf<6.0){
                cout<<endl<<"El Estudiante reprobo"<<endl;
            }
            else{
                cout<<endl<<"Felicidades el estudiante aprobo"<<endl;
            }
}
