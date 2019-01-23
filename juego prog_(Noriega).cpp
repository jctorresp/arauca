#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <conio.h>


using namespace std; 


int main() {
	//El juego funciona solo con numeros
	
	double matriz[100][100],matriz1[100][100];
	int blanco,blanco1, puntos=0, mov=0, pasos=10;
	 
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
		blanco1= rand() % 20 + 1;
			matriz[blanco1][blanco]=0.0;
			matriz1[blanco1][blanco]=0.0;
				
	/*	for (int i=1; i<=20;i++){
			cout<<endl;
		for(int j=1 ; j<=10	;j++)
		cout<<matriz[i][j]<<", "<<matriz1[i][j]<<"     "  ; las filas son i y las columnas son j
	}*/

	while (pasos!=0){
          
	
	cout<<endl;
	cout<<"Primera fila     	|	  Segunda fila"<<endl;
	cout<<"1. para triangulo	|	1. para amarillo"<<endl;
	cout<<"2. para cuadrado 	|	2. para azul"<<endl;
	cout<<"3. para estrella 	|	3. para rojo"<<endl;
	cout<<"4. para corazon  	|	4. para blanco"<<endl;
	cout<<endl;
	cout<<"3 puntos por bandera amigas de cualquier figura"<<endl;	
	cout<<"5 puntos por bandera amigas de la misma figura"<<endl;
	cout<<"10 puntos por bandera amigas de solo corazon"<<endl;		
	cout<<"Mismos puntajes pero en negativo en caso de formar una bandera enemiga"<<endl;	
	cout<<endl;
	cout<<"Movimientos"<<endl; 
	cout<<"Con 1 mueve hacia arriba"<<endl;
	cout<<"Con 2 mueve hacia abajo"<<endl; 
	cout<<"Con 3 mueve hacia la izquierda"<<endl;
	cout<<"Con 4 mueve hacia la derecha"<<endl; 
	cout<<endl; 

			for (int i=1; i<=20;i++){
			for(int j=1 ; j<=10	;j++){		
				
				if (matriz1[i][j]==1 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3 && matriz[i][j]==4 && matriz[i+1][j]==4 && matriz[i+2][j]==4){
					
						puntos =puntos+ 10;
						cout<<endl;
						cout<<"["<<i<<"]["<<j<<"] CORAZON--Amarillo"<<endl;
						cout<<"["<<i+1<<"]["<<j<<"] CORAZON--Azul"<<endl;
						cout<<"["<<i+2<<"]["<<j<<"] CORAZON-- Rojo"<<endl;
						cout<<"Bandera de Colombia Encontrada"<<endl;
						cout<<"gano 10 puntos tiene en total: "<< puntos << " puntos "<<endl;
						
						}	
					else if (matriz1[i][j]==4 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3 && matriz[i][j]==4 && matriz[i+1][j]==4 && matriz[i+2][j]==4)
					{
						
						puntos =puntos-10;
						cout<<endl;
						cout<<"["<<i<<"]["<<j<<"] CORAZON--Blanco"<<endl;
						cout<<"["<<i+1<<"]["<<j<<"] CORAZON--Azul"<<endl;
						cout<<"["<<i+2<<"]["<<j<<"] CORAZON--Rojo"<<endl;
						cout<<"Bandera de Rusia Encontrada"<<endl;
						cout<<" perdio 10 puntos tiene en total: "<< puntos << " puntos "<<endl;
						
					}
						else if ((matriz1[i][j]==4 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3 && matriz[i][j]==3 && matriz[i+1][j]==3 && matriz[i+2][j]==3)|| (matriz1[i][j]==4 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3 && matriz[i][j]==2 && matriz[i+1][j]==2 && matriz[i+2][j]==2) || (matriz1[i][j]==4 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3 && matriz[i][j]==1 && matriz[i+1][j]==1 && matriz[i+2][j]==1))
						{
						
						puntos =puntos-5;
						cout<<endl;
						cout<<"["<<i<<"]["<<j<<"] FIGURA--Blanco"<<endl;
						cout<<"["<<i+1<<"]["<<j<<"] FIGURA--Azul"<<endl;
						cout<<"["<<i+2<<"]["<<j<<"] FIGURA--Rojo"<<endl;
						cout<<"Bandera de Rusia Encontrada"<<endl;
						cout<<" perdio 5 puntos tiene en total: "<< puntos << " puntos "<<endl;
						}
								else if ((matriz1[i][j]==1 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3 && matriz[i][j]==3 && matriz[i+1][j]==3 && matriz[i+2][j]==3)|| (matriz1[i][j]==1 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3 && matriz[i][j]==2 && matriz[i+1][j]==2 && matriz[i+2][j]==2) || (matriz1[i][j]==1 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3 && matriz[i][j]==1 && matriz[i+1][j]==1 && matriz[i+2][j]==1))
								{
						
						puntos =puntos+ 5;
						cout<<endl;
						cout<<"["<<i<<"]["<<j<<"]  FIGURA--Amarillo"<<endl;
						cout<<"["<<i+1<<"]["<<j<<"] FIGURA-- Azul"<<endl;
						cout<<"["<<i+2<<"]["<<j<<"] FIGURA--Rojo"<<endl;
						cout<<"Bandera de Colombia Encontrada"<<endl;
						cout<<" gano 5 puntos tiene en total: "<< puntos << " puntos "<<endl;
								}
									else if (matriz1[i][j]==1 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3){
										
						puntos =puntos+ 3;
						cout<<endl;
						cout<<"["<<i<<"]["<<j<<"] Amarillo"<<endl;
						cout<<"["<<i+1<<"]["<<j<<"] Azul"<<endl;
						cout<<"["<<i+2<<"]["<<j<<"] Rojo"<<endl;
						cout<<"Bandera de Colombia Encontrada"<<endl;
						cout<<" gano 3 puntos tiene en total: "<< puntos << " puntos "<<endl;
						
						matriz[i][j]=9;
						matriz1[i][j]=9;
							matriz[i+1][j]=9;
					    	matriz1[i+1][j]=9;
					      		matriz[i+2][j]=9;
					         	matriz1[i+2][j]=9;
						
									}
										else if (matriz1[i][j]==4 && matriz1[i+1][j]==2 && matriz1[i+2][j]==3){
										
						puntos =puntos-3;
						cout<<endl;
						cout<<"["<<i<<"]["<<j<<"] Blanco"<<endl;
						cout<<"["<<i+1<<"]["<<j<<"] Azul"<<endl;
						cout<<"["<<i+2<<"]["<<j<<"] Rojo"<<endl;
						cout<<"Bandera de Rusia Encontrada"<<endl;
						cout<<" perdio 3 puntos tiene en total: "<< puntos << " puntos "<<endl;
						
							matriz[i][j]=9;
					    	matriz1[i][j]=9;
					      		matriz[i+1][j]=9;
					        	matriz1[i+1][j]=9;
					         		matriz[i+2][j]=9;
					            	matriz1[i+2][j]=9;
									}
		}	
	}
			
      	for (int i=1; i<=20;i++){
		for(int j=1 ; j<=10	;j++)
        {
                      if (matriz[i][j]==9){
                                        
                                           
             }
                                                           
                
                
                
                }
	
    }
	
	
	
	
			
      	for (int i=1; i<=20;i++){
        	cout<<endl;
		for(int j=1 ; j<=10	;j++)
		cout<<matriz[i][j]<<", "<<matriz1[i][j]<<"     "  ; /* las filas son i y las columnas son j*/	
    }
     cout<<endl;
     cout<<endl;
    
   cout<<"Le quedan "<<pasos<<" movimientos por jugar";
   
   cout<<endl;
    cout<<endl;
    cout<<"USTED TIENE EN TOTAL "<<puntos<<" puntos";
    cout<<endl;
    cout<<"ingrese movimiento ";
    cin>>mov;

		
    
    
    switch (mov)
  {
           case 1:
                matriz[blanco1][blanco]=    matriz[blanco1-1][blanco];
               	matriz1[blanco1][blanco]=	matriz1[blanco1-1][blanco];
               	
                matriz[blanco1-1][blanco]=0;
               	matriz1[blanco1-1][blanco]=0; //no hace el movimiento hacia arriba
                blanco1=blanco1-1;
             
                
                  case 2:
                        matriz[blanco1][blanco]=    matriz[blanco1+1][blanco];
                       	matriz1[blanco1][blanco]=	matriz1[blanco1+1][blanco];
               	
                            matriz[blanco1+1][blanco]=0;
                           	matriz1[blanco1+1][blanco]=0; 
                            blanco1=blanco1+1;
                     
                      case 3:
                                  matriz[blanco1][blanco]=  matriz[blanco1][blanco-1];
                                  matriz1[blanco1][blanco]=	matriz1[blanco1][blanco-1];
               	
                                    matriz[blanco1][blanco-1]=0;
                                    matriz1[blanco1][blanco-1]=0; //no hace el movimiento hacia izquierda
                                    blanco=blanco-1;
                           
                           case 4:
                                matriz[blanco1][blanco]=    matriz[blanco1][blanco+1];
                             	matriz1[blanco1][blanco]=	matriz1[blanco1][blanco+1];
               	
                                    matriz[blanco1][blanco+1]=0;
                                   	matriz1[blanco1][blanco+1]=0;
                                    blanco=blanco+1;
                                default: 
                                         cout<<"ingreso un valor incorrecto";
                                         printf("gast% un movimiento",162);
                                         
                                         
                                         
}
		cout<<"usted  tiene "<< puntos <<" puntos"<<endl;
    
    
    
    for (int i=1; i<=20;i++){
        	cout<<endl;
		for(int j=1 ; j<=10	;j++)
		cout<<matriz[i][j]<<", "<<matriz1[i][j]<<"     "  ; /* las filas son i y las columnas son j*/	
    }
    
   pasos--;
   cout<<endl;
   
   
   	system("cls"); //borrar la pantalla
}

 cout << " El juego ha terminado"    << endl;
    
    
cout<<"La puntuacion es de "<<puntos<<" puntos "<<endl;



	system ("pause");

	return 0; 
}
