//Created by Owen Martin
//3/16
//Description: A simple coffee menu for a user to choose from, and create their order

#include <iostream>

using namespace std;
int main(){

    string order = "";
    string coffee = "";
    int milk = 1;
    int sugar = 2;
    int whippedcream = 3;
    int user = 0;

    cout<<"Menu: Mocha, Latte, or Espresso.\n";
    cin>>coffee;

    cout<<"To add one of three extra ingredients type: 1 for milk, 2 for sugar, or 3 for whipped cream.\n";
    cin>>user;

    if(user == 1){
        order=" with milk.";
    }else if(user==2){
        order=" with sugar.";
    }else if(user==3){
        order=" with whipped cream.";
    }else{
        order=".";
    }

    cout<<coffee<<""<<order;
}