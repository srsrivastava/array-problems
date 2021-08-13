#include <iostream>
using namespace std;

void findMajority(int arr[], int n) {
    int res = arr[0];
    int count = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i-1])
            count++;
        else 
            count--;
        if(count == 0){
            res = arr[i];
            count = 1;
        }
    }

    count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == res)
            count++;
    }

    if( count > n/2)
        cout << res;
    else 
        cout << "No majority element";
}

int main()
{
    int arr[] = { 3, 7, 2, 7, 3, 7, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function calling
    findMajority(arr, n);
 
    return 0;
}