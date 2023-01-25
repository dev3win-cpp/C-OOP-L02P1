//
//  question.cpp
//  C++OOP-L02P1
//
//  Created by Tadeusz Potoniec on 25/01/2023.
//
#include <iostream>
#include "question.hpp"
#include <fstream>
#include <cstdlib>
#include <dirent.h>

using namespace std;
void Question::load()
{
    fstream file;
    file.open("quiz.txt",ios::in); /* in xcode on mac you have to choose product->scheme->edit scheme and then choose run on the left side and then options and select use custom working directory and choose the folder where the c++ file is saved */
    if(file.good()==false)
    {
        cout<<"Load file error"<<endl;
        exit(0);
    }
    int no_line=(no_question-1)*6+1;
    int actual_no=1;
    string line;

    while(getline(file,line))
    {
       if(actual_no==no_line) content=line;
       if(actual_no==no_line+1) a=line;
       if(actual_no==no_line+2) b=line;
       if(actual_no==no_line+3) c=line;
       if(actual_no==no_line+4) d=line;
       if(actual_no==no_line+5) correct=line;
       actual_no++;
    }

    file.close();

 }

 void Question::ask()
 {
    cout<<endl<<content<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<"------------------------"<<endl;
    cout<<endl<<"Answer: ";
    cin>>answer;
 }

 void Question::verify()
 {
    if(answer[0]==correct[0])//
    {
       point=1;
    }
    else point=0;
 }
