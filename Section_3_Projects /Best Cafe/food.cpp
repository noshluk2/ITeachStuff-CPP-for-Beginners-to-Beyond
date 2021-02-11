#include "food.h"
#include <iostream>

food::food(){
    std::cout<<"Cafe Menu"<<std::endl;
    std::cout<<"1 - Break Fast"<<std::endl;
    std::cout<<"2 - Launch "<<std::endl;
    std::cout<<"3 - Dinner"<<std::endl;
    std::cout<<"4 - Snacks"<<std::endl;
    std::cout<<"5 - Hot Drinks"<<std::endl;

}
food::food(int selection){
    switch (selection)
    {
    case 1:
        break_fast();
        std::cin>>food::second_selection;
        break;
    case 2:
        launch();
        std::cin>>food::second_selection;
        break;
    case 3:
        dinner();
        std::cin>>food::second_selection;
        break;
    case 4:
        snacks();
        std::cin>>food::second_selection;
        break;
    case 5:
        hot_drinks();
        std::cin>>food::second_selection;
        break;
    
    default:
        break;
    }

}

    void break_fast(){
        std::cout<< "1 - Fried Egg with paratha" <<std::endl;
        std::cout<< "2 - halwa Puri " <<std::endl;
    }
    void launch(){
        std::cout<< "1 - Biryani " <<std::endl;
        std::cout<< "2 - Chicken Qorma " <<std::endl;
    }
    void dinner(){
        std::cout<< "1 - Dumnba karahi " <<std::endl;
        std::cout<< "2 - Beef Karahi " <<std::endl;
    }
    void snacks(){
        std::cout<< "1 - Club Sandwich" <<std::endl;
        std::cout<< "2 - chicken Patie" <<std::endl;
    }
    void hot_drinks(){
        std::cout<< "1 - Chahye" <<std::endl;
        std::cout<< "2 - Kehwa " <<std::endl;
        
    }
