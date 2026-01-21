#include<iostream>
using namespace std;
int sumOfTwo(int a, int b){
  int sum = a+b;
  return sum;
}
void Print(){
    cout<<"Hello, Function";
}

int main(){
    cout<<"Hello, World";
    cout<<"Min of num: "<< sumOfTwo(3 , 2);
    return 0;
}
