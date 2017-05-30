//
//  main.cpp
//  Review3
//
//  Created by Mauricio Matsubara on 30/05/17.
//  Copyright © 2017 Mauricio Matsubara. All rights reserved.
//

/* 
 
 1. Create two float variables
 Assign them values (you can choose)
 If the first one is greater than the second one, print "The first is higher than the second", else print "The first is lower than the second"
 
 2. Instead of "first" and "second", print their values. 
 
 */

#include <iostream>

int main(int argc, const char * argv[]) {
    float a;
    float b;
    a = 10.5;
    b = 8.5;
    if (a > b) {
        std::cout << a << " is higher than " << b<<"\n";
    }
    else {
        std::cout << a << " is lower than " << b<<"\n";
    }
    return 0;
}
