
// #include<iostream>
// using namespace std;
// void  binary_search(int a[],int n,int key)
// {
//    int l=0,h=n;
   
//    while(l<=h)
//    {
//        int mid =(l+h)/2;

//       if(a[mid]==key)
//       {
//         cout<<"it's found & equals to"<<" "<<a[mid]<<endl;
//          return ;
//       }
//       else if(key>a[mid])
//           l=mid+1;
//       else
//           h=mid-1;
//    }
//    cout<<"it's not found"<<endl;
// }
// int main()
// {
//   int a[] ={10,17,21,23,25,26,234};
//   cout<<"enter Key element";
//   int key;
//   cin>>key;

//   binary_search(a,6,key);
   
//    return 0;
// }






// #include<iostream>
// using namespace std;
// main()
// {
//   int a[3][2];
  
//   for(auto &x:a)
//     {
//       for(auto &y:x)
//       cin>>y;
//     }

//     for(int (&x)[2]:a)
//     {
//       for(int y:x)
//       cout<<y<<" ";

//       cout<<endl;
//     }
 
// }




//! Array striver sheet:-


// #include<bits/stdc++.h>
// using namespace std;
// int min_max_func(vector<int> &arr)
// {
    // sort(arr.begin(),arr.end());
// 
    // return arr[arr.size()-1];
// }
// 
// int main()
// {
    // vector<int> arr1 ={3,8,90,1,67};
    // vector<int> arr2 ={13,8,91,1,67};
// 
    // cout<<"largest element ="<<min_max_func(arr2)<<endl;
   //cout<<"smallest element ="<<min_max_func(arr2)<<endl;
    // return 0;
// } 



//! delete dunlicate return size of array and it's element:-  eg:- a[1,2,4,4,4,5,8]  return a[1,2,4,5,8] ,size=5


// #include<vector>
// #include<iostream>
// using namespace std;
// 
// 
// pair<int,vector<int>>removeDuplicates(vector<int> &arr,int n)
// {
    // if(n==0|| n==1)
    // cout<<"invalid size"<<endl;
// 
    // int i=0;
//    for(int j=0;j<n-1;j++)
//    if(arr[i]!=arr[j])
//    {
    //  i++;
    //  arr[i]=arr[j];
//    }
// 
   //vector<int> newarr(arr.begin(),arr.begin()+i+1);
// 
//    return {i+1,(arr.begin(),arr.begin()+i+1)};
// }
// 
// int main()
// {
    // vector<int > arr1={-12,-12,0,0,1,1,1,12,16,18,19,19,19,20};
    // vector<int > arr2={20};
    //    pair<int,vector<int>> result=removeDuplicates(arr1,arr1.size());
    //   cout<< result.first<<endl;
// 
    //   vector<int> v=result.second;
    //   for(const int & i:v)
    //   cout<<i<<" ";
    // return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int a[]={2,6,7};
    for(int x:a)
    cout<<x<<" ";


cout<<endl;
    a[0]=90;

    int *p=a;
    cout<<*p<<endl;
    
   return 0;
}