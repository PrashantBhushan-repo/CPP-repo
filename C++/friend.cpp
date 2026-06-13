//! make friend of function:-


// #include<iostream>
// using namespace std;
// class my
// {
    // protected : int a;
    // protected : int c;
    // public: int b;
//   friend void fun();
// };
// void fun()
// { 
    // 
//   my ram;
//   ram.a=90;
//   ram.b=900;
//   ram.c=910;
// cout<<ram.a<<endl;
// 
// }
// int main()
// {
    // fun();
    // return 0;
// }





//! class of friend function:-



// #include<iostream>
// using namespace std;
// class yours;
// 
// class my
// {
//    private: int a;
//    protected: int b;
//    public: int c;
//    friend yours;
// };
// class yours
// { 
//    
//    public:
//    my  p;
//    void fun ()
//    {
    //  p.a=67;
    //  p.b=607;
    //  p.c=671;
//    }
// };
// int main()
// {
//    my g;
//    cout<<g.c<<endl;
//    
    // return 0;
// }






//!  static varible in class:-




// #include<iostream>
// using namespace std;
// 
// class test
// {
//    private:
//    int a;
//    int b;
// 
//    public:
//    static int s;
//    test()
//    {
    //   a=1;
    //   b=2;
    //   s++;
//    }
// };
// int test :: s=0;
// int main()
// {
    // test t1;
    // cout<<t1.s<<endl;
// 
    // test t2;
    // cout<<t2.s<<endl;
    // cout<<test::s<<endl;/* as s is public even we get this using test::(scope resolution operator:-)*/
    // return 0;
// }




//! static member function:-





// #include<iostream>
// using namespace std;
// 
// class test
// {
//    private:
//    int a;
//    int b;
// 
//    public:
//    static int s;
//    test()
//    {
    //   a=1;
    //   b=2;
    //   s++;
//    }
//    static int getcount()    /* static member can access only **static data** member:-*/
//    {
    //   return s;
    //   
//    }
// };
// int test :: s=0;
// int main()
// {
    // 
    // 
// 
    // cout<<test::getcount()<<endl;    //ans :- 0   static member can access directly... without creating object.
    //  
    //  test t1,t2;
    // cout<<t1.getcount()<<endl;
    // cout<<test::getcount()<<endl;    // ans:-2
    // 
    // return 0;
// }





//! static member-2:-



// #include<iostream>
// using namespace std;
// #include<string>
// #include<iomanip>
// 
// 
// class student
// {
//   public:
//   int roll_no;
//   static int addmission_no;
//    string name;
//   student(string name)
//   {
    //  addmission_no++;
    //  roll_no=addmission_no;
    //  this->name =name;
//   }
//    void display()
//    {
    //  cout<<setw(10)<<name<<setw(10)<<roll_no<<endl;
//    }
// };
// 
//  int student::addmission_no =0;
//  int main()
//  {
    // student s1("prashant");
    // student s2("pream");
    // student s3("pankaj");
    // student s4("priti");
    // student s5("prernam");
    // student s6("praduman");
// 
    // cout<<setw(10)<<"Name"<<setw(10)<<"Roll_no"<<endl;
    // cout<<setw(10)<<s1.name<<setw(10)<<s1.roll_no<<endl;
    // cout<<setw(10)<<s2.name<<setw(10)<<s2.roll_no<<endl;
    // cout<<setw(10)<<s3.name<<setw(10)<<s3.roll_no<<endl;
    // cout<<setw(10)<<s4.name<<setw(10)<<s4.roll_no<<endl;
    // cout<<setw(10)<<s5.name<<setw(10)<<s5.roll_no<<endl;
    // s6.display();
    // return 0;
//  }





//! inner class/nested class:-



#include<iostream>
using namespace std;
class outer
{  public:
   int a;
   static int b;
   class inner
   {
      public:
      int d;
   };
   inner i;
  outer(int a,int b ,int j)
  {
    this->a=a;
    this->b=b;
     i.d=j;
  }
//    void display()
//    {
    //   a=10;
    //   b=90;
    //   i.d=6;
//    }
};
int outer :: b;
int main()
{
    outer o(4,5,4);

   cout<<o.a<<" "<<o.b<<"  "<<o.i.d<<endl;


    // o.display();
    // cout<<o.a<<"  "<<o.b<<"  "<<o.i.d<<endl;
    return 0;
}

