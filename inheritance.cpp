// #include<iostream>
// using namespace std;
// class Abc{
//     protected:
//              int a,b,c;
//     public: 
//            int getdata();
//            int add();
// };
// int Abc::getdata(){
//     cout<<"enter numbers";
//     cin>>a>>b;
// }
// int Abc::add(){
//     c=a+b;
//     cout<<c;
// }
// class Xbc:public Abc{
    
//     public: 
//            int sub();
//            int mul();
// };
// int Xbc::sub(){
//     c=a-b;
//     cout<<c;
// }
// int Xbc::mul(){
//     c=a*b;
//     cout<<c;
// }
// int main(){
//     Xbc k;
//     k.getdata();
//     k.add();
//     k.sub();
//     k.mul();
// }

// #include<iostream>
// using namespace std;
// class First{
// protected: int m;
//     public:
//     First(){
// cout<<"iamFirst";
//     }
//     First(int k){
//         m=k;
//         cout<<"iamFirst para";
//     }
    
// };
// class Second:public First{
//     int s;
//     public:
//     Second(){
// cout<<"i am second";
//     }
//     Second(int l):First(l)
//     {
//         s=l;
//         cout<<s;
//         cout<<"i am second para";

//     }
    
// };
// int main(){
//     Second k(5);
    
// }
// #include<iostream>
// using namespace std;
// class Student{
//     protected:  
//     int rno;
//     string n;
//     public:
//           void getdata(){
//             cout<<"enter roll no and anme";
//             cin>>rno>>n;

//           }


// };
// class Marks{
//     protected:  
//     int h,e,s,c,f;
    
//     public:
//           void getmark(){
//             cout<<"enter marks";
//             cin>>h>>e>>s>>c>>f;
            
//           }


// };
// class Result:public Student,public Marks{
//     int total;
//     public:
//     void total_mark(){
//         total=h+e+s+c+f;
//         cout<<total;
        
//     }
// };
// int main(){
//     Result o;
//     o.getdata();
//     o.getmark();
//     o.total_mark();
// 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10],i;
//     cout<<"enter element in array";
//     for(i=0;i<10;i++){
//         cin>>arr[i];
//     }
//     cout<<"display element";
//      for(i=0;i<10;i++){
//         cout<<arr[i];
//      }
    
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[100],max,n,min,i,p;
//   xyz:  cout<<"enter an element of an array";
//     cin>>n;
//     if(n>100){
//  goto xyz;
//     }
//     else{
//         cout<<"enter the elements";
//         for(i=0;i<n;i++){
//             cin>>arr[i];
//             max=arr[0];
//             p=0;

//         }
        
        
//         for(i=1;i<n;i++){
//             if(max<arr[i])
//             max=arr[i];
//             p=i;

            
            

//         }
//         cout<<"largest is"<<max<<endl;
//             cout<<"position is"<<p;
        
//     }

   
// }

#include<iostream>
using namespace std;
int main(){
    int arr[100],i,j,second,first,n,temp,s;
    xyz: cout<<"Enter limt of an array";
         cin>>n;
         if(n>100){
            cout<<"enter limit lower than 100";
            goto xyz;
         }
         else{
            cout<<"enter the elements";
         for(i=0;i<n;i++){
            cin>>arr[i];

         }
         for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;

                }
            }
         }
         for(i=0;i<n;i++){
            cout<<arr[i];
         }
         second=arr[1];
         s=arr[n-2];
         cout<<"second largest is"<<second<<endl;
         cout<<s;


        }
}
