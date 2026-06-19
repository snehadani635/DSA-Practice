// Find duplicate Number
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,3,4,2,2};
    int size = 5;

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<endl;
            }
        }
    }
}