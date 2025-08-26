//variable scope :scope of a variable is the region in code where the existence of varible is valid
// based on scope we have global variable and local variable
//local:are declared inside the braces of any function and can be accessed only from there
//global:declares outside any function and be accessed from anywhere
// three  types in c++:*built in  *userdefined(struct ,union,Enum) *derived(array ,funcdtion,pointer)
// local variable takes precedence over global 
//#include<iostream> stream:c++ sequence of bytes corresponding to input and output are commonly known as streams.
//input stream: flow of bytes takes place from imput decice to main mempory(keyboard)
//output stream :flow of bytes tales place from main memeory to the output device (monitor)
//'             <<' insertion operator 'cin>>' endlendl;extraction operator
// my c++ snippet log:
// header files: there are two types 1.)system header files:it comes with the compiler(#include<iostream>)2.)user defined files: it is written by the programmer (#include"this.h") 
// to get c++ library headers ..(in google search c++ header file reference ) 
/*to acesses global variable we use scope resolution in main function
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include<cmath>
int a = 6;
int main(){
int a=7;
<<"the value of a is"<<a<<endl;endlendl;
<<"the value of global value a endlendl;is"<<::a<<endl;

    return 0;
}*/

//literals: represent various data types and are used to assign values to variables or constants


/*#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include<cmath>
int main(){  
<<"size of 34.4 is"<<sizeof(34.endlendl;4)<<endl;
<<"size of 34.4 is"<<sizeof(34.endlendl;4f)<<endl;
<<"size of 34.4 is"<<sizeof(34.endlendl;4F)<<endl;
<<"size of 34.4 is"<<sizeof(34.endlendl;4l)<<endl;
<<"size of 34.4 is"<<sizeof(34.endlendl;4L)<<endl;
    return 0;
}*/


//***** * refernce variable*******:   yaashaswini --->yashu --->chinnu ---->chinni(but the person is same have different names )

/*#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include<cmath>

int main(){
 
    float x=455;
    float &y= x;
    <<"the value x is "<<x<<endl<<"endlendl;the value of y is"<<y;


    return 0;
}
*/
 //***type casting**** 
 /*#include <iostream>
 #include <fstream>
 #include <iomanip>
 using namespace std ;
 #include<string>
 #include<cmath>
 implicit:
 int main(){
cout<<(10/3);
cout(10/3.0);
cout<<('B'+1)<<endl;
return 0;
float pi = 3.14
cout<<(int)(pi);
cout<<((float)10/3); //3.33
cout<<(char)('A'+3) //B
return 0;
 }*/

 
 //constants in c++ (u cannot change the value )
 /*#include <iostream>   
 #include <fstream>
 #include <iomanip>
 using namespace std ;
 #include<string>
 #include<cmath>
 int main(){
    const int a = 3;
   cout<<"the value of a is "<<a<<endl;
    int  a=9; // it will through a error.. bcz a is constant
 
return 0;
 }
 */



//***** manipulatours** : are those used for formating the code eg:endl,setw(space)
/*#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include<cmath>
int main(){
int a=3,b=4,c=5;
<<"the value is a , b , c"<<a<<endlendl;setw(10)<<b<<setw(10)<<c;//include<manip.h> to acesses the the setw in code
 return 0;
}*/
// for c++ operator precedence check in google




/*
//****structures, ENUM, union*** // stuct it uses differnt memory allocation for a  all members 
#include <iostream> 
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include<cmath>

using namespace std;


typedef struct employee
{
int eId;
char favchar;
float salary;
}ep;
//ep (struct employee)
int main(){
 ep harry={ 1 , 'A', 12000000};//
cout<<"harry empid :"<<harry.eId      << en<<endldl;      //
cout<<"harry favchar :"<<harry.favchar <<en<<endldl;//
cout<<"harry salary:"<<harry.salary <<endl;<<endl
return 0;
}*/


//**union**// uses same memory allocation for all the members 
/*#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include<cmath>
 
union money{
 int rice ;
 char car;
 float pounds;
 };
 
 int main(){

    union money my ;
    my.rice =234;
    my.car = 'C';
    my.pounds =342;
   //// cout<<"rice : "<<my.rice<<endl;
   // cout<<<endl<"car: "<<my.car<<endl;
   // cout<<"p<<endlounds : "<<my.pounds<<endl;
    ret<<endlurn 0;
 }*/// only prints higest datatype value

 // enum// it is user defined data types that contains integral constants ,each constants given a different numers strats from zero and goes on incrementing the values 
 /* #include <iostream>
 #include <fstream>
 #include <iomanip>
 using namespace std ;
 #include<string>
 #include<cmath>
 
 int main(){
    enum Meal{breakfast , lunch , dinner}; // here meal become a datatype
   // cout<<breakfast;
   // cout<<lunch;
   // c<<endlout<<dinner;
   Meal m1<<endl = lunch;
   cout<<<<endlm1;
   
   return 0;
 }*/
//**inline <<endlin a function**// :embedding the function code directly at the call site.instead of copying arguments by calling ,executing the code directly

/*#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include<cmath>
#include <iostream>
inline int product(int a,int b){
   return a*b;
}

int main(){
   
   int a,b;
   cin>>a>>b;
   cout<<"enter the value of a and b"<<product<<endl(a,b)<<endl;

   return 0;
}*/


//static variables
/*#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include<cmath>
#include <iostream>
int a = 10; // global variables 
int product(int a, int b){
   static int c=0;// this executes only once 
   c = c + 1;// next time this function run,the value of c will be retained
  return a*b+c;
}

int main(){
   int a, b;
   cout<<"enter the value of a and b"<<endl;
  cin>>a>>b; // local variables
   cout<<"the product of values"<<product(a,b)<<endl;
   cout<<"the product of values"<<product(a,b)<<endl;
   cout<<"the product of values"<<product(a,b)<<endl;
   cout<<"the product of values"<<product(a,b)<<endl;
   cout<<"the product of values"<<product(a,b)<<endl;
   cout<<"the product of values"<<product(a,b)<<endl;
   cout<<"the product of values"<<product(a,b)<<endl;
   return 0;
}*/
// we should not use inline if the static variables are used

//** Default argument**//
//a default argument is a value provided in a function declaration that automatically gets used if no value is provided for that parameter when the function is called
/*#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include<cmath>
#include <iostream>

float moneyrecived(int money,float factor = 1.08){
   return money * factor ;

}

int main(){
   int money = 100000;
   cout<<"for a "<<money<<"money"<<" you will get the final amount "<<moneyrecived(money)<<endl;;
   cout<<"for vip"<<money<<"money"<<" they  will get the final amount "<<moneyrecived(money,1.1);

   return 0;
}*/

//function overloding

/*#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include<cmath>
#include <iostream>
int sum(int a,int b){
   cout<<"using function with 2 arguments "<<endl;
   return a+b;
}
int sum(int a,int b,int c){
   cout<<"using function with three arguments "<<endl;
   return a+b+c;
}
int main(){
   cout<<"the sum of 2 arguments is "<<sum(3, 5)<<endl;
   cout<<"the sum of 3 arguments is "<<sum(3,4,5)<<endl;
   return 0;
}

*/ // it will executes by considering data types and  numnber of argumnets it executes particular function 


// tirnary opperator
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include<cmath>
#include <iostream>

int main(){
   int a;
   cout<<"enter you age :";
   cin>>a;
   int adult = a>=18?true: false;
cout<<"you are citizen :"<<adult;
   
   return 0;
}














 
  



















