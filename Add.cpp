#include <iostream>
using namespace std;
int sum(int x, int y){
    return x+y;
}
int main(){
    int num1, num2;
    num1 = 3, num2 = 5;
    cout << sum(num1, num2);
    return 0;
}