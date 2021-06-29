//
//  garage.cpp
//  garage
//
//  Created by Max on 2021/6/27.
//  Copyright © 2021年 Max. All rights reserved.
//

#include "garage.hpp"
#include <iostream>
using namespace std;

garage::garage(){
    car=0;
    sellprice=0;
    sellprice1=0;
    totalcost=0;
    earn=0;
}

void garage::store(string x){
    if(car>9){
        cout << "Garage FULL!" << endl << "Car not stored!" << endl;
        return;
    }
    if(x=="BMW"){
        Garage[car]=x;
        totalcost+=8000;
        sellprice1+=20000;
    }
    else if(x=="Volkswagen"){
        Garage[car]=x;
        totalcost+=7000;
        sellprice1+=18000;
    }
    else if(x=="Ferrari"){
        Garage[car]=x;
        totalcost+=12000;
        sellprice1+=35000;
    }
    else if(x=="Proton"){
        Garage[car]=x;
        totalcost+=4000;
        sellprice1+=50000;
    }
    else if(x=="Audi"){
        Garage[car]=x;
        totalcost+=10000;
        sellprice1+=30000;
    }
    else if(x=="Lamborghini"){
        Garage[car]=x;
        totalcost+=15000;
        sellprice1+=40000;
    }
    cout << "Store in a car." << endl << "Type: " << x << endl << "number car in garage: " << car+1 << endl;
    car+=1;
}

void garage::sell(string x){
    for(int i=0;i<car;i++){
        if(x==Garage[i]){
            if(x=="BMW"){
                cout << "You sell a car." << endl << "Type: " << x << endl << "Sell price: "<< "20000" << endl << "number car left in garage: " << car-1 << endl;
                sellprice+=20000;
                sellprice1-=20000;
                car-=1;
                break;
            }
            else if(x=="Volkswagen"){
                cout << "You sell a car." << endl << "Type: " << x << endl << "Sell price: "<< 18000 << endl << "number car left in garage: " << car-1 << endl;
                sellprice+=18000;
                sellprice1-=18000;
                car-=1;
                break;
            }
            else if(x=="Ferrari"){
                cout << "You sell a car." << endl << "Type: " << x << endl << "Sell price: "<< 35000 << endl << "number car left in garage: " << car-1 << endl;
                sellprice+=35000;
                sellprice1-=35000;
                car-=1;
                break;
            }
            else if(x=="Proton"){
                cout << "You sell a car." << endl << "Type: " << x << endl << "Sell price: "<< 50000 << endl << "number car left in garage: " << car-1 << endl;
                sellprice+=50000;
                sellprice1-=50000;
                car-=1;
                break;
            }
            else if(x=="Audi"){
                cout << "You sell a car." << endl << "Type: " << x << endl << "Sell price: "<< 30000 << endl << "number car left in garage: " << car-1 << endl;
                sellprice+=30000;
                sellprice1-=30000;
                car-=1;
                break;
            }
            else if(x=="Lamborghini"){
                cout << "You sell a car." << endl << "Type: " << x << endl << "Sell price: "<< 40000 << endl << "number car left in garage: " << car-1 << endl;
                sellprice+=40000;
                sellprice1-=40000;
                car-=1;
                break;
            }
            
        }
        else{
            if(i==car-1){
                cout << "Car not found!" << endl;
            }
            
        }
    }
}
void garage::displayi(){
    cout << "Sell price= " << sellprice1 << endl;
}
void garage::displaycost(){
    cout << "Total cost= " << totalcost << endl;
}
void garage::displayp(){
    cout << "Profit= " << sellprice-totalcost << endl;
}
