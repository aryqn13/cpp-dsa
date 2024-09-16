#include<iostream>
using namespace std;

// selection sort takes the minimum to the first
int selection_sort(int n,int arr[]){

    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
        if(arr[j]<arr[min]){
             min = j;
        }
        }
       int temp = arr[min];
       arr[min] = arr[i];
       arr[i] = temp;
    }
    cout<<"After selection sort the array is : "<< "\n" ;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        // cout<<"\n";
    }
    
}

// takes maximum to the last by adjacent swaps
int bubble_sort(int n, int arr[]){

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void insertion_sort(int n, int arr[]) {
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    cout << "After Using insertion sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    }

int main() {
    int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Before sorting: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  selection_sort(n, arr);
  cout<<"\n";
  bubble_sort(n,arr);
  insertion_sort(n,arr);
    return 0;
}