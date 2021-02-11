#include "people.h"



people::people(int customer_entered){
    if(customer_entered > available_seats()){
        no_more_space=true;
    }else occupied_seats= occupied_seats + customer_entered;
    
}

int people::get_seats(){
    return total_seats;
}
int people::available_seats(){
    return occupied_seats;
}
