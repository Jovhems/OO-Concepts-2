//
//  main.cpp
//  OO Concepts 2
//
//  Created by Jovhems Jean-Baptiste on 10/11/24.
//


#include "Athlete.h"  
#include <iostream>
using namespace std;

int main() {
    // Create an Athlete object
    Athlete sport(72, 140, 'M');
    cout << "Athlete: " << sport.getHeight() << " "
         << sport.getWeight() << " "
         << sport.getGender() << endl;
    
    // Tennis objects
    Tennis martina;
    martina.setServeSpeed(100);
    martina.setGender('F');
    
    Tennis bjorn(150, false);
    bjorn.setGender('M');
    
    if (martina.getGender() == 'F')
        cout << "Martina serve speed: " << martina.getServeSpeed() << endl;
    
    // Volleyball objects
    Volleyball kerri;
    kerri.setGender('F');
    kerri.setPosition("Opposite Hitter");
    
    Volleyball giba("Outside Hitter", 23.2);
    giba.setGender('M');
    
    if (kerri.getGender() == 'F')
        cout << "Kerri is an " << kerri.getPosition() << endl;

    return 0;
}
