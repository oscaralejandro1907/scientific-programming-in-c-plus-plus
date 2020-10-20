//
//  09_RandomNumber_Game.cpp
//  ScientificProgramming
//
//  Created by Oscar Alejandro Hernández López on 17/09/20.
//  Copyright © 2020 Oscar Alejandro Hernández López. All rights reserved.
//

#include "09_RandomNumber_Game.hpp"

void randomNumber(){
    
    //Variables
    int rn, guess, counter=0;
    char option;
    
    do {
        cout<<"Let's guess the number? Press any key"; cin>>option;
    
        srand(time(NULL));  //Esta es la sintaxis para generar un numero aleatorio
        rn = 1 + rand()%(100); //Esto especifica los limites inferior y superior para generar el numero aleatorio, o sea de 1 a 100
    
    
        do {
            cout<<"Try one number between 0-100: "; cin>>guess;
            if (guess<rn) {
                cout<<"The number is greater than the random number. "<<endl;
            }
            
            else {
                cout<<"The number is smaller than the random number. "<<endl;
            }
            counter+=1;
        } while (rn!=guess);
        
        cout<<"\nMuy bien. Ha encontrado el numero!";
        cout<<"The total number of attempts was: "<<counter<<endl;
        cout<<"Desea jugar otra vez? Presione Y para seguir jugando "; cin>>option;
        
    } while (option=='y');
    
}
