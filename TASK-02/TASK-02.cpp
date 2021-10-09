#include <iostream>
 using namespace std;
 
 int main ()
 {
       int n1 = 10               ;
       float n2 = 10.5           ;
       long n3 = 100             ;
       short n4 = 10             ;
       char n5 = 'A'             ;
       bool n6 = 0               ;
       double n7 = 3.14159       ;
       long double n8 = 1.234567 ;
       wchar_t n9 = L'A'         ;
        
         cout<<"THE SIZE OF DIFFERENT DATA TYPES "<<"\n\n";
         
       cout<<"The size of int is : "<< sizeof(int) << "\n"                  ; 
       cout<<"The size of float is : "<< sizeof(float) << "\n"              ; 
       cout<<"The size of long is : "<< sizeof(long) << "\n"                ; 
       cout<<"The size of short is : "<< sizeof(short) << "\n"              ; 
       cout<<"The size of char is : "<< sizeof(char) << "\n"                ; 
       cout<<"The size of bool is : "<< sizeof(bool) << "\n"                ; 
       cout<<"The size of double is : "<< sizeof(double) << "\n"            ; 
       cout<<"The size of long double is : "<< sizeof(long double) << "\n"  ; 
       cout<<"The size of wide char is : "<< sizeof(wchar_t) << "\n\n"        ; 
        
        
        cout<<"THE SIZE OF VARIABLE STORE IN DIFFERENT DATA TYPES "<<"\n\n";
        
       cout<<"The size of int variable is : "<< sizeof(n1) << "\n"          ; 
       cout<<"The size of float variable is : "<< sizeof(n2) << "\n"        ; 
       cout<<"The size of long variable is : "<< sizeof(n3) << "\n"         ; 
       cout<<"The size of short variable is : "<< sizeof(n4) << "\n"        ; 
       cout<<"The size of char variable is : "<< sizeof(n5) << "\n"         ; 
       cout<<"The size of bool variable is : "<< sizeof(n6) << "\n"         ; 
       cout<<"The size of double variable is : "<< sizeof(n7) << "\n"       ; 
       cout<<"The size of long double variable is : "<< sizeof(n8) << "\n"  ; 
       cout<<"The size of wide char variable is : "<< sizeof(n9) << "\n"    ; 
       
       return 0 ;
    }
