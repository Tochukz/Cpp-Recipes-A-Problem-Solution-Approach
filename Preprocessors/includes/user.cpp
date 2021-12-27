#include <stdio.h>
#include <stdlib.h>

/** Prototypes declaration starts */

struct User;
struct User* creatr_user(int id);

/** Prototypr declaration ends */

struct User {
  int id;
  struct User* next;
};

struct User* creatr_user(int id) {
    struct User* user = (struct User*) malloc(sizeof(struct User));
    user->id = id;
    user->next = NULL;
}

/**
 
https://www.geeksforgeeks.org/dividing-a-large-file-into-separate-modules-in-c-c-java-and-python/#C_CPP
*/