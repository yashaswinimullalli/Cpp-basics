// function : Block of code which runs when it is called
// body of a function is : defination
//declartion :  the functions name return type and parameters 
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include<cmath>
#include <iostream>

/*void sayhello(){
    cout<<"hello"<<endl;
}
void assistant(){
    sayhello();
    cout<<"workdone";
}
 
int main(){
    assistant();
    return 0;
}*/
//function declartion is necessary if you define function after the main function,
//if you define function before the main then no need of declartion of it 
/*bool num(int n){
    if(n%2== 0){
        return true;
    }
    else
    return false;
}
int main(){
 int n;
 cout<<num(3)<<endl;

    return 0;
}*/

/*int fact(int n){
int result =1;
    for(int i=1;i<=n;i++){
        result*=i;
    }
    return result;
}

int main(){
    int n = 10;
cout<<"factorial of a given number is "<<fact(n);
    return 0;
}*/

/*bool isprime(int n){ // ture = 1 false :0
if(n == 1){
    return false;
}
if(n == 2){
    return true;
}
for(int i=1;i<n;i++){
    if(n % i == 0){
        return false;
    }
    return true;
}
}
int main(){
    cout<<isprime(2)<<endl;
    return 0;
}*/

/*int b_c(int n ,int r){
    int a,C ,b=1,d=1,e=1;
    
for(int i=1;i<=n;i++){
    b*=i;
}
cout<<b<<endl;
for(int i=1;i<=r;i++){
d*=i;
}
cout<<d<<endl;
a = n-r;
for (int i=1;i<=a;i++){
    e*=i;
}
cout<<e<<endl;
C = n/(e*a);
return C;
}

int main(){
cout<<"the binomial coefficeint of a given number is :"<<b_c(5,4);
    return 0;
}*/

//function overloading

/*int sum(int a,int b,int c){
cout<<(a+b+c)<<endl;
return a+b+c;
}
int sum(int a,int b){
    cout<<(a+b)<<endl;
    return a+b;
}
float sum(double a, double b){
    cout<<a+b<<endl;
    return a+b;
}
int main(){
sum(2,3);
sum(1,2,3);
sum(3.5,2.5);
sum(3.4,3.8);
 return 0;
}*/
/*int prime(int i){
    if(i <= 1){
        return 0;}
    for(int j=2;j<i;j++){
        if(i % j== 0){
       return 0;
        }
    }
cout<< i<<" ";
return 1;
}

int main(){
    int n;
    cout<<"enter a number up to where you want to print prime number:";
    cin>>n;
    for(int i=2;i<=n;i++){
       prime(i);
    }
    return 0;
}*/

/*void palindrome(int n){
int rev=0,rem,ch;
ch = n;
while(n!=0){
    rem =  n % 10; 
    rev = rev* 10 +rem;
    n = n/10;
}
cout<<rev;
if (ch == rev){
    cout<<"it is a palindrome";
}
else{
    cout<<" it is not palindrome";
}


}
int main(){
int n;
cout<<"enter a number :";
cin>>n;
palindrome(n);


    return 0;
}*/

/*int s_dig(int n){
    int rev=0,rem,a=0;
    while(n!=0){
        rem =  n % 10; 
        n=n/10;
        a+=rem;
    }
    return a;
}
int main(){
int n;
cout<<"enter a number";
cin>>n;
cout<<"the sum of digit "<<s_dig(n);
    return 0;

}*/

/*int ch_re(char ch){
ch+=1;
return ch;

}
int main(){
char ch;
cout<<"enter a charcter ";
cin>>ch;
cout<<"incremented : "<<char(ch_re(ch));
    return 0;
}*/
// BintoDec


/*void BintoDec(int binnum){
   int n =  binnum;
    int decimal = 0;
    int pow = 1;
while(n>0){
   int lastdigit = n % 10;
     decimal += lastdigit * pow ;
    pow = pow * 2;
    n=n/10;
}
cout<<"the decimal number is "<<decimal;
}
int main(){
    BintoDec(111);
    return 0;
}*/

//dec to bin
/*void DectoBin(int decnum){
    int n = decnum;
   int binnum =0;
   int pow = 1;
   while(n>0){
    int lastdigit = n % 2;
     binnum+=  lastdigit * pow;
     n=n/2;
   pow *=10;
   }
   cout<<"the binary number is"<<binnum;
}

int main(){
DectoBin(5);
    return 0;
}*/













