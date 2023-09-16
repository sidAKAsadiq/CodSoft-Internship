/* This is Task no.2 of CodSoft C++ Internship - "Simple Calculator"
   Author : Muhammad Sadiq
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Simple_Calculator{
private:
float number_1;
float number_2;
public:
Simple_Calculator():number_1(0),number_2(0){}
//Implmenting 4 basic arthmatic opertaions
inline float addition(float number_1 , float number_2){
    return number_1+number_2;
}
inline float subtraction(float number_1, float number_2){
    return abs(number_2-number_1);
}
inline float multiplication(float number_1,float number_2){
    return number_1*number_2;
}
inline float division(float number_1,float number_2){
    return number_1/number_2;
}
//Working
void Operate_calulaor(){
    int choice ;
    while(choice!=-1){
    cout<<"Select operation you want to perform (-1 to exit)\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    cin>>choice;
    if(choice==-1){
        return;
    }
    cout<<"Enter 1st Number : ";
    cin>>number_1;
    cout<<"Enter 2nd Number : ";
    cin>>number_2;
    switch (choice)
    {
    case 1:
        cout<<"Addition Answer : "<<addition(number_1,number_2)<<endl;
        break;
    case 2:
        cout<<"Subtraction Answer : "<<subtraction(number_1,number_2)<<endl;
        break;
    case 3:
        cout<<"Multiplication Answer : "<<multiplication(number_1,number_2)<<endl;
        break; 
    case 4:
        cout<<"Division Answer : "<<division(number_1,number_2)<<endl;
        break;               
    default:
        cout<<"Invalid choice\n";
        break;
    }
    cout<<"Press any number to continue OR -1 to exit\n";
    cin>>choice;
    }
    cout<<"Exiting the Program...";
}
};

int main() {
    Simple_Calculator s1;
    s1.Operate_calulaor();
    return 0;   
}