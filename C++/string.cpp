// #include<iostream>
// using namespace std;

// int main()
// {
//     char s[100];
//     cout<<"enter your name"<<endl;
//     cin.get(s,100);   /*typing get and get line samething:-*/
//     cout<<s<<endl;
//     return 0;
// }


// ans:-  prashant
//        r




// int main()
// {
//     cout<<"enter s1"<<endl;
//     char s1[100],s2[100];
//     cin.get(s1,100);
//     cout<<s1<<endl;
//     cin.ignore();                     /* i used cin.ignore() to take next get() function a fresh string:-*/
//     cout<<"again enter s2"<<endl;
//     cin.get(s2,100);
//     cout<<s2<<endl;
//     return 0;
// }





// int main()
// {
//     char a[]="bhushprashan";
//     char b[]="prashant";
//     if(strstr(a,b)!= NULL)
//     cout<<strstr(a,b);
//     else cout<<"not found"<<endl;
//    return 0;
// }

// #include<iostream>
// using namespace std;
// #include<cstring>
// int main()
// {
//     char a[]="3456",b[]="234.906";
//      long int x= strtol(a,NULL,10);
//         float y=strtof(b,NULL);
//         cout<<x<<" "<<y<<endl;
//     return 0;
// }


// int main()
// {
//     char str[]="pra\nbhu;shan,n";
//     const char delimiter[]="\n;,";
//     char *tocken =strtok(str,delimiter);

//     while(tocken!=nullptr)
//     {
//         cout<<tocken<<endl;
//         tocken = strtok(nullptr,delimiter);
//     }
//     return 0;
// }



// #include<iostream>
// #include<string>
// using namespace std;


// int main()
// {
//     string a;
//    // cout<<"enter string 1st time:-"<<endl;
//     cin>>a;
//     cout<<a<<endl;
//     //cout<<"enter string again:-";
//     cin>>a;
//     cout<<a<<endl;

//     return 0;
// }


// int main()
// {
//     string a="gybyuyu",b="tyg";

//     a.resize(45);
//     cout<<a.size()<<endl;
//     cout<<a.length()<<endl;
//     cout<<a.capacity()<<endl;
//     cout<<a.max_size()<<endl;
//     a.clear();
//     a.append("fy");
//     cout<<a.empty()<<endl;
//     a.insert(3,"000");
//     a.replace(3,9,"0");
//     a.swap(b);
//     cout<<a<<endl;
    

// }



// int main()
// {
//     string a="prashant";
//     char b[10];
//     a.copy(b,a.length());
//    // b[a.length()]='\0';
//     cout<<b<<endl;
//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string a = "prashant";
//     string b;
//    // char b[10];
//     a.copy(b, a.length()); 

//     cout << b << endl; 

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string a = "prashant";
//     char b[10]; // Ensure the array is large enough
//     a.copy(b, a.length());
//     b[a.length()] = '\0'; // Add null terminator to make it a C-style string

//     cout << b << endl; // Output: prashant

//     return 0;
// }


#include<iostream>
#include<string>
using namespace std;


// int main()
// {
//     string  s1="prashant",s2="bhushan";
//      s1=s1 + s1.at(4) +"how are yu";
//       cout<<s1<<endl;
//      s1[4]='0';
//      cout<<s1<<endl;
//     return 0;
// }


// sum =0;
// for(int i=1;sum<i;i++)
// {
//     sum+=i;
// }





/*string class :iterator:-*/




// int main()
// {
//     string a="prQasYhaHnt";
//    // string::reverse_iterator it;
//     //  for(it=a.rbegin();it!=a.rend();it++)
//     //  {
//     //     *it =*it -32;
//     //     cout<<*it<<endl;

//     //  }
//      for(int i=0;a[i]!='\0';i++)
//      {
//         if(a[i]>=65 && a[i]<=90)
//           a[i]+=32;
//      }
//      cout<<a;
// }

// int main()
// {
//      string s1="prashant";
     
//      string s2;
//     for(int i=s1.size()-1;i>=0;i--)
//        s2=s2+s1[i];


//      cout<<s2<<endl;
// }




// int main()
// {
//      string mail="prashant189041830@gmail.com";
//      int i=mail.find('@'),j=mail.find('.');
//      cout<<mail.substr(0,i)<<endl<<mail.substr(i+1,j-i-1)<<endl;

//      return 0;
// }






/*inline & outline of function:-*/






// #include<iostream>
// using namespace std;

// class Point {
//     private:
//         int x, y;
//     public:
//         Point(int a = 0, int b = 0) : x(a), y(b) {}

//         // Inline member function
//         inline int getX() const {
//             return x;
//         }

//         inline int getY() const {
//             return y;
//         }

//         inline void setX(int a) {
//             x = a;
//         }

//         inline void setY(int b) {
//             y = b;
//         }

//         // Inline non-member function (can be outside the class too)
//         inline void display() const {
//             cout << "Point: (" << x << ", " << y << ")" << endl;
//         }
// };

// int main() {
//     Point p(10, 20);
//     p.display();
//     p.setX(30);
//     p.setY(40);
//     p.display();
//     return 0;
// }





// #include<cstring>
// int main()
// {
// 
//  
// 
//   char a[]="prashant";
//   char b[]= "ant";
// 
    //  
    //    char *ptr=strstr(a,b);
    //   
    //   
    //   
    //   
// 
// 
// cout<<*ptr<<endl;
// cout<<*(ptr+1)<<endl;
// cout<<*(ptr+2)<<endl;
//   return 0;
// }



int main()
{
    string s1="ram";
    string s2="hello";
    string result = s1 + "hi" +'!'+"  "+s1;
    cout<<result<<endl;

    cout<<s1.append("ram");
    
    return 0;
}