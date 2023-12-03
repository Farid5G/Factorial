#include <iostream>

using namespace std;

int main()
{
    int fact = 1;
    int num;
    cout<<"Enter a number to find factorial: ";
    cin>>num;
    for(int i = 1 ; i <= num ; i++){
        fact = fact * i;
    }
    cout<<"Factorial of the " << num << " is: "<<fact;

    return 0;
}
