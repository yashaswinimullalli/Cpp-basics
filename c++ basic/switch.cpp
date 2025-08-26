// calculator 
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include <iostream>    
int main(){
    int a,b;
    char op;
    cout<<"enter the values of a and b:";
    cin>>a>>b;
    cout<<"enter operator :";
    cin>>op;
    switch(op){
        case '+': cout<<"sum of two numbers :"<<a+b;
        break;
        case '-':cout<<"substraction of number :"<<a-b;
        break;
        case '/':cout<<"divison of numbers :"<<a/b;
        break;
        case '*':cout<<"multiplication of numbers :"<<a*b;
        break;
    }
    
    return 0;
}
