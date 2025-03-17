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

    cout<<"Menu: Mocha, Latte, or Espresso.\n"; //Menu for user to choose
    cin>>coffee;

    cout<<"To add one of three extra ingredients type: 1 for milk, 2 for sugar, or 3 for whipped cream.\n"; //User chooses ingredient options (only 1)
    cin>>user;

    if(user == 1){ //If conditions that determine the user's choice 1-3
        order=" with milk.";
    }else if(user==2){
        order=" with sugar.";
    }else if(user==3){
        order=" with whipped cream.";
    }else{
        order=" with no extra ingredients."; //If 1-3 is not chosen then they get this message with their coffee choice
    }

    cout<<coffee<<""<<order;
}