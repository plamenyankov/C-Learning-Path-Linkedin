//
// Created by Plamen Yankov on 23.02.22.
//

#include <iostream>


#define HUNDRED 100
#define DEBUG
char arr[23] = "hello guys";
char arr2[] = "hello guys 2";

int main(){
    strcat(arr,arr2);
    for(auto i = 0; i < sizeof(arr); ++i){
        std::cout << arr[i] << std::endl;
    }
    return 0;
}