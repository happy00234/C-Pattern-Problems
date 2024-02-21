#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 0;
    while(i<=n){
        int space = 3 - i;
        while(space>0){
            cout<<" ";
            space = space - 1;

        }
        int count = 1;
        int j = 0;
        while(j<=i + 1){
            cout<<count;
            ++count;
            j++;
        }
        cout<<endl;
        i++;


    }

    return 0;
}