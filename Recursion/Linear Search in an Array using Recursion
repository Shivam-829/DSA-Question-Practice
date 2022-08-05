#include<iostream>
using namespace std;
int r=-1;
    int search(int arr[], int N, int X)
    {
        r++;
      if(N==0)
      return -1;
      if(arr[0]==X)
      return r;
     search(arr+1,N-1,X);
    }
int main(){
    int arr[50],N,X;
cout<<"Enter the size of the array"<<endl;
cin>>N;
cout<<"Enter the elements of the array"<<endl;
for (int i = 0; i < N; i++)
{
    cout<<"Enter "<<i+1<<" Elements"<<endl;;
    cin>>arr[i];
}
cout<<"Enter the element to search in the array"<<endl;
cin>>X;

if(search(arr+1,N-1,X)==-1){
    cout<<"It is not Present in the array";
}

else{
   cout<<"It is Present in the array"; 
}
return 0;
}
