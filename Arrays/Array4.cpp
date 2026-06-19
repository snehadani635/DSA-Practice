// count 0s and 1s in array 

#include<iostream>
using namespace std;

int main(){

int arr[] = {0,0,1,0,1,1,0,0,1,0,0};
int size = 11;

int numZero = 0;
int numOne = 0;

for(int i=0; i<size; i++){
    if(arr[i] == 0){
        numZero++;
    }
    else{
        numOne++;
    }
}

cout<<"Number of Zeroes: "<<numZero<<endl;
cout<<"Number of Ones: "<<numOne<<endl;

}
