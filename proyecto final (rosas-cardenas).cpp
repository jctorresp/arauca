#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <conio.h>

using namespace std; 

int main() {
	
	double matr1[50][50], matr2[50][50];
	int espacioblanco, espacio_blanco, puntos=0, avances=15, mov=0;
	 
		srand(time(NULL));

	for (int f=1; f<=20; f++){           // f = fila; c = columna
		for(int c=1 ; c<=10; c++)
		matr1[f][c] = rand() % 4 + 1;
	}
		for (int f=1; f<=20; f++){
		for(int c=1 ; c<=10; c++)
		matr2[f][c] = rand() % 4 + 1;
	}
	
	espacioblanco = rand() % 10 + 1;
	espacio_blanco = rand() % 20 + 1;
	matr1[espacio_blanco][espacioblanco] = 0.0;
	matr2[espacio_blanco][espacioblanco] = 0.0;
				
	while (avances!=0){
          
	cout<<endl;
	cout<<endl;
	cout<<"		    BIENVENIDOS A NUESTRO JUEGO"<<endl;
	cout<<endl;
	cout<<"         ______________                  ______________ "<<endl;
	cout<<"	|1 -> Triangulo|	       	|1 -> Negro_osc|"<<endl;
	cout<<"	|2 -> Cuadrado |        	|2 -> Azul_cla |"<<endl;
	cout<<"	|3 -> Estrella |	        |3 -> Rojo_cla |"<<endl;
	cout<<"	|4 -> Corazon  |	        |4 -> Verde_osc|"<<endl;
	
	cout<<"\n"<<endl;
	
	cout<<"Se establecen los siguientes puntajes: "<<endl;
	
	cout<<"\n"<<endl;
	
	cout<<"~ 3 puntos por BANDERA AMIGA de cualquier figura"<<endl;	
	cout<<"~ 5 puntos por BANDERA AMIGA de la misma figura"<<endl;
	cout<<"~ 10 puntos por BANDERA AMIGA de solo corazon"<<endl;		
	cout<<"~ Los mismos puntajes pero negativos en caso de que se forme una bandera enemiga"<<endl;	
	
	cout<<"\n"<<endl;
	
	cout<<"	MOVIMIENTOS: "<<endl; 
	
	cout<<endl;
	
	cout<<" Con 1 mueve -> ARRIBA"<<endl;
	cout<<" Con 2 mueve -> ABAJO"<<endl; 
	cout<<" Con 3 mueve -> IZQUIERDA"<<endl;
	cout<<" Con 4 mueve -> DERECHA"<<endl; 
	cout<<endl; 

		for (int f=1; f<=20; f++){
		for (int c=1; c<=10; c++){		
				
			if (matr2[f][c]==1 && matr2[f+1][c]==2 && matr2[f+2][c]==3 && matr1[f][c]==4 && matr1[f+1][c]==4 && matr1[f+2][c]==4){
					
				puntos += 3;
				cout<<endl;
				cout<<" ["<<f<<"]["<<c<<"] CORAZON -> Negro_osc"<<endl;
				cout<<" ["<<f+1<<"]["<<c<<"] CORAZON -> Azul_cla"<<endl;
				cout<<" ["<<f+2<<"]["<<c<<"] CORAZON -> Rojo_cla"<<endl;
				cout<<endl;
				cout<<"	¡BANDERA AMIGA ENCONTRADA! :)"<<endl;
				cout<<"	= Gano 3 puntos, ahora tiene: "<< puntos << " puntos. "<<endl;
						
					}	
				else if (matr2[f][c]==4 && matr2[f+1][c]==2 && matr2[f+2][c]==3 && matr1[f][c]==4 && matr1[f+1][c]==4 && matr1[f+2][c]==4)
					{
						
				puntos -= 3;
				cout<<endl;
				cout<<" ["<<f<<"]["<<c<<"] CORAZON -> Verde_osc"<<endl;
				cout<<" ["<<f+1<<"]["<<c<<"] CORAZON -> Rojo_cla"<<endl;
				cout<<" ["<<f+2<<"]["<<c<<"] CORAZON -> Negro_osc"<<endl;
				cout<<endl;
				cout<<"	¡BANDERA ENEMIGA ENCONTRADA! :("<<endl;
				cout<<"	= Perdio 3 puntos, ahora tiene: "<< puntos << " puntos. "<<endl;
						
					}
				else if ((matr2[f][c]==4 && matr2[f+1][c]==2 && matr2[f+2][c]==3 && matr1[f][c]==3 && matr1[f+1][c]==3 && matr1[f+2][c]==3) || (matr2[f][c]==4 && matr2[f+1][c]==2 && matr2[f+2][c]==3 && matr1[f][c]==2 && matr1[f+1][c]==2 && matr1[f+2][c]==2) || (matr2[f][c]==4 && matr2[f+1][c]==2 && matr2[f+2][c]==3 && matr1[f][c]==1 && matr1[f+1][c]==1 && matr1[f+2][c]==1))
					{
						
				puntos += 5;
				cout<<endl;
				cout<<" ["<<f<<"]["<<c<<"] FIGURA -> Negro_osc"<<endl;
				cout<<" ["<<f+1<<"]["<<c<<"] FIGURA -> Azul_cla"<<endl;
				cout<<" ["<<f+2<<"]["<<c<<"] FIGURA -> Rojo_cla"<<endl;
				cout<<endl;
				cout<<"	¡BANDERA AMIGA ENCONTRADA! :)"<<endl;
				cout<<"	= Gano 5 puntos, ahora tiene: "<< puntos << " puntos. "<<endl;
					
					}
				else if ((matr2[f][c]==1 && matr2[f+1][c]==2 && matr2[f+2][c]==3 && matr1[f][c]==3 && matr1[f+1][c]==3 && matr1[f+2][c]==3) || (matr2[f][c]==1 && matr2[f+1][c]==2 && matr2[f+2][c]==3 && matr1[f][c]==2 && matr1[f+1][c]==2 && matr1[f+2][c]==2) || (matr2[f][c]==1 && matr2[f+1][c]==2 && matr2[f+2][c]==3 && matr1[f][c]==1 && matr1[f+1][c]==1 && matr1[f+2][c]==1))
					{
						
				puntos -= 5;
				cout<<endl;
				cout<<" ["<<f<<"]["<<c<<"]  FIGURA -> Verde_osc"<<endl;
				cout<<" ["<<f+1<<"]["<<c<<"] FIGURA -> Rojo_cla"<<endl;
				cout<<" ["<<f+2<<"]["<<c<<"] FIGURA -> Negro_osc"<<endl;
				cout<<endl;
				cout<<"	¡BANDERA ENEMIGA ENCONTRADA! :("<<endl;
				cout<<"	= Perdio 5 puntos, ahora tiene: "<< puntos << " puntos. "<<endl;
					
					}
				else if (matr2[f][c]==1 && matr2[f+1][c]==2 && matr2[f+2][c]==3){
										
				puntos += 10;
				cout<<endl;
				cout<<" ["<<f<<"]["<<c<<"] Negro_osc"<<endl;
				cout<<" ["<<f+1<<"]["<<c<<"] Azul_cla"<<endl;
				cout<<" ["<<f+2<<"]["<<c<<"] Rojo_cla"<<endl;
				cout<<endl;
				cout<<"	¡BANDERA AMIGA ENCONTRADA! :)"<<endl;
				cout<<"	= Gano 10 puntos, ahora tiene: "<< puntos << " puntos. "<<endl;
						
					matr1[f][c]=9;
					matr2[f][c]=9;
						matr1[f+1][c]=9;
					    matr2[f+1][c]=9;
					      	matr1[f+2][c]=9;
					        matr2[f+2][c]=9;
						
									}
				else if (matr2[f][c]==4 && matr2[f+1][c]==2 && matr2[f+2][c]==3){
										
				puntos -= 10;
				cout<<endl;
				cout<<" ["<<f<<"]["<<c<<"] Verde_osc"<<endl;
				cout<<" ["<<f+1<<"]["<<c<<"] Rojo_cla"<<endl;
				cout<<" ["<<f+2<<"]["<<c<<"] Negro_osc"<<endl;
				cout<<endl;
				cout<<"	¡BANDERA ENEMIGA ENCONTRADA! :("<<endl;
				cout<<"	= Perdio 10 puntos, ahora tiene: "<< puntos << " puntos. "<<endl;
						
					matr1[f][c] = 9;
					matr2[f][c] = 9;
					    matr1[f+1][c] = 9;
					    matr2[f+1][c] = 9;
					        matr1[f+2][c] = 9;
					        matr2[f+2][c] = 9;
									}
		}	
	}
			
      	for (int f=1; f<=20; f++){
		for (int c=1; c<=10; c++)
        {
                      if (matr1[f][c]==9){                     
             }          
        }
    }
      	for (int f=1; f<=20; f++){
        	cout<<endl;
		for (int c=1; c<=10; c++)
		cout<<matr1[f][c]<<", "<<matr2[f][c]<<"     ";	
    }
    cout<<"\n"<<endl;
    cout<<endl;
     
    cout<<"Recuerda leer las INSTRUCCIONES que estan arriba!"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Te quedan: "<<avances<<" movimientos.";
    cout<<endl;
    cout<<"Tienes en total: "<<puntos<<" puntos.";
    cout<<"\n"<<endl;
    cout<<"Ingresa tu siguiente movimiento: ";
    cin>>mov;
    
    
    switch (mov)
  {
           case 1:
           		if (espacioblanco==1){
								cout<<"Elija otra direccion"<<endl;
								}
								else{
									
                matr1[espacio_blanco][espacioblanco] = matr1[espacio_blanco - 1][espacioblanco];
               	matr2[espacio_blanco][espacioblanco] = matr2[espacio_blanco - 1][espacioblanco];
               	
                matr1[espacio_blanco - 1][espacioblanco] = 0;
               	matr2[espacio_blanco - 1][espacioblanco] = 0; 
                espacio_blanco = espacio_blanco - 1;
         }
                
            case 2:
            	if (espacioblanco==20){
								cout<<"Elija otra direccion"<<endl;
								}
								else{
									
                matr1[espacio_blanco][espacioblanco] = matr1[espacio_blanco + 1][espacioblanco];
            	matr2[espacio_blanco][espacioblanco] = matr2[espacio_blanco + 1][espacioblanco];
               	
                matr1[espacio_blanco + 1][espacioblanco] = 0;
                matr2[espacio_blanco + 1][espacioblanco] = 0; 
                espacio_blanco = espacio_blanco + 1;
					 }     
            case 3:
            	if (espacio_blanco==1){
								cout<<"Elija otra direccion"<<endl;
								}
								else{
									
                matr1[espacio_blanco][espacioblanco] = matr1[espacio_blanco][espacioblanco - 1];
                matr2[espacio_blanco][espacioblanco] = matr2[espacio_blanco][espacioblanco - 1];
               	
                matr1[espacio_blanco][espacioblanco - 1] = 0;
                matr2[espacio_blanco][espacioblanco - 1] = 0; 
                espacioblanco = espacioblanco - 1;
        }
            case 4:
            	if (espacio_blanco==10){
								cout<<"Elija otra direccion"<<endl;
								}
								else{
									
                matr1[espacio_blanco][espacioblanco] = matr1[espacio_blanco][espacioblanco + 1];
                matr2[espacio_blanco][espacioblanco] = matr2[espacio_blanco][espacioblanco + 1];
               	
                matr1[espacio_blanco][espacioblanco + 1] = 0;
                matr2[espacio_blanco][espacioblanco + 1] = 0;
            	espacioblanco = espacioblanco + 1;
     }
			default: 
				cout<<endl;
                cout<<"Valor incorrecto, digite otro valor";
                                         
                                         
}
	cout<<"Tienes: "<< puntos <<" puntos."<<endl;
    
    
    
    for (int f=1; f<=20; f++){
        	cout<<endl;
	for (int c=1; c<=10; c++)
		cout<<matr1[f][c]<<", "<<matr2[f][c]<<"     "; 
    }
    
    avances--;
    cout<<endl;
   
    system("cls");
}
    cout << "                       _  __   __     ___  _____         "  <<endl;
    cout << "                      |_|| |  | |    /   ||  ___|        "  <<endl;
    cout << "                       _ | |__| |   / /| || |___         "  <<endl;
    cout << "                      | ||  __  |  / ___ ||___  |        "  <<endl;
    cout << "                      | || |  | | / /  | | ___| |        "  <<endl;
    cout << "                      |_||_|  |_|/_/   |_||_____|        "  <<endl;
	cout << " 	 _____  _____  _____   _____   __  _____   ______  _  "  <<endl;
    cout << " 	|  _  \|  ___||  _  \ |  _  \ |  ||  _  \ |  __  || | "  <<endl;
    cout << "	| |_| || |__  | |_| | | | \  ||  || | \  || |  | || | "  <<endl;
    cout << " 	|  ___/|  __| |  _  / | |  | ||  || | |  || |  | ||_| "  <<endl;
    cout << " 	| |    | |___ | | \ \ | |_/  ||  || |_/  || |__| | _  "  <<endl;
    cout << " 	|_|    |_____||_|  \_\|_____/ |__||_____/ |______||_| "  <<endl;
    
	cout<<"\n"<<endl;
    cout<<"		¡Su puntaje final es: "<<puntos<<" puntos! "<<endl;
	cout<<"		     SUERTE PARA LA PROXIMA"<<endl;
	cout<<endl;
	
	system ("pause");

	return 0; 
}
