#include "ExampleFile.h"

int main(){
    ExampleStruct someStruct = {};
    someStruct.otherData = exampleFunction('a');
    someStruct.someData = CONSTANT;
    return 0;
}

char exampleFunction(char data){
    return data + 1;
}