//
//  main.cpp
//  5.1 to 5.3
//
//  Created by Alex Christopher on 6/15/20.
//  Copyright © 2020 Alex Christopher. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstddef>
#include "string.h"

using std::cin; using std::cout; using std::endl;
using std::string; using std::vector; using std::begin; using std::end;

int main() {
    // 5.1 Simple Statements
    int ival;
    ival + 5;
    
    // Null Statement
    char sought = 's';
    char s;
    // read until hit end-of-file or find an input equal to sought
    //while(cin >> s && s != sought){
    //    ; // null statement
    //}
    
    // Missing or Extraneous Semicolons
        // check notes
    
    // Compound Statements (Blocks)
        // check notes
    
    // 5.2 Statement Scope
    vector<int> v(5);
    auto sz = v.size();
    for (auto i = 0; i < sz; ++i){
        v[i] = i;
    }
    
    auto beg = v.begin();
    while (beg != v.end() && *beg >= 0){
        ++beg;
    }
    //if (beg == v.end())
       // cout << beg << endl;
    
    //5.3.1 The if Statement
        // need to add library to mac
//    const vector<string> scores = {'F', 'D', 'C', 'B', 'A', 'A++'};
//    // IF grade is less than 60 F, otherwise compute subscript
//    int grade;
//    cin >> grade;
//    string lettergrade;
//    if (grade < 60)
//        lettergrade = scores[0];
//    else {
//        lettergrade = scores[(grade - 50)/10];
//        if (grade != 100)   // add plus/minus to lettergrade if not alreay A++
//            if (grade % 10 > 7){
//                lettergrade += '+'; // grade ending in 8 or 9 get +
//            } else if (grade % 10 < 3){
//                lettergrade += '-'; // grade ending in 0,1,2 get -
//            }
//    }
//    cout << lettergrade << endl;
    //nested if statement ^^^
    
    // 5.3.2 The switch Statement
    // initialize counters for each vowel
    unsigned char aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while (cin >> ch) {
        // if ch is a vowel, increment the appropriate counter
        switch (ch) {
            case 'a':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'u':
                ++uCnt;
                break;
        }
    }
    // print results
    cout << "Number of vowel a: \t" << aCnt << '\n'
        << "Number of vowel e: \t" << eCnt << '\n'
        << "Number of vowel i: \t" << iCnt << '\n'
        << "Number of vowel o: \t" << oCnt << '\n'
    << "Number of vowel u: \t" << uCnt << endl;
    // count the number of vowels in a given statement
    unsigned vowelCnt = 0;
    switch (ch) {
        // any occurance of a, e, i, o, or u increment vowelCnt
        case 'a': case 'e': case 'i': case 'o': case 'u':
            ++vowelCnt;
            break;
    }
    // deafult label
    unsigned otherCnt = 0;
    switch (ch) {
           // any occurance of a, e, i, o, or u increment vowelCnt
           case 'a': case 'e': case 'i': case 'o': case 'u':
               ++vowelCnt;
               break;
        default:
            ++otherCnt;
            break;
       }
    
    
    return 0;
}
