#include <iostream>
using namespace std;

//forward declaration: declare here, define later. 
void enterValues(int x[]);
double findMean(int x[]);
int findMin(int x[]);
int findMax(int x[]);


int main(){
    int arr[15];
    enterValues(arr);
    cout <<findMean(arr)<<endl;
    cout <<findMin(arr)<<endl;
    cout <<findMax(arr)<<endl;
    return 0;
}

void enterValues(int x[]){
    cout<<"Enter 15 values, one by one."<<endl;
    for (int i = 0; i < 15; i++){
        cin >> x[i];
    }
    return;
}

double findMean(int x[]){
    int total = 0;
    for(int i = 0; i < 15; i++){
        total += x[i];
    }
    return total / 15.0;
}

int findMin(int x[]){
    int minVal = x[0];
    for(int i = 1; i < 15; i++){
        if(minVal > x[i]){
            minVal = x[i];
        }
    }
    return minVal;
}

int findMax(int x[]){
    int maxVal = x[0];
    for(int i = 1; i < 15; i++){
        if(maxVal < x[i]){
            maxVal = x[i];
        }
    }
    return maxVal;
}