#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include<cmath>
#include <iostream>

/*int main(){
    int m[20];
    cout<<m[1]; // garbage value
    return 0;
}*/
/*int main (){
    int a[5] = {1,2,3};
    cout<<a[3];// automatic initialization to 0 if not initialized in array
    cout<<a[0];
    cout<<a[1];
    cout<<a[2];
    return 0;
}

int main(){
    int a[] = {1,2,3};
    cout<<a[0];
    cout<<a[1];
    cout<<a[2];
    cout<<a[5];//warning or garbage depend upon compiler 
    return 0;
}*/
 
//largest element in array
/*int main(){
int n;
cout<<"enter the size of array: ";
cin>>n;
int a[n];
int largest = 0;
cout<<"enter the elements of array";
for(int i =0;i<n;i++){
    cin>>a[i];
}
cout<<"elements are ";
for(int i=0;i<n;i++){
    cout<<a[i]<< endl;
    if(a[i]>largest)
      largest = a[i];
}
cout<<"the largest value is :"<<largest;
    return 0;

} */

// arrary passed by reference


int main(){
int arr[5]={1,2,3,4};
cout<<arr[1];
//cout<<"address :"<<arr<<endl;
//cout<<"value :"<<*arr<<endl; // arr[0]
//cout<<"value :"<<*(arr+1)<<endl;
//cout<<"adress :"<<arr+1<<endl;

   return 0;
}
 




