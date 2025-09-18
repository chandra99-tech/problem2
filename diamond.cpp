#include<iostream>
using namespace std;
class Student{
  
     public: 
        void studentdata(){
            cout<<"I am from student";
            
        }
};
class Mark:public virtual Student{
   
     public: 
        void markdata(){
            cout<<"i am mark";
        }
};
class SMark : public virtual Student{
   protected:
    
     
     public: 
        void sportdata(){
            cout<<"I am sport";
            
        }
};
class Result:public Mark,public SMark{
  
     public: 
        void sumdata(){
           cout<<"i am result";
        }
};

int main(){
    Result k;
   k.sumdata();
}