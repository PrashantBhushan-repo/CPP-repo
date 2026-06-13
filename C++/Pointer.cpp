#include<iostream>
using namespace std;
// int main()
// {
//    int *p=new int [5];
//    p[1]=0;
//    p[0]=45;

//    cout<<p[0]<<endl;
//    delete []p;
//    p=nullptr;

  
//     return 0;
// }



// int main()
// {
//     int size;
//     cout<<"enter size of element:-"<<endl;
//     cin>>size;
//     int a[size];

//     cout<<sizeof a<<endl;

//     /* now we want chande the size of same array so it be not possible to modify it in further part of programm:-*/
//     return 0;
// }



/*use dynamic memory allocation we can chane size of array in between programm:-*/


// int main()
// {
//     int *p=new int[8];
//     p[0]=90;
//     for(int i=0;i<1;i++)
//     cout<<p[i]<<endl;

//     delete []p;

//     p=new int [9];
//     cout<<p[0]<<endl;
// }


// int main()
// {
//     int a[]={1,3,5,7,8};
//     int *p = a, *q=&a[3];

//     cout<<q-p<<endl;
// }


/*references:-*/


int main()
{
    int x=90;
    int  *y= &x;
    int *&z=y;  /* references of pointer y of pointing interger x:-*/
cout<<x<<" "<<*y<<" "<< *z<<endl;
    return 0;
}
