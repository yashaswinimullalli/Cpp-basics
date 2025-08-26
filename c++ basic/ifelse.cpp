#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include<cmath>
#include <iostream>
#include <cctype> // isalha():isalpha() is a built-in function in C++. It is used to check if a given character is an alphabetic letter.

/*int main() {
    char ch;
    cout << "Enter a character to check if it is a vowel or consonant: " << endl;
    cin >> ch;
    ch = toupper(ch); // toupper or tolower are keywords to convert the required alphabet to uppercase or lowercase
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << "Entered character is a vowel" << endl;
    } else if (isalpha(ch)) {
        cout << "Entered character is a consonant" << endl;
    } else {
        cout << "Entered character is not an alphabet" << endl;
    }

    return 0;
}*/


/*int main(){
    int a,b,c;
    cout<<"enter the heights of person in cm"<<endl;
    cin>>a>>b>>c;
    if(a >b){
        if(a>c){
            cout<<"a is tallest";
        }
        else {
            cout<<" c is largest";
        }
    }
              else {
    if(b>c){
        cout<<"b is tallest";
    }
    else{
        cout<<"c is tallest";
    }

}
return 0;
}*/

// quadratic question
/*int main() {
    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
    x1 = (-b + sqrt(discriminant)) / (2*a);
    x2 = (-b - sqrt(discriminant)) / (2*a);
    cout << "Roots are real and different." << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
}
else if (discriminant == 0) {
cout << "Roots are real and same." << endl;
x1 = -b/(2*a);
cout << "x1 = x2 =" << x1 << endl;
}
else {
realPart = -b/(2*a);
imaginaryPart =sqrt(-discriminant)/(2*a);
cout << "Roots are complex and different." << endl;
cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
}
return 0;
}*/

//leap year in ternary form;
/*int main(){
    int a;
    cout<<"enter the year"<<endl;
    cin>>a;
    cout<<(a % 4 == 0 &&( a % 400 == 0 || a % 100 != 0)?"leap year":"not a leap year"); 
    return 0;
}*/
/*
For any 3 digit number check whether it’s an Armstrongnumber or not.
Armstrongnumber is a numberthat is equal to the sumofcubes of its digits.
Eg:371 is anarmstrongnumber. 3*3*3+7*7*7+1*1*1=371
*/
/* #include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include<cmath>
#include <iostream>

int main(){

    int n;
    cout<<"enter 3 digit number:";
    cin>>n;
    int num =n;
    int dig1 = num %10;
    num /=10;
    int dig2 = num % 10;
    num /= 10;
    int dig3 = num;
    
    int cubesum = dig1*dig1*dig1+dig2*dig2*dig2+dig3*dig3*dig3;
    if(cubesum == n){
        cout<<n<<"is an amstrong number\n";
    }
    else{
        cout<<n<<"it is not an amstrong number\n";
    }
    return 0;
    
}*/













