#include <iostream>
using namespace std;
void cod(char frase[],int i);

int main(){
    int i=0;
cout<<"ingrese el tamano de la frase (sin espacios): "<<endl;
cin>>i;
cout<<"Escriba la frase como se le pide a continuacion sin espacios"<<endl;
   char frase[i];
for (int n=0;n<i;n++){
cout<<"Ingrese el caracter en "<<n<<" que desea codificar: "<<endl;
cin>>frase[n];
}
cout<<"frase codificada es: ";
cod(frase,i);
cout<<endl<<endl;
cout<<"su frase decodificada fue: ";
for (int x=0;x<i;x++){
    cout<<frase[x];
}
cout<<endl;
return 0;
}

void cod(char *frase,int i){
for (int j=0;j<i;j++){
        frase[j];
        if(frase[j]=='m'){
            cout<<"0";
        }
        else if(frase[j]=='u'){
            cout<<"1";
        }
        else if(frase[j]=='r'){
            cout<<"2";
        }
        else if(frase[j]=='c'){
            cout<<"3";
        }
        else if(frase[j]=='i'){
            cout<<"4";
        }
        else if(frase[j]=='e'){
            cout<<"5";
        }
        else if(frase[j]=='l'){
            cout<<"6";
        }
        else if(frase[j]=='a'){
            cout<<"7";
        }
        else if(frase[j]=='g'){
            cout<<"8";
        }
        else if(frase[j]=='o'){
            cout<<"9";
        }
        else{
            cout<<*frase;
        }
    }
}
