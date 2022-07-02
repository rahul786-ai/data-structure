#include<iostream>
using namespace std;

int main(){
    int n,key;
    cin>>n;

    int a[100];
    for(int i =0; i<n; i++){
        cin>>a[i];
        
    }
    //ask for element we want to search
    cout<<"Enter the element you want to search : ";
    cin>>key;

    //find out the index of that element by traversing the array
    int i;
    for(i = 0; i<=n-1; i++){
        if(a[i]==key){
            cout<<key<<"found at"<<i<<" index";
            break;
        }
    }
    if(i==n){
        cout<<key<<"is not present"<<endl;
    }


}
