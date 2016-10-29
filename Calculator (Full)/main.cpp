#include <iostream>
using namespace std;

int add(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

int main() {
    int a;
    int b;
    
    int operate = 0;
    
    cout << "What function woudld you like to complete?" << endl;
    cout << "Addition(1) Subtraction(2) Multiplication(3) Division(4)" << endl;
    
    cin >> operate;
    
    cout << "Enter first number: " << endl;
    cin >> a;
    
    cout << "Enter second number: " << endl;
    cin >> b;
    
    if(operate == 1){
        cout << "Answer: " << add(a, b) << endl;
    }
    else if(operate == 2){
        cout << "Answer: " << subtraction(a, b) << endl;
    }
    else if(operate == 3){
        cout << "Answer: " << multiplication(a, b) << endl;
    }
    else if(operate == 4){
        cout << "Answer: " << division(a, b) << endl;
    }
    else{
        cout << "Error" << endl;
    }
    
    return 0;
}

int add(int a, int b){
    int answer = 0;
    answer = a + b;
    return answer;
}

int subtraction(int a, int b){
    int answer = 0;
    answer = a - b;
    return answer;
}

int multiplication(int a, int b){
    int answer = 0;
    answer = a *b;
    return answer;
}

int division(int a, int b){
    int answer = 0;
    answer = a/b;
    return answer;
}
