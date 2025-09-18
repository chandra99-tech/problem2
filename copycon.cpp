#include<iostream>
using namespace std;
class Abc{
    int x;
    public:
            Abc (){
            cout<<"enter value of x";
            cin>>x;
            
           }
           Abc(Abc & temp){
            x=temp.x;
           }
          
           void display(){
           
            cout<<"the value of x is ";
            cout<<x;
           }
};
int main(){
    Abc t1;
    // Abc t2(t1);
    // Abc t2=t1;
    Abc t2;
    t2=t1;
    t2.display();
  
    
    
}