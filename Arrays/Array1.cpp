#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,3,5,3,1};
    int n=5;

    for(int i=1; i<=n; i++){
        bool found = false;

        for(int j=0; j<n; j++){
            if(arr[j]==i){
                found= true;
                break;
            }            
        }

        if(found == false){
            cout<<i<<" ";
        }
    }

    return 0;
}