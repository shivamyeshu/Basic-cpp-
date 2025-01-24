#include <iostream>
using namespace std ;

// BASICS OF CPP 

int main()
{
    
   // ___________________________________________________________________//
   // sum of 3 number and divide by 2 
   
    int a,b , c ;
    cin >> a>>b>>c;
    int x = a+b+c;  // take input and add 3 number 
    cout << x/2 ;   // divide it by 2 
    
    // ___________________________________________________________________//
    
    // area of rectangle // length * breadth
    int a = 4 ;
    int b = 5;
    int c = a * b;
    cout << c;
    
    // ___________________________________________________________________//
    
    // parameter of rectangle = 2(l+b)
    int l = 100 ;
    int b = 200 ;
    
    int c = 2* (l +b);
    cout << c ;
    
    // ___________________________________________________________________//
    
    // calculate percentage = ( num / total num ) * 100
    
    int a , b ,c ,d ,e;
    cin >> a >> b >> c >> d >> e;
    
    int totalobtain = a + b + c + d + e;
    int overall = 25;
    
    int percentage = (totalobtain/overall) * 100 ;
    
    cout << "the percentage is " << percentage  << "%";
    

    // ___________________________________________________________________//
    
    // check number is positive negative or zero =
    //  >0 (grater then zero positive)
    //  <0 (smaller then zero negative)
    //  =  (equal to zero mean zero )
    
    int a ;
    cin >> a ;
    
    if(a > 0){
        cout << " the num is +ve " << a ;
    }else if (a < 0 ){
        cout << " the num is negative " << a ;
    } else {
        cout << "number is zero " << a; 
    }
    
    // ___________________________________________________________________//
    
    // print counting from one to n 
    
    int n ;
    cin >> n; 
    
    // via for loop 
    
    // for (int i =1 ; i <= n ; i ++ ){
    //     cout<<  i ;
    // }
    
    // via while loop 
    
    int i = 1 ; 
    while(i <= n ){
        cout << i << " ";
        i++;
    }
    
    // ___________________________________________________________________//
       
    // print 1 -n but only even number 
    
    int n ; 
    cin >>  n ;
    
    for(int i=0 ; i <= n ; i++){
        if(i % 2 == 0 ){
            cout << "  even number :" << i << endl ;
        }
    }
    
    // ___________________________________________________________________//
       
    //   print all  the odd number 
    
    int n ;
    cin >> n ;
    
    for (int i =0 ; i <= n ; i++){
        if( i % 2 != 0 ){
            cout << " odd number :" << i << endl;
        }    
    }
    
   // ___________________________________________________________________//
    
    // print both odd number and even number 
    
    int n; 
    cin >> n;
    
    for( int i = 0 ; i <= n ; i ++){
        if(i %2 == 0 ){
            cout <<i <<" : is the even number "<< endl;
        }else{
            cout << i << " : is the odd number "<< endl;
        }
    }
    
    // ___________________________________________________________________//
    
    // data type : int , char , float , bool , double  ( sizeof(value) )
    
    int a =0 ;
    cout << "int " << sizeof(a) << " bytes "<< endl; // 4
    
    char b = 'b';
    cout << "char " << sizeof(b) << " bytes " << endl; // 1
    
    float c =0;
    cout << "float"<< sizeof(c)<< " bytes" << endl ; // 4
    
    bool d =0;
    cout << "bool "<< sizeof(d)<< " bytes" << endl ; // 1
    
    double e =0.00;
    cout << "double "<< sizeof(e)<< " bytes" << endl ; // 8
    
    short f = 0;
    cout << "short "<< sizeof(f)<< " bytes" << endl; // 2
    
    long g =0;
    cout << "long "<< sizeof(g)<< " bytes" << endl ; // 8
    
    long long h =0;
    cout << "long long "<< sizeof(h)<< " bytes" << endl ; // 8
    
    // ___________________________________________________________________//
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}