

#include <iostream>
using namespace std;

int main(){

int arr[]={12,222,35,42,56,64,71,80,99};

int size=9;

int maxnum=arr[0];

for(int i=0; i<size; i++){

if (arr[i] > maxnum) {
   maxnum=arr[i];
    }
}

 cout<<"The maximum element in the array is: "<< maxnum <<endl;

    return 0;
}










