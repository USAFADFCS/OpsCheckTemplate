//
// Created by jamesmaher on 12/15/20.
#include "HelloWorld.h"
#include <assert.h>
#include <stdlib.h>
#include <assert.h>

int main (int argc, char *argv[]){
    char* newString = HelloWorldFunc();
    char* checkString = malloc(sizeof("Hello World!"));
    checkString = newString;
    //checkString = "Oops";
    assert(checkString == newString && "You have an error in how you return the string from HelloWorldFunc to the main program.");
}
//Simple
//
