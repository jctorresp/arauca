#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <conio.h>


using namespace std; 


int main() {
	
	double Ma[100][100],M2[100][100];
	int Black, Movi=0,Black2, Paso=30, Puntos=0;
	 
		srand(time(NULL));

	for (int i=1; i<=20;i++){
		for(int j=1 ; j<=10;j++)
		Ma[i][j]= rand() % 4 + 1;
	}
		for (int i=1; i<=20;i++){
		for(int j=1 ; j<=10;j++)
		M2[i][j]= rand()%4 + 1;
	}
	
		Black=rand() % 10 + 1;
		Black2= rand() % 20 + 1;
			Ma[Black2][Black]=0.0;
			M2[Black2][Black]=0.0;
				

	while (Paso!=0){
          
	cout<<endl;
	cout<<endl;
	cout<<"Fila uno         Fila dos"<<endl;
	cout<<"1. Triangulo		Amarillo"<<endl;
	cout<<"2. Cuadrado 		Azul"<<endl;
	cout<<"3. Estrella 		Rojo"<<endl;
	cout<<"4. Corazon  		Blanco"<<endl;
	cout<<endl;
	cout<<"3 puntos por bandera amigas de cualquier figura"<<endl;	
	cout<<"5 puntos por bandera amigas de la misma figura"<<endl;
	cout<<"10 puntos por bandera amigas de solo corazon"<<endl;		
	cout<<"Mismos puntajes pero negativos en caso de formar una bandera enemiga"<<endl;	
	cout<<endl;
	cout<<"Movimientos"<<endl; 
	cout<<"1 mueve hacia arriba"<<endl;
	cout<<"2 mueve hacia abajo"<<endl; 
	cout<<"3 mueve hacia la izquierda"<<endl;
	cout<<"4 mueve hacia la derecha"<<endl; 
	cout<<endl; 

			for (int i=1; i<=20;i++){
			for(int j=1 ; j<=10	;j++){		
				
				if (M2[i][j]==1 && M2[i+1][j]==2 && M2[i+2][j]==3 && Ma[i][j]==4 && Ma[i+1][j]==4 && Ma[i+2][j]==4){
					
						Puntos =Puntos+ 10;
						cout<<endl;
						cout<<"["<<i<<"]["<<j<<"] CORAZON--Amarillo"<<endl;
						cout<<"["<<i+1<<"]["<<j<<"] CORAZON--Azul"<<endl;
						cout<<"["<<i+2<<"]["<<j<<"] CORAZON-- Rojo"<<endl;
						cout<<"Has encontrado la bandera de Ecuador"<<endl;
						cout<<"Has ganado 10 Puntos, en total tienes: "<< Puntos << " puntos "<<endl;
						
						}	
					else if (M2[i][j]==4 && M2[i+1][j]==2 && M2[i+2][j]==3 && Ma[i][j]==4 && Ma[i+1][j]==4 && Ma[i+2][j]==4)
					{
						
						Puntos =Puntos-10;
						cout<<endl;
						cout<<"["<<i<<"]["<<j<<"] CORAZON--Blanco"<<endl;
						cout<<"["<<i+1<<"]["<<j<<"] CORAZON--Azul"<<endl;
						cout<<"["<<i+2<<"]["<<j<<"] CORAZON--Rojo"<<endl;
						cout<<"Has encontrado la bandera de Rep. Checa"<<endl;
						cout<<" Has perdido 10 puntos, en total tienes: "<< Puntos << " puntos "<<endl;
					}
						else if ((M2[i][j]==4 && M2[i+1][j]==2 && M2[i+2][j]==3 && Ma[i][j]==3 && Ma[i+1][j]==3 && Ma[+2][j]==3)|| (M2[i][j]==4 && M2[i+1][j]==2 && M2[i+2][j]==3 && Ma[i][j]==2 && Ma[i+1][j]==2 && Ma[i+2][j]==2) || (M2[i][j]==4 && M2[i+1][j]==2 && M2[i+2][j]==3 && Ma[i][j]==1 && Ma[i+1][j]==1 && Ma[i+2][j]==1))
						{
						
						Puntos =Puntos-5;
						cout<<endl;
						cout<<"["<<i<<"]["<<j<<"] FIGURA--Blanco"<<endl;
						cout<<"["<<i+1<<"]["<<j<<"] FIGURA--Azul"<<endl;
						cout<<"["<<i+2<<"]["<<j<<"] FIGURA--Rojo"<<endl;
						cout<<"Has encontrado la bandera de Rep. Checa"<<endl;
						cout<<" Has perdido 5 puntos,en total te quedan: "<< Puntos << " puntos "<<endl;
						}
								else if ((M2[i][j]==1 && M2[i+1][j]==2 && M2[i+2][j]==3 && Ma[i][j]==3 && Ma[i+1][j]==3 && Ma[i+2][j]==3)|| (M2[i][j]==1 && M2[i+1][j]==2 && M2[i+2][j]==3 && Ma[i][j]==2 && Ma[i+1][j]==2 && Ma[i+2][j]==2) || (M2[i][j]==1 && M2[i+1][j]==2 && M2[i+2][j]==3 && Ma[i][j]==1 && Ma[i+1][j]==1 && Ma[i+2][j]==1))
								{
						
						Puntos =Puntos+ 5;
						cout<<endl;
						cout<<"["<<i<<"]["<<j<<"]  FIGURA--Amarillo"<<endl;
						cout<<"["<<i+1<<"]["<<j<<"] FIGURA-- Azul"<<endl;
						cout<<"["<<i+2<<"]["<<j<<"] FIGURA--Rojo"<<endl;
						cout<<"Has encontrado la bandera de Ecuador"<<endl;
						cout<<"Has ganado 5 puntos, en total tienes: "<< Puntos << " puntos "<<endl;
								}
									else if (M2[i][j]==1 && M2[i+1][j]==2 && M2[i+2][j]==3){
										
						Puntos =Puntos+ 3;
						cout<<endl;
						cout<<"["<<i<<"]["<<j<<"] Amarillo"<<endl;
						cout<<"["<<i+1<<"]["<<j<<"] Azul"<<endl;
						cout<<"["<<i+2<<"]["<<j<<"] Rojo"<<endl;
						cout<<"Has encontrado la bandera de Ecuador"<<endl;
						cout<<" Has ganado 3 puntos, en total tienes: "<< Puntos << " puntos "<<endl;
						
						Ma[i][j]=9;
						M2[i][j]=9;
							Ma[i+1][j]=9;
					    	M2[i+1][j]=9;
					      		Ma[i+2][j]=9;
					         	M2[i+2][j]=9;
						
									}
										else if (M2[i][j]==4 && M2[i+1][j]==2 && M2[i+2][j]==3){
										
						Puntos =Puntos-3;
						cout<<endl;
						cout<<"["<<i<<"]["<<j<<"] Blanco"<<endl;
						cout<<"["<<i+1<<"]["<<j<<"] Azul"<<endl;
						cout<<"["<<i+2<<"]["<<j<<"] Rojo"<<endl;
						cout<<"Has encontrado la bandera de Rep. Checa"<<endl;
						cout<<"Has perdido 3 puntos, en total te quedan: "<< Puntos << " puntos "<<endl;
						
							Ma[i][j]=9;
					    	M2[i][j]=9;
					      		Ma[i+1][j]=9;
					        	M2[i+1][j]=9;
					         		Ma[i+2][j]=9;
					            	M2[i+2][j]=9;
									}
		}	
	}
			
      	for (int i=1; i<=20;i++){
		for(int j=1 ; j<=10	;j++)
        {
                      if (Ma[i][j]==9){
                                        
                                           
             }
                                                           
                
                
                
                }
	
    }
	
	
	
	
			
      	for (int i=1; i<=20;i++){
        	cout<<endl;
		for(int j=1 ; j<=10	;j++)
		cout<<Ma[i][j]<<", "<<M2[i][j]<<"     "  ; 	
    }
     cout<<endl;
     cout<<endl;
     
   cout<<"Te quedan "<<Paso<<" pasos por mover";
   
   cout<<endl;
    cout<<endl;
    cout<<"En total tienes "<<Puntos<<" puntos";
    cout<<endl;
    cout<<"Digite movimiento";
    cin>>Movi;
    
    
    switch (Movi)
  {
           case 1:
                Ma[Black2][Black]=    Ma[Black2-1][Black];
               	M2[Black2][Black]=	M2[Black2-1][Black];
               	
                Ma[Black2-1][Black]=0;
               	M2[Black2-1][Black]=0; 
                Black2=Black2-1;
                break;
             
                
                  case 2:
                        Ma[Black2][Black]=    Ma[Black2+1][Black];
                       	M2[Black2][Black]=	M2[Black2+1][Black];
               	
                            Ma[Black2+1][Black]=0;
                           	M2[Black2+1][Black]=0; 
                            Black2=Black2+1;
                            break;
                     
                      case 3:
                                  Ma[Black2][Black]=  Ma[Black2][Black-1];
                                  M2[Black2][Black]=	M2[Black2][Black-1];
               	
                                    Ma[Black2][Black-1]=0;
                                    M2[Black2][Black-1]=0; 
                                    Black=Black-1;
                                    break;
                           
                           case 4:
                                Ma[Black2][Black]=    Ma[Black2][Black+1];
                             	M2[Black2][Black]=	M2[Black2][Black+1];
               	
                                    Ma[Black2][Black+1]=0;
                                   	M2[Black2][Black+1]=0;
                                    Black=Black+1;
                                    break;
                                default: 
                                         cout<<"Incorrecto el valor";
                                         printf("gast% un movimiento",162);
                                         
                                         
                                         
}
		cout<<"Tiene "<< Puntos <<" puntos"<<endl;
    
    
    
    for (int i=1; i<=20;i++){
        	cout<<endl;
		for(int j=1 ; j<=10	;j++)
		cout<<Ma[i][j]<<", "<<M2[i][j]<<"     "  ; 
    }
    
   Paso--;
   cout<<endl;
   
   
   	system("cls");
}

 cout << " GAME OVER "    << endl;
    
    
cout<<"Puntaje final "<<Puntos<<" pts. "<<endl;



	system ("pause");

	return 0; 
}
