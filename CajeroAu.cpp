#include <iostream>

using namespace std;

int main(){
    int saldo=1000;
    int opcion;
    do{
        cout<<"-----Opciones----\n";
        cout<<"1.consultar saldo\n";
        cout<<"2.depositar dinero\n";
        cout<<"3.retirar dinero\n";
        cout<<"4.Salir\n";
        cout<<"ingrese una opcion:\n";
        cin>>opcion;
        switch(opcion) {
            case 1: {
                cout << "su saldo es de : "<<saldo<<endl;
                break;
            }
            case 2: {
                double deposito;
                cout << "Ingrese su deposito: "<<endl;
                cin>>deposito;
                if(deposito<=0){
                    cout<<"No se permiten depositos negativos o de 0"<<endl;
                    break;
                }
                else{
                saldo=saldo+deposito;
                cout<<"saldo actualizado"<<endl;
                break;
                }
               
            }
            case 3: {
                double retiro;
                cout << "Ingrese su Retiro: " <<endl;
                cin>>retiro;
                if(retiro>saldo){
                    cout<<"No se permiten retiros mayores al saldo disponible."<<endl;
                    break;
                }
                else{
                saldo=saldo-retiro;
                cout<<"saldo actualizado"<<endl;
                break;
                }
                
            }
            case 4:{
                cout << "Saliendo del cajero..." << endl;
                break;
            }
            default:
                cout << "Opcion invalida. Intenta de nuevo." << endl;
    }
}while(opcion!=4);
return 0;
};
