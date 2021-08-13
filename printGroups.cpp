// Minimum consecutive flips
// I/p: arr[] = {1,1,0,0,0,1}
// O/p: from 2 to 4

#include <iostream> 
using namespace std;

void printGroups(int arr[], int n) {

    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[i-1])
            if(arr[i] != arr[0])
                cout << "From " << i << " to ";
            else 
                cout << (i-1) << endl;
    }
    if(arr[n-1] != 0)
        cout << (n-1) << endl;
}

int main() {
	
     int arr[] = {0, 0, 1, 1, 0, 0, 1, 1, 0}, n = 9;

     printGroups(arr, n);
    
}