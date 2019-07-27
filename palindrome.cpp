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

// reverse of string and validating is palindrome or not
int main(int argc, const char * argv[]) {

    char char_string[] = "bob";
    char dup_string[strlen(char_string)];

    for(long i = strlen(char_string) - 1; i >= 0; i--) {
        dup_string[strlen(char_string) - i -1] = char_string[i];
    }

    bool flag = true;
    for(long i = 0; i < strlen(char_string); i++) {
        if(char_string[i] == dup_string[i]) {
        } else {
            flag = false;
        }
    }

    cout << "is palindrome : ";
    if (flag) {
        printf("true");
    } else {
        printf("false");
    }

    printf("\n");
    return 0;
}
