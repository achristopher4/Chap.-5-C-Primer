//
//  main.cpp
//  5.4 to 5.6
//
//  Created by Alex Christopher on 6/16/20.
//  Copyright © 2020 Alex Christopher. All rights reserved.
//


#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstddef>
#include "string.h"
#include <stdexcept>
#include <exception>


using std::cin; using std::cout; using std::endl;
using std::string; using std::vector; using std::begin; using std::end;

int main() {
    // 5.4 Iterative Statements
        // check notes
    
    // 5.4.1 While Statement
    vector<int> v;
    int i;
    // read until end-of-file or other input failure
//    while (cin >> i){
//        v.push_back(i);
//    }
//    // find the first negative element
//    auto beg = v.begin();
//    while (beg != v.end() && *beg >= 0){
//        ++beg;
//    }
//    if (beg == v.end()){
//        // know that all elements in v are greater than or equal to zero
//    }
    
    // 5.4.2 Traditional for Statement
        // check notes
    
    // 5.4.3 Range for Statement
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // range varible must be a reference so we can write to the elements
    for (auto &r : v) // for each element in v
        r *= 2;       // double the value of each element in v
    
    // 5.4.4 do while Statement
    // repeatedly ask the user for a pair of mumbers to sum
    string rsp; // used in the condition; can't be defined inside the do
    do {
        cout << "Please enter two values: ";
        int val1 = 0, val2 = 0;
        cin >> val1 >> val2;
        cout << "The sum of " << val1 << " and " << val2
             << " = " << val1 + val2 << "\n\n"
             << "More? Enter yes or no: ";
        cin >> rsp;
    } while (!rsp.empty() && rsp[0] != 'n');
    
    // 5.5 Jump Statements
        // break, continue, and goto
    
    // 5.5.1 break Statement
    string buf;
    while (cin >> buf && !buf.empty()) {
        switch(buf[0]){
            case '-':
                // process up to the first blank
                for (auto it = buf.begin() + 1; it != buf.end(); ++it){
                    if (*it == ' ')
                        break; // #1 leaves the for loop
                    // ... continue if not true
                }
                // break #1 transfer control here
                // remaining '-' processing:
                break; // #2 leaves hte switch statement
            case '+':
                //...
                break;
        } // end of switch
        // end of switch: break #2 transfer control here
    } // end of while
    
    // 5.5.2 The continue Statement
    string buf2;
    while (cin >> buf && !buf.empty()){
        if (buf[0] != '_')
            continue; // get another input
        // if inputs starts with an underscore; process buf... otherwise dont
    }
    
    // 5.5.3 THe goto Statement
        // check notes
    
    // 5.6 try Blocks and Exception Handling
        // check notes
    
    // 5.6.1 A throw Expression
    int item1, item2;
    cin >> item1 >> item2;
    if(item1 != item2){
        throw std::runtime_error("Data must refer to same number");
    }
    cout << item1 + item2 << endl;
    
    // 5.6.2 The try Block
    while (cin >> item1 >> item2){
        try {
            // execute code that will add the two Sales_items'
            // if the addition fails, the code throws a runtime_error exception
            if(item1 != item2){
                throw std::runtime_error("Data must refer to same number");
            }
            cout << item1 + item2 << endl;
        } catch (std::runtime_error err) {
            // remind the user that the ISBNs must match and prompt for another pair
            cout << err.what() << "\nTry agian? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break; // break out of while loop
        }
    }
    
    // 5.6.3 Standard Exceptions
    
    
    
    
    
    return 0;
}
