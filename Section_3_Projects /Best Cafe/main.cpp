#include "welcome.h"
#include "seating.h"
#include "food.h"
#include "order.h"
#include<iostream>
int number_of_people,food_from_menu_1,food_from_menu_2;
std::string menu_array[]={"Fried Egg with paratha","halwa Puri","Biryani","Chicken Qorma",
    "Dumnba karahi","Beef Karahi ","Club Sandwich","chicken Patie"};

int main(){
    welcome customer_enter;
    welcome enter(enter.get_time());
    std::cout<<"\nHow many people Sir ?\n"<<std::endl;
    std::cin>>number_of_people;
    seating customer(number_of_people);
    
    if(customer.no_more_space){
    std::cout<<"Sorry house is Full ! kindly check after sometime !"<<std::endl;
    }else{
        std::cout<<"Have a Seat there "<<std::endl;
    }

    food menu;
    for(int i =1;i<11;i++){
        std::cout<<i<<" - "<<menu_array[i]<<std::endl;
    }
    std::cout<<"Kindly wait for the food to be served "<<std::endl;
    


    return 0;
}