#pragma once

class people{
public:
    people(int customer_entered);
    int get_seats();
    int available_seats();

private:
    int total_seats = 50;
    int occupied_seats=0;
    bool no_more_space=false;
};