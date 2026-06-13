// #include<iostream>
// using namespace std;
// int main()
// {
    //  int x=90,y=9;;
  //  const int *p=&x;       pointer p pointing toward const interger:-
    //  
  //  int *const p =&x;        // constant pointer pointing to varible x;
// 
    // const int *const p =&x;     // condst pointer pointing to constant variable:-
    //  cout<<*p<<endl;
    // 
    // 
    // return 0;
// }



// #include<iostream>
// using namespace std;
// class demo
// {
//    public:
//    int x=90;
//    void display() const  //!used const to keep unchanged all data member in member function:
//    {
   //  x++;
    //   cout<<x<<endl;
//    }
// };
// int main()
// {
    // demo d;
    // d.display();
    // return 0;
// }




// #include<iostream>
// using namespace std;
// 
// void f( const int &a,int &b)  //! by using const we can't modifty a now...
// {
    // cout<<a<<" "<<b<<endl;
// }
// int main()
// {  
// 
//    int x=8,y=7;
//    f(x,y);
    // return 0;
// }



//! about preprosessor directive:-


// #include<iostream>
// using namespace std;
//#define pi 3.145
// 
//#ifndef pi
//#define pi 3
//#endif
// 
// 
// #define msg(x) #x
// #define max(x,y) (x>y ? x : y)
// 
// int main()
// {
    // cout<<max(4,5)<<endl;
    // cout<<msg(hello)<<endl;
    // return 0;
// 
// }



//! about namespaces:-                 note:- doble scope resolution use for exccess object,function, class from nested namespace:-


#define v void
#include<iostream>
using namespace std;
namespace first
{
    int x=90;
  v fun()
  {
    cout<<"first"<<endl;
  }
  class operation
  {
    public:
    int a, b;
    operation(){a=90;b=78;}
    int add(){return a+b;}
  };
};


namespace second
{
    int x=89;
  v fun()                                        
  {
    cout<<"second"<<endl;
  }
};
//using namespace first;
int main()
{
   // fun();
    cout<<second::x<<endl;
  second:: fun();
   first :: operation d;
    cout<<d.add()<<endl;
   
    return 0;
}
