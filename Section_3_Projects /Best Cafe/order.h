#pragma once

class order{
public:
    order();
    int get_order_array();
    void set_order_array(int array[]);

private:
    int order_id;
    bool first_selection;
    bool second_selection;
    int order_array[];
    
};