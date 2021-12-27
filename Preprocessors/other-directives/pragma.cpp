#include <iostream>

using namespace std;

#pragma startup func1
#pragma exit func2

void func1();
void func2();

void func1() {
    cout << "Inside func1() \n";
}

void func2() {
    cout << "Inside func2() \n";
}

int main() {
    void func1();
    void func2();
    cout << "Inside main() \n";
}

/**
 The #pragma startup directive specified a function that need to run before the program starts
 The #pragma exit directive specifies a function that need to run just before the program exits
 The #pragma warn -rvl directive is used to hide warning when a none void function does not return a value
 The #pragma warn -par directive hides warning resulting from unused function parameter
 The #pragma warn -rch directive hides warning resulting from unreachable code
 
 Note that GCC compilers do not support #pragma and will only ignore it

 To compile on using Microsoft Visual C++ Compiler
 1. Open Visual Studio Deveoper Command Prompt
 2. Navigate to this source code directory, and then

 > cl other-directives/pragma.cpp -o bin/pragma

 For this example MSVC gave the following warning:
   warning C4068: unknown pragma 'startup'
   warning C4068: unknown pragma 'exit'

  Output:
    Inside main()
 */
