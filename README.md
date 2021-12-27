# C++ Recipes (2015)
__By Bruce Sutherland__    
[Github Code](https://github.com/apress/cpp-recipes)   
## Chapter 12   
__Setting p a Berkeley Sockets Application on OS X__    

__Setting Up a Berkeley Sockets Application in Eclipse on Ubuntu__  

__Setting Up a Winsock2 Application on Windows__   
Windows require that you link against a library to provide socket support. To do this,
* right click on the project
* select properties to display the _Property Page_ dialog
* go to _Configuration Properties_ > _Linker_ > _Input_ > _Additional Dependencies_
* click on _Additional Dependencies_, click on the drop down beside it and click _<Edit...>_
* enter the `Ws2_32.lib` under the  _Additional Dependencies_ text box and click _OK_.

`Ws2_32.lib` is a static library that provides the Winsock API.

## Articles
#### Preprocessors  
Preprocessors are programs that process our source code before compilation. There are 4 main types of preprocessor directives:  
1. Macros
2. File Inclusion
3. Conditional Compilation
4. Other directives
[C/C++ Preprocessors](https://www.geeksforgeeks.org/cc-preprocessors/)
