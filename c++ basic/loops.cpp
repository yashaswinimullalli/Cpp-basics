#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include<cmath>
#include <iostream>

/*int main(){
    int a;
    cout<<"enter the number you want to multiply";
    cin>>a;
    for(int i=1;i<=10;i++){
                 a * i ;
        cout<<a<<"X"<<i<<"="<< a * i<<endl;
    }
    return 0;
}*/

/*int main(){

    for(int i=0;i<4;i++){
        for(int j=0; j<4;j++)
       cout<< "* ";
       cout<<endl;
    }
    int num;
cout<<"enter a number ";
cin>>num;
for(int i = num ; i>0; i--){
    cout<<i<<endl;
}
    return 0;
}*/

/*int main(){
   int n;
   cout<<"enter a number up to where you have to print prime numbers ";
   cin>>n;
    for(int i= 2 ;i<= n ;  i++){
        int curr = i;
        bool isprime = true;
    for(int j = 2 ; j * j <= i ;j++){
      if(curr % j == 0){
        isprime = false;
      }
}
if(isprime){
 cout<< curr <<" ";
}
}
cout<<endl;
return 0;
}*/

/*int main(){
  for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            cout<<" "<<"*";
        }
         cout<<endl;
    }
    return 0;
}*/ //star pattern

/*int main(){
for(int i = 0; i<4 ;i++){
    for(int j=0;  j<4-i  ;j++){
    cout<<"*"<<" ";    
    }
    cout<<endl;
} inverted star

    return 0;
}*/

/*int main(){
       for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
          cout<<j<<" ";
        }
        cout<<endl;
    }
return 0;
}*/

/*t main(){
    char ch = 'A';
for(int i = 0;i<4;i++){
    for(int j= 0;j<=i;j++){
        cout<<ch<<" ";
        ch++;
    }
    cout<<endl;
}
    return 0;
}  //charcter pyramid */

/*int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        cout<<"*";
        for(int j=1;j<n-1;j++ ){
            if(i ==1 || i == n ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
       cout<<"*"<<endl; 
    }
return 0;
}*/ //hallow pyramid

// inverted and rotated half pyramid 
/*int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        // Correct loop for spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}*/

/*int main(){ // flyod's triangle 
 
int num = 1;
int n=4;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<num<<" ";
        num++;
    }
cout<<endl;
}
return 0;
}*/

//dimond pattern 
/*int main(){
for (int i=1;i<=4;i++){
    for(int j=1;j<=4-i;j++){
        cout<<" ";
}
for(int j=1;j<=2*i-1;j++){
    cout<<"*";
}
cout<<endl;
}

for(int i=4;i>=1;i--){
    for(int j=1;j<=4-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
        cout<<"*";
    }
    cout<<endl;
}
  return 0;
}*/
  
/*int main(){
for(int i=1;i<=4;i++){
    
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
   
    for(int j=1;j<=2*(4-i);j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=1;i<=4;i++){
    for(int j=1;j<=4-i+1;j++){
        cout<<"*";
}
for(int j=1;j<=2*i-2;j++){
    cout<<" ";
}
for(int j=1;j<=4-i+1;j++){
    cout<<"*";
}
cout<<endl;
}
    return 0;
}*/

//0-1 triangle pattern 
/*int main(){
int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j )% 2 ==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}*/

/*int main(){
    int n = 5 ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        } 
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
        return 0;
}*/ // rhombus 

//palindrome 
/*int main(){
int n= 5;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j =i ;j>=1;j--){
        cout<<j;
    }
    for(int j=2;j<=i;j++){
        cout<<j;
}
cout<<endl;
}
return 0;
}*/

