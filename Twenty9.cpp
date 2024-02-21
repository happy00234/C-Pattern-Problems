#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row<n){
        int j = 1;
        int start = 1;
        while(start<=n-row){
            cout<<start;
            start = start + 1;
            j = j + 1;
        }
        int star = 2*(row - 1);
        while(star){
            cout<<"*";
            star = star - 1;
        }
        int i = 0;
        while(i<n){
            int k = n - i;
            while(k>=1){
                cout<<k;
                k = k - 1;
            }
            i = i + 1;
        }    
        

        cout<<endl;
        row = row + 1;
    }


    return 0;
}