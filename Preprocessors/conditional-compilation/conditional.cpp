#include <iostream>

#define NAME "Chucks"

int main() {
  #ifdef NAME
    std::cout << "The name is " << NAME;
  #else
    std::cout << "No name supplied!";
  #endif

  return 0;
}

/**
 Syntax: 
   #ifdef macro_name 
     statement1 
     statement2 
   #endif
   
 Output:
   The name is Chucks
 */