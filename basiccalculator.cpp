#include <iostream>
using namespace std;

int main(){
    char op;
    float num1,num2;

    cout<<"Enter operator: +,-,*,/ : ";
    cin>> op;
    cout<<"Enter two numbers \n";
    cin>> num1>> num2;

    switch(op)
    {
        case '+':
            cout<< num1<<"+"<<num2<<"="<<num1+num2;
            break;
        case '-':
            cout<< num1<<"-"<<num2<<"="<<num1-num2;
            break;
        case '*':
            cout<< num1<<"*"<<num2<<"="<<num1*num2;
            break;
        case '/':
            cout<< num1<<"/"<<num2<<"="<<num1/num2;
            break;
        
        default:
            cout<<"Error! operater is not correct";
            break;

    } 
    return 0;
}