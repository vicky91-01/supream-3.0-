#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){
    int start = 0, end = n-1;
    while(start < end){
        //method 1
        swap(arr[start],arr[end]);
        start++;
        end--;
        //method 2
        //swap(arr[start++],arr[end--]);
    }
}
int main(){
    int arr[] = {10,20,30,40,50,60};
    int n = 6;
    reverseArray(arr,n);
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ,";
    }
}