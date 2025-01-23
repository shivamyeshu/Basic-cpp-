#include <iostream>
using namespace std;
void sortarray(int arr[], int size){
    
    // sort array 0 and 1 form
    int zerocnt = 0;
    int oncnt = 0;

    // updating zero and one ;
    for (int i=0; i <= size; i++){
        if(arr[i] == 0){
            zerocnt ++;
        }else if(arr[i]== 1){
            oncnt ++;
        }
    }
    
    cout << "zero are "<<zerocnt<<endl;
    cout<< "one are "<< oncnt<< endl;

//    using fill function 
// fill method :( arr , array last index , value  ) 
//    fill( arr, arr+zerocnt ,0);
//    fill( arr+zerocnt, arr+size  ,1);
   
    
    // inserting back 
    int i =0;
    for ( ; i < zerocnt ; i++){
        arr[i]=0;
    }
    for (; i <= size ; i++){
        arr[i]= 1;
    }
}

int main() {
    
    int  arr[] = { 1,0,1,1,1,0,0};
    int size = 7;
    
    sortarray(arr, size);
    
    
    cout << "sorted array : ";
    
    // sortarray();
    for(int i =0 ; i < size ; i++ ){
     cout << arr[i];
    }
   
    return 0;
}