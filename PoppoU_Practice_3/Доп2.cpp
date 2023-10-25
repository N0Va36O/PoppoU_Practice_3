#include <iostream>
using namespace std;
int main() {
setlocale(0, "");
int arr[4]={1, 2, -3, -4};
for(int i=0; i<4; i++){
    if(arr[i]>0){
        cout<<arr[i];
    }
}
cout<<endl;
for(int i=0; i<4; i++){
    if(arr[i]<0){
        cout<<arr[i];
    }
}
    return 0;
}