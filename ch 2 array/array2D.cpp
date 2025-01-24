#include <vector>
#include <bits/stdc++.h>
using namespace std;

// vector// rowsize = arr.size() // colsize = arr[0].size()

bool findElement(vector<vector<int>> arr, int target ){
    
    int rowsize = arr.size();
    int colsize = arr[0].size();
    
    for (int i = 0 ; i < rowsize ; i++){
        for( int j =0 ; j <colsize ; j++){
            if (arr[i][j]== target ){
             return true ;             
            }
        }
    }
    return false ;
}

void minElement(vector<vector<int>> arr , int colsize , int rowsize){
    int minvalue = INT_MAX;
    
    for(int i = 0 ; i < rowsize ;i++ ){
        for(int j = 0 ; j < colsize ; j ++){
            // if ( arr[i][j] < min){
            //     minvalue = arr[i][j];
            // }
            minvalue = min(minvalue, arr[i][j]);
            
        }
    }
    cout << minvalue << endl;
}

void maxElement(vector<vector<int>> arr , int colsize , int rowsize){
    int maxvalue = INT_MIN;
    
    for(int i =0 ; i < rowsize ;i++){
        for(int j = 0 ; j<colsize ; j++){
            // if(arr[i][j] > max){
            //     maxvalue = arr[i][j];
            // }
            
          maxvalue = max(maxvalue , arr[i][j]);
        }
    }
    cout << maxvalue << endl;
}

void rowSum( vector<vector<int>> arr){
	int rowsize = arr.size();
	int colsize = arr[0].size();

	// row sum
	 	
	for( int i =0; i <rowsize; i++){
	int sum = 0 ;
		for(int j =0 ; j<colsize ; j++){
			sum = arr[i][j] + sum ; 
		}
		cout << "the sum of row " << i << " is :  "<< sum<< endl;
	}
}

void colSum(vector<vector< int >> arr){
	int rowsize = arr.size();
	int colsize = arr[0].size();

	for(int i = 0 ; i < rowsize; i ++){
		int sum =0 ;
		for(int j=0 ; j < colsize; j++){
			sum = sum + arr[j][i];
		}
	cout << "the sum of col " << i << " is :  "<< sum<< endl;
	}
}

void diagnolSum(vector<vector<int>> arr){
	int rowsize = arr.size();
	int colsize = arr[0].size();
		
	int sum =0 ;
	for(int i =0 ; i < rowsize; i++){
			sum = sum + arr[i][i];
	}
	cout << "the sum of diagnol  is 1+5+9:  "<< sum<< endl;	
}


void altDiagnolsum( vector< vector < int >> arr ){
	int rowsize = arr.size();
	int colsize = arr[0].size();
	
	int sum =0;
	for(int i= 0 ; i<rowsize; i++){
		sum= sum+ arr[i][colsize-i-1];
	}
	cout << "the sum of alt diagnol  is 3+5+7 :  "<< sum<< endl;
}




int main() {
	
	vector<vector<int>> arr (3, vector<int> (3));
	int rowsize = arr.size();
	int colsize = arr[0].size();

	int target = 5;
    
    	for(int i = 0 ; i < rowsize ; i++){
		for(int j = 0 ; j < colsize; j++){
			cout << "enter the value of" << i << "," << j << endl;
			cin >> arr[i][j];
		}
	}
	cout << endl;
      for(int i = 0 ; i < rowsize ; i++){
		for(int j = 0 ; j < colsize; j++){
		cout << arr[i][j] << " ";
		}
		cout<< endl;
	}
	
	diagnolSum(arr);
	altDiagnolsum(arr);
	rowSum(arr);
	colSum(arr);	
	
    maxElement(arr ,colsize,rowsize);	
    
    minElement(arr ,colsize,rowsize);

    bool isans = findElement( arr, target );
    cout << isans ;
    
    
	return 0;
}
