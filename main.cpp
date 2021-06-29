//
//  main.cpp
//  garage
//
//  Created by Max on 2021/6/27.
//  Copyright © 2021年 Max. All rights reserved.
//

#include <iostream>
#include "garage.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    garage g1;
    char ch;
    string car;
    
    while(1){
        cin >> ch;
        
        if(ch=='a'){
            cin >> car;
            g1.store(car);
        }
        else if(ch=='s'){
            cin >> car;
            g1.sell(car);
        }
        else if(ch=='c'){
            g1.displaycost();
        }
        else if(ch=='i'){
            g1.displayi();
        }
        else if(ch=='p'){
            g1.displayp();
        }
        else if(ch=='q'){
            cout << "Thank you for visiting XMing_Garage. Bye bye." << endl;
            return 0;
        }
    }
    
    return 0;
}
