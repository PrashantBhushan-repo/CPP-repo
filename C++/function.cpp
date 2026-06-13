/*default function:-*/

// int f(int x,int y,int z=0)
// {
//      return x>y && x>z ? x:(y>z ?y :z);
// }
// int main()
// {
//     cout<< f(10,23,89);
//      return 0;
// }


// int & f(int &size)
// {
//       return size;
    
// }
// int main()
// {  int size=90;
//       f(size)=23;
//       cout<<size<<endl;
//      return 0;
// }
// #include<iostream>

// using namespace std;

// int x=90;
// int main()
// {
//     int x=78;
//     {
//      int x=6;
//      cout<<x<<endl;
//     }
//     cout<<x<<endl;
//     cout<<::x<<endl;
//      return 0;
// }
  



/*vvvvvI:-  function pointer:-*/




 /*#include<iostream>
  using namespace std;
  int add(int x,int y)
  { 
     
     return x+y;
  }
  int multiply(int x,int y)
  {
    return x*y;                    
  }
  void execution(int (*fp)(int,int),int x,int y) 
  {
    cout<<fp(x,y)<<endl;
  }

  int main()                        deleartion + inilization of function pointer:-
  {
    int (*fp)(int,int);             //   int(*fp)(int,int)=sum;
    fp=add;
     execution(fp,4,6);  //*passing function pointer:
     fp=multiply;
     execution(fp,5,90);
    return 0;
  } */




  /*  array of function pointer:-*/



#include<iostream>
using namespace std;
int add(int x,int y){return x+y;}
int sub(int x,int y){return x-y;}
int mult(int x,int y){return x*y;}


  int main()
  {
    int (*fp[3])(int ,int)={add,sub,mult};/*here delecation + assagment of function to  function pointer:-*/
    for(int i=0;i<3;i++)
    {
        cout<<fp[i](2,7)<<endl; /* here we calling function poointer one by one:-*/
    }
    return 0;
  }