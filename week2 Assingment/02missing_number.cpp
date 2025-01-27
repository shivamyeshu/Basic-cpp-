// missing number { 12345 x 789} 
// 6 is the missing number : missing kase nikaloge or sol dedo uska 

#include <iostream>
#include <algorithm>
using namespace std;


// 2 way one by iteration another ine is by using xor operation
// simple way

void missingNum(int arr[],int size){
 for(int i =0 ; i < size; i++){
     if(arr[i] != i){
         cout << " finded out the missing number " << i << endl;
         return;
     }
}    
cout << "nothing is missing";
   
}

// using xor operation

void xxor( int arr[], int size){
    
      int xorArray = 0; // XOR of all elements in the array
    int xorFull = 0;  // XOR of all numbers from 0 to n

    // XOR all elements of the array
    for (int i = 0; i < size; i++) {
        xorArray ^= arr[i];
    }

    // XOR all numbers from 0 to n
    for (int i = 0; i <= size; i++) {
        xorFull ^= i;
    }

    int xornum = xorFull^ xorArray;
    
    cout << "missing number find!!! " << xornum;
}

int main(){
    
    int arr[] = {1,3,0};
    int size = sizeof(arr)/4;
    
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n); 
    
    cout  <<n << endl;
    missingNum(arr,size);
     xxor(arr, size);
  
    return 0;
}