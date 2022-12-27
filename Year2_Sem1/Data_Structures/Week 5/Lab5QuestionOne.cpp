#include<iostream>
using namespace std;
int top;

//Isempty
bool isEmpty(int arr[]){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

//Isfull
bool isFull(int arr[], int n){
    if(top == n-1){
        return true;
    }
    else{
        return false;
    }
}

//Peek
int peek(int arr[]){
    return arr[top];
}

//Push
void push(int arr[], int n){
    top++;
    arr[top] = n;
}

//Pop
int pop(int arr[]){
    int data;
    data = arr[top];
    top--;
}


int main(){
    //code 

}
