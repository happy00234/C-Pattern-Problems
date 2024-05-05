// finding sum of elements of an array
#include<iostream>
using namespace std;
int sum_array(int arr[],int size){
    int sum = 0;
    for(int i = 0;i<size;i++){
        sum += arr[i];
        // cout<<sum<<endl;
    }
    return sum;
  
}

int main(){
    int arr[5];
    int size;
    cin>>size;
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    int solution = sum_array(arr,5);
    cout<<solution;
    
}