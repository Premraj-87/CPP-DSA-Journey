/*
Today's Checklist 
1.Scope of Variables in C++
2.Funtion call by Value
3.Function call by reference
4.Default parameter value
*/

/*
Local Variables = These are the variable that are declared
insdie the function or block.

*/

/*
Global Variables = These are the variables that exist throughout the 
whole program and can be used in any part of the program.
*/

// #include <iostream>
// using namespace std;
// int apple = 5;

// void print(){
//     cout<<apple;
// }
// int main(){
//     print();
//     return 0 ;
// }

/*
What if there exists a local variable with the same name as 
that of the global varibale inside a function */

//Here local varibale take presedence 

// #include <iostream>
// using namespace std;
// int p = 5;

// void print(){
//     cout<<p;
// } 

// int main(){
//     int p =7;
//     cout<<p<<endl;;
//     p++;
//     cout<<p<<endl;
//     print();
//     cout<<::p;
// }


//!Formal Parameters and Actual Parameters
// Here a , b are actual parameter 


// #include <iostream>
// using namespace std;
//  void functionname (int para1,int para2){
//        int sum =para1+para2;
//        cout<<sum;
// }
// int main(){
//     int a=1,b=2;
//     functionname(a,b);
// }

//! Pass by Value and Pass by Reference
//pass by value= parametes value are copied to another variables

// #include <iostream>
// using namespace std;

// void changeValue(int z){
//     z=100;
// }
// int main(){
//     int a=5;
//     changeValue(a);
//     cout<<a;
// }

//*Pass by reference=Varaible itself passed

// #include<iostream>
// using namespace std;

// int main(){
//     int a=5;
//     int &q=a;
//    q++;
//    cout<<&a<<endl;
//    cout<<&q<<endl;
//    return 0;
// }

//* we can print memory address by using &p

//*another example 
// #include<iostream>
// using namespace std;

// void changeValue(int &z){
//     z=100;
// }

// int main(){
//     int a=5;
//     changeValue(a);
//     cout<<a<<endl;
//     return 0;
// }

//!Default Parameter Value
/* ans = It is a value in the function declaratino automatically
assigned by the compiler if the calling function does not pass by value
to that argument. 
*/

// #include<iostream>
// using namespace std;

// int add(int a,int b=1,int c=2){
//     return (a+b+c);
// }
// int main(){
//     cout<<add(2)<<endl;
//     return 0;
// }

//* Task
// #include<iostream>
// using namespace std;
// void makeTwice(int p){
//     p=p*2;
    
// }
// int main(){
//     int p =24;
//     makeTwice(p);
//     cout<<p;
// }

//* Will the Folloing Code generate any error? 
// void temp(int p){
//     int q=p;
//     q=q-100;

// }
// int main(){
//     int p =900;
//     temp(p);
//     cout<<(q);
// }