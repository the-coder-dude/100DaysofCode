#include <iostream>
using namespace std;

int main(){

    int i;
    cout<< &i << endl;
    
    int * p = &i;
    cout<< p << endl;

    float f= 10.2;
    float * pf = &f;

    double d = 122.32;
    double * pd = &d;


    // To move Pointer address

    p += 1;     //p = p+1

    cout<<p<< endl;         //this increases the pointer address by 4

    int a[10];

    a[0] = 5;
    a[1] = 10;

    cout<< *a << endl;      // this will print the value of a[0]
    cout<< *(a+1) << endl;  // this will print the value of a[1]

    
 

}