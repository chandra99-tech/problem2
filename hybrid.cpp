#include<iostream>
using namespace std;
class Student{
   protected:
     int roll_no;
     string name;
     public: 
        void studentdata(){
            cout<<"Enter roll no and id";
            cin>>roll_no>>name;
        }
};
class Mark:public Student{
   protected:
     int m1,m2,m3;
     
     public: 
        void markdata(){
            cout<<"Enter marks";
            cin>>m1>>m2>>m3;
        }
};
class SMark{
   protected:
     int s1;
     
     public: 
        void sportdata(){
            cout<<"Enter marks";
            cin>>s1;
        }
};
class Result:public Mark,public SMark{
   protected:
     int total,percent;
     
     public: 
        void sumdata(){
            total=m1+m2+m3+s1;
            percent=(total/400)*100;
            cout<<total<<endl;
            cout<<percent;
        }
};

int main(){
    Result k;
    k.studentdata();
    k.markdata();
    k.sportdata();
    k.sumdata();
}