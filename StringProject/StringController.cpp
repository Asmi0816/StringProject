//
//  StringController.cpp
//  StringProject
//
//  Created by Smith, Arick on 2/2/17.
//  Copyright © 2017 Smith, Arick. All rights reserved.
//
#include <iostream>
#include <string>
#include "StringController.hpp"

using namespace std;
string jamesTown("The watter I love");
string secondString("The watter I hate");
string crystalizedHTwoO("Today it snowed");

void StringController :: start()
{
    cout << jamesTown.length() << endl;
    brackets();
    atMethod();
    emptyString();
    substringMethod();
}

void StringController :: brackets()
{
    for(int letter = 0; letter < jamesTown.length(); letter++)
    {
        cout << jamesTown[letter] << endl;
    }
}

void StringController :: atMethod()
{
    for(int letter = 0; letter < secondString.length(); letter++)
    {
        cout << secondString.at(letter) << endl;
    }
}

void StringController :: emptyString()
{
    if(secondString.length() != 0)
    {
        cout << secondString << " is not an empty string" << endl;
    }
    else
    {
        cout << "This is an empty string" << endl;
    }
}

void StringController:: substringMethod()
{
    string temp = crystalizedHTwoO.substr(2, 6);
    cout << temp << endl;
}

void StringController:: endMethod()
{
    string temp = crystalizedHTwoO.substr(2, 6);
    cout << temp << endl;
}
