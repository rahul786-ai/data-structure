#include<iostream>
#include<climits>
 using namespace std;

 //find the largest and smallest number in array

 int main(){
    int n,key;
    cin>>n;

    int a[1000];
    for(int i = 0; i<n; i++){
      cin >>a[i];
        
    }
    //algorithm to find largest and smallest number
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for(int i = 0; i<n; i++){
      largest = max(largest,a[i]);
      smallest = min(smallest,a[i]);
    
    }
    cout<<"largest "<<largest <<endl;
    cout<<"Smallest "<<smallest<<endl;



    return 0;


 }