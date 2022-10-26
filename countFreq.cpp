// Count frequency of each element in the array

/*
Time Complexity: O(N*N)
Space Complexity:  O(N)
*/

#include<iostream>
#include<vector>
using namespace std;

void countFreq(int arr[], int n) {
    vector<bool> visited(n, false);

    for(int i = 0; i < n; i++) {
        int cnt = 1;
        if(!visited[i]) {
            for(int j = i+1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    visited[j] = true;
                    cnt++;
                }
            }
            cout << arr[i] << " " << cnt << endl;
        }
    }
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    countFreq(arr, n);

    return 0;
}
