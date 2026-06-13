// !try throw and catch



// #include<iostream>
// using namespace std;
// int main()
// {
    // int x=8,y=6,z;
    // 
    // try
    // {
        // if(y==0)
        // throw 1;
// 
        // z=x/y;
        // cout<<z<<" "<<endl;
    // }
    // catch(int e)
    // {
        // cout<<"division by zero "<<e<<endl;
    // }
    // cout<<"bye"<<endl;
    // return 0;
// }




//! try trow and catch communication betwwenn functins:-




// #include<iostream>
// using namespace std;
// int division(int x,int y)
// {
    // if(y==0)
    // throw 1;
    // else return x/y;
// }
// int main()
// {int x=90,y=0,z,c;
    // try
    // {
        // {
        //    c=division(x,y);
        //    cout<<c<<endl;   
        // }
    // }
    // catch(int  e)
    // {
        // cout<<"0 in denominator:- "<<e<<endl;
    // }
    // cout<<"bye"<<endl;
    // return 0;
// }




//! throwing any type of data type integer,float,double,string,oject:-

// #include<iostream>
// using namespace std;
// 
// class my_exception :public exception // inbuild class in c++;
// {};
// int division(int x,int y) throw(string)   // yu want to mention throw type it's depend on yu
// {
    // if(y==0)
    //  throw string("prashant");
// 
    //  return x/y;
// }
// int main()
// {
    // int x=8,y=0,z;
    // 
    // try
    // {
        // z=division(x,y);
        // cout<<z<<endl;
    // }
    // catch(string e)
    // {
        // cout<<"division by zero "<<e<<endl;
    // }
    // cout<<"bye"<<endl;
    // return 0;
// }




//!  all about catch



// #include<iostream>
// using namespace std;
// 
// class my_exception1 
// {
// 
// };
// class my_exception2 : public my_exception1
// {
    // 
// };
// int fun(int x, int y) throw(my_exception1)
// {
    // if(y==0)
    //  throw my_exception1();
// 
    //  return x/y;
// }
// 
// int main()
// {int x=12,y=0,z;
    // try
    // {
        // z=fun(x,y);
// 
        // cout<<z<<endl;
    // }
    // catch(int e)
    // {
        // cout<<"int catch"<<"  "<<e<<endl;
    // }
    // catch(double e)
    // {
        // cout<<"double catch"<<"  "<<e<<endl;
    // }
    // catch(my_exception2 e)
    // {
    // cout<<"catch for my_exception2"<<"  "<<endl;
    // }
    // catch(my_exception1 e)
    // {
        // cout<<"catch for my_exception1"<<"  "<<endl;
    // }
    //  catch(...)
    // {
        // cout<<"catch for all"<<"  "<<endl;
    // }
// 
    // cout<<"Bye.."<<endl;
    // 
    // return 0;
// }




//!  stack overflow and stack underflow using catch & try:-



#include<iostream>
using namespace std;

class stack_overflow : public exception{};
class stack_underflow : public exception{};

class stack
{
    private:
    int *stk;
    int top;
    int size;

    public:
    stack(int size)
    {    this->size=size;
         top=-1;
         stk=new int[size];
    }
    void push(int x)
    {
        if(top==size-1)
        throw stack_overflow();
       
        stk[++top]=x;
    }
    int pop()
    { 
         if(top==-1)
         throw stack_underflow();
        
         return   stk[top--];
    }
};
int main()
{ 
    stack s(5);

    try
    {
       s.push(2);
       s.push(7);
       s.push(8);
       s.push(0);
       s.push(12);
       s.push(21);
       cout<<s.pop()<<endl;
       cout<<s.pop()<<endl;
       cout<<s.pop()<<endl;
       cout<<s.pop()<<endl;
       cout<<s.pop()<<endl;
       cout<<s.pop()<<endl;
    }
    catch(stack_overflow e)
    {
        cout<<"stack is overflow"<<endl;
    }
     catch(stack_underflow e)
    {
     cout<<"stack is underflow"<<endl;
    }

    cout<<"Bye..."<<endl;
    return 0;
}






