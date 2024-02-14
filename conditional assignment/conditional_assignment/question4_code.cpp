// Q4. WAP for finding the volume of the cylinder by taking radius and height as input.

#include<iostream>
using namespace std;

int main(){
     
    float radius;
    cout<<"Enter radius: ";
    cin>>radius;

    float height;
    cout<<"Enter height: ";
    cin>>height;

    float volume = 3.1415*radius*radius*height;
    cout<<"The volume of cylinder is: "<<volume;

     return 0;
}