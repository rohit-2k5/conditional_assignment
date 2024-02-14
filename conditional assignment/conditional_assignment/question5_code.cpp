// Q5. WAP to find the difference between ASCII of two characters ,take them as input .

#include<iostream>
using namespace std;

int main(){
     
    char ch1;
    cout<<"Enter first char: ";
    cin>>ch1;

    char ch2;
    cout<<"Enter second char: ";
    cin>>ch2;

      
    if(ch1>ch2) cout<<"Difference: "<<ch1-ch2; 
    else cout<<"Difference: "<<ch2-ch1;   
    
    return 0;
}