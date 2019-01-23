#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <conio.h>
#include <time.h>
#include <stdio.h>
#include <dos.h>

using namespace std; 


int main(void) {

 	double matriz[100][100],matriz1[100][100];
	int blanco=0,blancox=0, puntos=0, movimiento=0, movimiento1=0;
	int x,y,c ;
	 
		srand(time(NULL));

	for (int i=1; i<=20;i++){
		for(int j=1 ; j<=10;j++)
		matriz[i][j]= rand() % 4 + 1;
	}
		for (int i=1; i<=20;i++){
		for(int j=1 ; j<=10;j++)
		matriz1[i][j]= rand()%4 + 1;
	}
	
		blanco=rand() % 10 + 1;
		blancox= rand() % 20 + 1;
			matriz[blancox][blanco]=0.0;
			matriz1[blancox][blanco]=0.0;
				

	

cout<<".........(0 0)......."<<endl;
cout<<".---oOO-- (_)-----------."<<endl;
cout<<"+                       +"<<endl;
cout<<"¦ ENCUENTRA TU BANDERA? ¦"<<endl;
cout<<"+                       +"<<endl;
cout<<"'-------------------oOO--"<<endl;
cout<<"........|__|__|.........."<<endl;
cout<<".......... || ||........."<<endl;
cout<<"....... ooO Ooo.........;"<<endl;
cout<<endl<<endl;
system("pause");



cout<<"OPRIMA"<<endl;
cout<<"1. VER INSTRUCCIONES "<<endl;
cout<<"2. JUGAR"<<endl;
cout<<"3. SALIR"<<endl;
cin>>x;

system("cls"); //es para borrar la pantalla

        if (x==1){
	cout<<endl;
	cout<<endl;
	cout<<"Primera fila     		  Segunda fila"<<endl;
	cout<<"1. para triangulo		1. para amarillo"<<endl;
	cout<<"2. para cuadrado 		2. para azul"<<endl;
	cout<<"3. para estrella 		3. para rojo"<<endl;
	cout<<"4. para corazon  		4. para blanco"<<endl;
	cout<<endl;
	cout<<"3 puntos por bandera amigas de cualquier figura"<<endl;	
	cout<<"5 puntos por bandera amigas de la misma figura"<<endl;
	cout<<"10 puntos por bandera amigas de solo corazon"<<endl;		
	cout<<"Mismos puntajes pero en negativo en caso de formar una bandera enemiga"<<endl;	
	cout<<endl;
	cout<<"PARA MOVER "<<endl;
	cout<<"OPRIMIR "<<endl;
	cout<<"2 PARA MOVER ABAJO "<<endl;
	cout<<"4 PARA MOVER IZQUIERDA"<<endl;
	cout<<"6 PARA MOVER DERECHA"<<endl;
	cout<<"8 PARA MOVER ARRIBA"<<endl;
	cout<<"OPRIMA UNA TECLA PARA JUGAR"<<endl;
	system("pause");
	system("cls"); //es para borrar la pantalla
}
		if(x==2 || x==1){


cout<<".........(0 0)......."<<endl;
cout<<".---oOO-- (_)-----------."<<endl;
cout<<"+                       +"<<endl;
cout<<"¦      nivel uno        ¦"<<endl;
cout<<"+                       +"<<endl;
cout<<"'-------------------oOO--"<<endl;
cout<<"........|__|__|.........."<<endl;
cout<<".......... || ||........."<<endl;
cout<<"....... ooO Ooo.........;"<<endl;
system ("pause");
system("cls"); //es para borrar la pantalla

while (puntos>-20 && puntos<30){

for (int i=1; i<=20;i++){
cout<<endl;
for(int j=1 ; j<=10	;j++)
	cout<<matriz[i][j]<<", "<<matriz1[i][j]<<"     "  ; /* las filas son i y las columnas son j*/
    }
    cout<<endl;
    cout<<endl;
   	cout<<"                   8                        "<<endl;
   	
	cout<<"                   |                        "<<endl;
    cout<<"                 ARRIBA                  "<<endl;
	cout<<"4<-IZQUIERDA     (0.0)       DERECHA->6 "<<endl;
	cout<<"                 ABAJO                        "<<endl;
	cout<<"                   |                        "<<endl;
    cout<<"                   2                "<<endl;


    
			for (int i=1; i<=20;i++){
			for(int j=1 ; j<=10	;j++){		
				
				if (matriz1[i][j]==1 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3 && matriz[i][j]==4 && matriz[i+1][j]==4 && matriz[i+2][j]==4){
					
						puntos =puntos+ 10;
						cout<<"BANDERA DE COLOMBIA ENCONTRADA"<<endl;
						cout<<endl;
						cout<<"[fila][columna]  BANDERA      FIGURA"<<endl;
						cout<<"["<<i<<"]   ["<<j<<"]        Amarillo     CORAZON"<<endl;
						cout<<"["<<i+1<<"]   ["<<j<<"]        Azul     CORAZON"<<endl;
						cout<<"["<<i+2<<"]   ["<<j<<"]        Rojo     CORAZON"<<endl;
						cout<<" GANO DIEZ PUNTOS"<<endl<<endl<<endl<<endl;
						
						matriz[i][j]=9;
				    	matriz1[i][j]=9;
			     		matriz[i+1][j]=9;
			        	matriz1[i+1][j]=9;
			       		matriz[i+2][j]=9;
			           	matriz1[i+2][j]=9;
						}	
					else if (matriz1[i][j]==4 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3 && matriz[i][j]==4 && matriz[i+1][j]==4 && matriz[i+2][j]==4)
					{
						
						puntos =puntos-10;
						cout<<"BANDERA DE RUSIA ENCONTRADA"<<endl;
						cout<<endl;
						cout<<"[fila][columna]  BANDERA      FIGURA"<<endl;
						cout<<"["<<i<<"]   ["<<j<<"]        Blanco     CORAZON"<<endl;
						cout<<"["<<i+1<<"]   ["<<j<<"]        Azul     CORAZON"<<endl;
						cout<<"["<<i+2<<"]   ["<<j<<"]        Rojo     CORAZON"<<endl;
						cout<<" PERDIO DIEZ PUNTOS"<<endl<<endl<<endl<<endl;
						matriz[i][j]=9;
				    	matriz1[i][j]=9;
			     		matriz[i+1][j]=9;
			        	matriz1[i+1][j]=9;
			       		matriz[i+2][j]=9;
			           	matriz1[i+2][j]=9;
					}
						else if ((matriz1[i][j]==4 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3 && matriz[i][j]==3 && matriz[i+1][j]==3 && matriz[i+2][j]==3)|| (matriz1[i][j]==4 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3 && matriz[i][j]==2 && matriz[i+1][j]==2 && matriz[i+2][j]==2) || (matriz1[i][j]==4 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3 && matriz[i][j]==1 && matriz[i+1][j]==1 && matriz[i+2][j]==1))
						{
						
						puntos =puntos-5;
						if (matriz[i][j]==1){

						cout<<"BANDERA DE RUSIA ENCONTRADA"<<endl;
						cout<<endl;
						cout<<"[fila][columna]  BANDERA      FIGURA"<<endl;
						cout<<"["<<i<<"]   ["<<j<<"]        Blanco     TRIANGULO"<<endl;
						cout<<"["<<i+1<<"]   ["<<j<<"]        Azul     TRIANGULO"<<endl;
						cout<<"["<<i+2<<"]   ["<<j<<"]        Rojo     TRIANGULO"<<endl;
						cout<<" PERDIO CINCO PUNTOS"<<endl<<endl<<endl<<endl;}

						if (matriz[i][j]==2){

						cout<<"BANDERA DE RUSIA ENCONTRADA"<<endl;
						cout<<endl;
						cout<<"[fila][columna]  BANDERA      FIGURA"<<endl;
						cout<<"["<<i<<"]   ["<<j<<"]        Blanco     CUADRADO"<<endl;
						cout<<"["<<i+1<<"]   ["<<j<<"]        Azul     CUADRADO"<<endl;
						cout<<"["<<i+2<<"]   ["<<j<<"]        Rojo     CUADRAD0"<<endl;
						cout<<" PERDIO CINCO PUNTOS"<<endl<<endl<<endl<<endl;}
						if (matriz[i][j]==3){
							cout<<"BANDERA DE RUSIA ENCONTRADA"<<endl;
						cout<<endl;
						cout<<"[fila][columna]  BANDERA      FIGURA"<<endl;
						cout<<"["<<i<<"]   ["<<j<<"]        Blanco     ESTRELLA"<<endl;
						cout<<"["<<i+1<<"]   ["<<j<<"]        Azul     ESTRELLA"<<endl;
						cout<<"["<<i+2<<"]   ["<<j<<"]        Rojo     ESTRELLA"<<endl;
						cout<<" PERDICO CINCO PUNTOS"<<endl<<endl<<endl<<endl;}
						matriz[i][j]=9;
				    	matriz1[i][j]=9;
			     		matriz[i+1][j]=9;
			        	matriz1[i+1][j]=9;
			       		matriz[i+2][j]=9;
			           	matriz1[i+2][j]=9;}
								else if ((matriz1[i][j]==1 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3 && matriz[i][j]==3 && matriz[i+1][j]==3 && matriz[i+2][j]==3)|| (matriz1[i][j]==1 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3 && matriz[i][j]==2 && matriz[i+1][j]==2 && matriz[i+2][j]==2) || (matriz1[i][j]==1 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3 && matriz[i][j]==1 && matriz[i+1][j]==1 && matriz[i+2][j]==1))
								{
										puntos =puntos+ 5;
						if (matriz[i][j]==1){
					
						cout<<"BANDERA DE COLOMBIA ENCONTRADA"<<endl;
						cout<<endl;
						cout<<"[fila][columna]  BANDERA      FIGURA"<<endl;
						cout<<"["<<i<<"]   ["<<j<<"]        Amarillo     TRIANGULO"<<endl;
						cout<<"["<<i+1<<"]   ["<<j<<"]        Azul     TRIANGULO"<<endl;
						cout<<"["<<i+2<<"]   ["<<j<<"]        Rojo     TRIANGULO"<<endl;
						cout<<" GANO CINCO PUNTOS"<<endl<<endl<<endl<<endl;}
						
						if (matriz[i][j]==2){

						cout<<"BANDERA DE COLOMBIA ENCONTRADA"<<endl;
						cout<<endl;
						cout<<"[fila][columna]  BANDERA      FIGURA"<<endl;
						cout<<"["<<i<<"]   ["<<j<<"]        Amarillo     CUADRADO"<<endl;
						cout<<"["<<i+1<<"]   ["<<j<<"]        Azul     CUADRADO"<<endl;
						cout<<"["<<i+2<<"]   ["<<j<<"]        Rojo     CUADRAD0"<<endl;
						cout<<" GANO CINCO PUNTOS"<<endl<<endl<<endl<<endl;}
						if (matriz[i][j]==3){
							cout<<"BANDERA DE COLOMBIA ENCONTRADA"<<endl;
						cout<<endl;
						cout<<"[fila][columna]  BANDERA      FIGURA"<<endl;
						cout<<"["<<i<<"]   ["<<j<<"]        Amarillo     ESTRELLA"<<endl;
						cout<<"["<<i+1<<"]   ["<<j<<"]        Azul     ESTRELLA"<<endl;
						cout<<"["<<i+2<<"]   ["<<j<<"]        Rojo     ESTRELLA"<<endl;
						cout<<" GANO CINCO PUNTOS"<<endl<<endl<<endl<<endl;}
						matriz[i][j]=9;
				    	matriz1[i][j]=9;
			     		matriz[i+1][j]=9;
			        	matriz1[i+1][j]=9;
			       		matriz[i+2][j]=9;
			           	matriz1[i+2][j]=9;
								}
									else if (matriz1[i][j]==1 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3){
										
						puntos =puntos+ 3;
						cout<<"BANDERA DE COLOMBIA ENCONTRADA"<<endl;
						cout<<endl;
						cout<<"[fila][columna]  BANDERA"<<endl;
						cout<<"["<<i<<"]   ["<<j<<"]        Amarillo"<<endl;
						cout<<"["<<i+1<<"]   ["<<j<<"]        Azul"<<endl;
						cout<<"["<<i+2<<"]   ["<<j<<"]        Rojo"<<endl;
						cout<<" GANO TRES PUNTOS"<<endl<<endl<<endl<<endl;
						
						matriz[i][j]=9;
						matriz1[i][j]=9;
						matriz[i+1][j]=9;
					  	matriz1[i+1][j]=9;
				   		matriz[i+2][j]=9;
				      	matriz1[i+2][j]=9;
						
									}
										else if (matriz1[i][j]==4 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3){
										
						puntos =puntos-3;
						cout<<"BANDERA DE RUSIA ENCONTRADA"<<endl;
						cout<<endl;
						cout<<"[fila][columna]  BANDERA"<<endl;
						cout<<" ["<<i<<"]   ["<<j<<"]        Blanco"<<endl;
						cout<<" ["<<i+1<<"]   ["<<j<<"]        Azul"<<endl;
						cout<<" ["<<i+2<<"]   ["<<j<<"]        Rojo"<<endl;
						cout<<" PERDIO TRES PUNTOS"<<endl<<endl<<endl<<endl;
						
						matriz[i][j]=9;
				    	matriz1[i][j]=9;
			     		matriz[i+1][j]=9;
			        	matriz1[i+1][j]=9;
			       		matriz[i+2][j]=9;
			           	matriz1[i+2][j]=9;
									}
		}	
	}
		for (int i=4; i<=20;i++){
		for(int j=1 ; j<=10	;j++)
        {
                      if (matriz[i][j]==9){
							c=i;
							while (c!=1){
								matriz [c+2][j]= matriz[c-1][j];
								matriz1[c+2][j]= matriz1[c-1][j];
								matriz[c-1][j]=9;
                                matriz1[c-1][j]=9;
                                c--;
								}
						}}}

for (int i=2; i<=3;i++){
for(int j=1 ; j<=10	;j++)
        {
			if(matriz[i][j]==9 && matriz[i+1][j]==9 && matriz[i+2][j]==9 && i==2)
			{
				matriz[i+2][j]=matriz[i-1][j];
				matriz[i-1][j]=9;
				matriz1[i+2][j]=matriz1[i-1][j];
				matriz1[i-1][j]=9;}
				
				else if (matriz[i][j]==9 && matriz[i+1][j]==9 && matriz[i+2][j]==9 && i==3){

				matriz[i+1][j]=matriz[i-2][j];
				matriz[i+2][j]=matriz[i-1][j];
				matriz[i-2][j]=9;
				matriz[i-1][j]=9;
				
				matriz1[i+1][j]=matriz1[i-2][j];
				matriz1[i+2][j]=matriz1[i-1][j];
				matriz1[i-2][j]=9;
				matriz1[i-1][j]=9;


					}}}
					
		for (int i=1; i<=20;i++){
		for(int j=1 ; j<=10;j++){
		if(matriz[i][j]==9){
		matriz[i][j]= rand() % 4 + 1;}}
	}
		for (int i=1; i<=20;i++){
		for(int j=1 ; j<=10;j++){
		if(matriz1[i][j]==9){
		matriz1[i][j]= rand()%4 + 1;}}
}

	
     cout<<endl;
     cout<<endl;
    
    cout<<"USTED TIENE EN TOTAL "<<puntos<<" puntos";
    cout<<endl;

	if (puntos>-20 && puntos<30){

    cout<<"ingrese movimiento"<<endl;
    cin>>movimiento;
    

if(movimiento==2 && blancox<20){


               matriz[blancox][blanco]=    matriz[blancox+1][blanco];
            	matriz1[blancox][blanco]=	matriz1[blancox+1][blanco];
                 matriz[blancox+1][blanco]=0;
          	matriz1[blancox+1][blanco]=0;
            blancox=blancox+1;
}
else if(movimiento==4 && blanco>1){
                          
                                  matriz[blancox][blanco]=matriz[blancox][blanco-1];
                                  matriz1[blancox][blanco]=	matriz1[blancox][blanco-1];
               	
                                    matriz[blancox][blanco-1]=0;
                                    matriz1[blancox][blanco-1]=0; 
                                    blanco=blanco-1;
									}
else if(movimiento==6 && blanco<10){
                                matriz[blancox][blanco]=    matriz[blancox][blanco+1];
                             	matriz1[blancox][blanco]=	matriz1[blancox][blanco+1];
               	
                                    matriz[blancox][blanco+1]=0;
                                   	matriz1[blancox][blanco+1]=0;
                                    blanco=blanco+1;
}
else if(movimiento==8 && blancox>1){
            		    matriz[blancox][blanco]=    matriz[blancox-1][blanco];
                       	matriz1[blancox][blanco]=	matriz1[blancox-1][blanco];

                            matriz[blancox-1][blanco]=0;
                           	matriz1[blancox-1][blanco]=0;
                            blancox=blancox-1;
                            cout<<endl;
}
else{
                                         cout<<"ingreso un valor incorrecto"<<endl;
                                         cout<<"no puede mover"<<endl;
										 system("pause");
}

}
		cout<<"usted  tiene "<< puntos <<" puntos"<<endl;
		movimiento1++;
		
		system("cls"); //es para borrar la pantalla
} } 	
	if(x==3 || x==2 || x==1){


		
	cout << "  _____      ___       ___  ___   _____"    << endl;
    cout << " / ___ |    /   |     /   |/   | |  ___|"  << endl;
    cout << "| |        / /| |    / /|   /| | | |__"    << endl;
    cout << "| |  _    / ___ |   / / |__/ | | |  __|"   << endl;
    cout << "| |_| |  / /  | |  / /       | | | |___"   << endl;
    cout << " _____/ /_/   |_| /_/        |_| |_____|"  << endl;
    cout << " _____   _     _   _____   _____"          << endl;
    cout << "/  _   | |   / /   |  ___| |  _    "        << endl;
    cout << "| | | | | |  / /  | |__   | |_| |"         << endl;
    cout << "| | | | | | / /   |  __|  |  _  /"         << endl;
    cout << "| |_| | | |/ /    | |___  | |     "        << endl;
    cout << " _____/ |___/     |_____| |_|   _  "       << endl;
    cout << endl << endl;
    
    if(movimiento1>0){

    cout << "ALCANZO EL NIVEL CON;"<<movimiento1<<" MOVIMIENTOS"<<endl<<endl;
}
else {
	cout<< "PERDIO EL NIVEL"<<endl<<endl;}
}
cout<< "copyright Colombia Arauca"<<endl;
cout<< "DANNA VALERIA LONDONO ANZOLA"<<endl;
cout<< "WULLFREDO JAVIER BARCO GODOY"<<endl;
cout<< "PROGRAMACION DE COMPUTADORES "<<endl;
cout<< "GRUPO 2"<<endl<<endl;



	system ("pause");

	return 0; 
}
