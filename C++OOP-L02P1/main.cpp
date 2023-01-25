//
//  main.cpp
//  C++OOP-L02P1
//
//  Created by Tadeusz Potoniec on 25/01/2023.
//  Based on https://www.youtube.com/playlist?list=PLOYHgt8dIdozvOVheSRb_qPVU-4ZJA7uB


#include <iostream>
#include "question.hpp"

using namespace std;


int main() {

    Question p[5];
    int suma=0;
    for(int i=0; i<=4; i++)
    {
       p[i].no_question=i+1;
       p[i].load();
       p[i].ask();
       p[i].verify();
       suma+=p[i].point;
    }

    cout<<"QUIZ END! POINTS = "<<suma<<endl;


    return 0;
}
