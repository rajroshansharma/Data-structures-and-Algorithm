#include<iostream>
using namespace std;

int main(){
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    for (int i = 9; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}