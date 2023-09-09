//WAP to find the difference between ASCII of two characters ,take them as input .
#include<iostream>
using namespace std;
int main(){
    char c1;
    char c2;
    cout<<"Enter first character: ";
    cin>>c1;
    cout<<"Enter second character: ";
    cin>>c2;

    int diff;
    diff=(int(c1)-int(c2));
    cout<<"Difference between ASCII:"<< diff;
}