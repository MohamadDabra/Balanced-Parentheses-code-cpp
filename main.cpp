#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool arePair(char o,char c){
    if(o=='('&&c==')'){
        return true;
    }
    else if(o=='['&&c==']'){
        return true;
    }
    else if(o=='{'&&c=='}'){
        return true;
    }
    else {
        return false;
    }
}
bool areBal(string exp){
    stack<char>s;
    for(size_t i=0;i<exp.size();i++){
        if(exp[i]=='('||exp[i]=='['||exp[i]=='{'){
            s.push(exp[i]);
           }
    else if(exp[i]==')'||exp[i]==']'||exp[i]=='}'){
        if(s.empty()|| !arePair(s.top(),exp[i]))
            return false;
        else
        s.pop();
    }
}
return s.empty();
}


int main()
{
    string ex;
    std::cout<<"Enter an expression : ";
    cin>> ex;
    if(areBal(ex)){
        std::cout<<"Balanced\n";
    }
    else{
        std::cout<<"Not Balanced\n";
    }
}
