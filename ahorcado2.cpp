#include <iostream>
#include <cmath>

using namespace std;

bool jugarAhorcado(string p[], int s[], int j){
	
	int opcion, cont;
    string nickname;//, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12;
   // string p1="queso";
    //string adiv[p1.size()];
    char adiv[p[j].size()];
    int intentos=10;
    char x;
    bool flag = true;
    
	for(int i=0; i<p[j].size(); i++){
        adiv[i]='_';
        cout << adiv[i] << " ";
    }
    cout << endl;
    string acum="";
                       
    while(acum!=p[j] && intentos > 0){
        cout<<"\nIngrese la letra.   "; cout<<"Vidas: "<<intentos<<endl;
        cin>>x;
        cout<<endl;
               
        acum = "";
        //si el caracter ingresado es igual a alguna letra de la palabra
						
        for(int i=0; i<p[j].size(); i++){
            if(x==p[j].at(i)){
                adiv[i]=x;
                flag = false;
                
            }
            if(i==p[j].size()-1 && flag==true){
							  
                cout<<"\n\nLa letra es incorrecta"<<endl << endl;
                intentos--;
                //break;
            }
        cout<<adiv[i] << " ";
                            
        }
        cout<<endl;
        //para leer lo que esté en la palabra adivinada (array)
        for (int i=0; i<p[j].size(); i++){
            acum+=adiv[i];
        }
        flag = true;
    }
                    
                    
    //else{
	if(acum == p[j]){
        cout<<"\n¡Adivinaste la palabra!  '"<<acum<<"'"<<endl;
        return true;
    }   
    //}    
                
    if(intentos==0){
        cout<<"Ahorcado"<<endl << "\tx_x" << endl;
        intentos--;
        return false;
    }
}

int main(){
    int opcion, size, s[12], turno=0;
    string p[] = {"queso", "casa", "escuela", "cocinar", "playa", "manzana", "camisa", "computadora", "maestro", "television", "habitacion", "pizarron"};
    string nickname;//, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12;
    string p1="queso";
    //string adiv[p1.size()];
    char adiv[p1.size()];
    int intentos=10;
    char x;
    bool flag = true, correcto = false;
   
	for(int i=0; i<12; i++){
		s[i] = p[i].length();
		//cout << s[i] << " ";
   }
   
    cout<<"Ingrese su nickname: "<<endl;
    cin>>nickname;
   
    cout<<"\nAHORCADO "<<endl;
    cout<<"1. Jugar "<<endl;
    cout<<"2. Salir "<<endl;
    cin>>opcion;
   
    switch(opcion){
        case 1: int cont=3, contador=0;
		//cout<<"\n  NIVEL   " << turno <<endl;
        //if(cont==3)
        	if(contador%3==0)turno++;
        		for(int i=0; i<12; i++){
        		//if(contador%3==0);
        			if(contador%3==0){
        				cout<<"\n\n  NIVEL   " << ((contador/3)+1) <<endl;
        			}
        		
        			if(cont==3 || cont==2)
        				correcto = jugarAhorcado(p, s, i);
        			
        			if(correcto == true) cont=3;
        			else cont--;
        		
        		contador++;
        	}
        	if(contador==12 && (cont == 2 || cont == 3)) cout << "\nHAS GANADO!" << endl;
        	else cout << "\nHAS PERDIDO\tT-T" << endl;
               
    	break;
    }
   
    return 0;
}

