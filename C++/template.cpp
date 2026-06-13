
// #include<iostream>
// using namespace std;
// template<typename T>
// class stack
// {
//   private:
//   T a[10];
//   int top;
//   public:
//   stack(){top=-1;}
//   void push(T );
//   T pop();
//  };
// 
//  template<class T>
//  void stack<T> :: push(T x)
//  {
    // if(top==9)
    // cout<<"stack over flow"<<endl;
    // else
    // a[++top]=x;
// }
// template<class T>
// T stack<T> :: pop()
// {
    // if(top==-1)
    // {
        // cout<<"stack under flow"<<endl;
        // return T ();
    // }
    // return a[top--];
// }
// int main()
// {
//    stack<float> s;
//    s.push(6.9f);
//    s.push(6.9f);
//    s.push(6.0f);
//    s.push(6.8f);
//    s.push(6.9f);
//    cout<<  s.pop()<<endl;
//    cout<<  s.pop()<<endl;
//    cout<<  s.pop()<<endl;
    // 
    //  return 0;
// }



// ! use of single template:-


// #include<iostream>
// using namespace std;
// template <class T>
// T f(T x,T y)
// {
    //    return x > y ? x : y;
// }
// 
// int main()
// {
    // int n=90,m=89;
    // float i=90.9,j=45.8;
    // cout<<f(n,m)<<endl;
    // cout<<f(i,j)<<endl;
    // return 0;
// }



//! use of double template:-



#include<iostream>
using namespace std;
template <typename T1,typename T2>
class mypair
{
   private:
   T1 first;
   T2 second;
   public:
   mypair(T1 f,T2 s)
   {
    first=f;
    second=s;
    
   }
   
   auto add ();
   auto mult();

   void display(){cout<<first<<"  "<<second<<endl;}
};


template <typename T1,typename T2>

auto mypair<T1,T2> ::add(){return first+second;}

template <typename T1,typename T2>

auto  mypair<T1,T2> ::mult(){return first*second;}
 

 
int main()
{
    mypair<int,float> p(4,90.8);
    p.display();

    cout<<p.add()<<endl;
    cout<<p.mult()<<endl;
    return 0;
}