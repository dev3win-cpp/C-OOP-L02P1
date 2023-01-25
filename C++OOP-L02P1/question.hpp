//
//  question.hpp
//  C++OOP-L02P1
//
//  Created by Tadeusz Potoniec on 25/01/2023.
//

#include <iostream>

using namespace std;
class Question
{
    public:
    string content;
    string a,b,c,d;
    int no_question;
    string correct;
    string answer;
    int point;
    
    void load();//loads questions from a file
    void ask();//shows the question, reads the answer
    void verify();//verify the correctness of the answer

};
