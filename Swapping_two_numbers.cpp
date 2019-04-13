//
//  main.cpp
//  reverse
//
//  Created by Srikanth Adavalli on 4/12/19.
//  Copyright © 2019 Varshini Thatiparthi. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdio>
using namespace std;

int main(int argc, const char * argv[]) {

    int x = 0, y = 0, temp;
    cout << "Enter the values of x: ";
    cin >> x;
    cout << "Enter the values of y: ";
    cin >> y;
    //swaping two numbers
    temp = x;
    x = y;
    y = temp;
    // After Swaping
    cout << "After swapping x: " << x << " and y: " << y << endl;
    return 0;
}
