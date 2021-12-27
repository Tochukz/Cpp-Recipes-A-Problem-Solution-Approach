#include <iostream>

// (1)
#define LIMIT 5

// (2)
#define AREA(l, b)(l * b)

int main() {
  for (int i = 0; i < LIMIT; i++) {
      std::cout << i << "\n";
  }

  int len = 10, brt = 5, area;
  area  = AREA(len, brt);
  std::cout <<"Area of rectangle is : " << area;
  
  return 0;
}

/**
 Macro are a piece of code in a program which is given some name. 
 Whenever this name is encountered by the compiler the compiler replaces the name with the actual peice of code.
 The #define directive is used to define a macro

 1) A simple macro that stores a constant 
 2) A micro that accept two arguments 

 Output:  
    0
    1
    2
    3
    4
    Area of rectangle is : 50
*/