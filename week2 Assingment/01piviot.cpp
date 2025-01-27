// 2 sum / piviot element 

#include <iostream>
using namespace std;


// simple approch
void piviot(int arr[], int size, int target ){
    // cout << "hello ";    
    bool find = false ;
    
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < i ; j++){
            if( arr[i] + arr[j] == target){
                cout <<" element found ";
                cout << "location of elelmet is "<< arr[i] << " , "<< arr[j] << endl;
            
                find = true;
                
            }
        }
    }
    
    if(find !=true){
        cout <<  "the value is non exesting "<< endl;
    }    
    
}

// 2 pointer approch
void piviotEle(int arr[], int size, int target){
    
    int find = false;
    int rightP = size-1 ; 
    int leftP = 0;
   
    while( leftP < rightP ){
        int sum = arr[rightP]+ arr[leftP];
        if( sum == target){
            find = true;
            cout << "element found " << arr[rightP] << " ,"<< arr[leftP] << endl;
        return;
        }
        
        else if (sum < target)
            leftP++; 
      
        else
            rightP--;
    }
    if( find != true)
    cout<< "the number not present" << endl;
        
}


int main(){
    
    int arr[] = {1,3,4,5,5,4,56,9,6};
    int size = 9;
    
    int target = 24;
    
    cout <<" working"<< endl;
    piviot (arr , size , target);
    
    piviotEle(arr,size,target);
    
    return 0;    
}