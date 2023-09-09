//WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std;
int main(){
    int v,r,h;
    cout<<"Enter radius:"<<endl;
    cin>>r;
    cout<<"Enter hight:"<<endl;
    cin>>h;
    v=3.14*r*r*h;
    cout<<"Volume of Cylinder is:"<< v<<endl;
    return 0;
}