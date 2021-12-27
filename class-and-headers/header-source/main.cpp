#include<iostream>
#include "Date.h"

int main() {
    Date date {2021, 10, 12};
    std::cout << "Date: " << date.getDate() << std::endl;
    std::cout << "Year: " << date.getYear() << std::endl; 
}

/**
 * 
*/
