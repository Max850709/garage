//
//  garage.hpp
//  garage
//
//  Created by Max on 2021/6/27.
//  Copyright © 2021年 Max. All rights reserved.
//

#ifndef garage_hpp
#define garage_hpp
#include <iostream>
using namespace std;

#include <stdio.h>
class garage{
public:
    garage();
    void store(string x);
    void sell(string x);
    void displayi();
    void displaycost();
    void displayp();
private:
    string Garage[10];
    int car;
    int sellprice;
    int sellprice1;
    int totalcost;
    int earn;
};


#endif /* garage_hpp */
