#include <iostream>

#define NAME "chucks"
int main() {
  
  #undef NAME

  #ifdef NAME 
    std::cout << "The name is " << NAME;
  #else 
    std::cout << "No name supplied ";
  #endif
}

/**
  The #undef directive is used to undefine an existing macro

  Output: 
    No name supplied 
*/