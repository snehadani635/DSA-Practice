// Maximum Number in Array 

#include<iostream>
using namespace std;
#include<limits.h>

int main(){
    int arr[] = {5,98,65,23,2};
    int size = 5;

    int maxi = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    cout<<"Maximum number is : "<<maxi<<endl;
}