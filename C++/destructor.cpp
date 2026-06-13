
//! all about constructor & destructor:-

// #include<iostream>
// 
// using namespace std;
// class demo
// {
    // private:
    // int *p;
// 
    // public:
    // demo()
    // {
        // p=new int[5];
        // cout<<"constructor of demo"<<endl;
    // }
    // ~demo()
    // {
        // delete []p;
        // cout<<"destructor of demo"<<endl;
    // }
// };
// void fun()
// {
//    demo *d=new demo();
//    delete d;
// }
// int main()
// {
    // fun();
    // return 0;
// }


// //! destructor in inheriting class:-


// #include<iostream>
// using namespace std;
// class base
// {
    // public:
    // base(){cout<<"base constructor"<<endl;}
    // ~base(){cout<<"base distructor"<<endl;}
// };
// class derived : public base
// {
    // public:
//    derived(){cout<<"derived constructor"<<endl;}
//    ~derived(){cout<<"derived distructor"<<endl;}
// };
// int main()
// {
    // derived d;
// 
    // cout<<"4"<<endl;
// 
    // return 0;
// }


// //!  constructor ,distructor and pointer:-


#include<iostream>
using namespace std;
class base
{
 public:
  base(){cout<<"base constructor"<<endl;}
  virtual ~base(){cout<<"base distructor"<<endl;}
};
class derived : public base
{
  public:
   derived(){cout<<"derived constructor"<<endl;}
   ~derived(){cout<<"derived distructor"<<endl;}
};
int main()
{
 derived *d=new base();

  
delete d;

 return 0;
 }