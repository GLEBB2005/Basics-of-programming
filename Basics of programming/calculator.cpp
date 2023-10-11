#include <iostream>
#include <cmath>
void sum(int a, int b)
{
    int c;
    c=a+b;
    std::cout<<c;
}
void difference(int a, int b)
{
    int c;
    c=a-b;
    std::cout<<c;
}
void multiplication(int a, int b)
{
    int c;
    c=a * b;
    std::cout<<c;
}
void division(int a, int b)
{
    int c;
    if (b==0){
        std::cout<<"You can not divide by 0";
        return;
    }
        c = a / b;
        std::cout << c;
}
void degree(int a, int b)
{
    int c;
    c=pow(a,b);
    std::cout<<c;
}
void GCD(int a, int b)
{
    int c;
    while(a!=0 and b!=0) {
        if (a > b) { a = a - b; }
        else
        {b=b-a;};
    }
    c=a+b;
    std::cout<<c;
}
int main() {
    int a, b, c;
    char operation;
    std::cout<<"Enter a:";
    std::cin>>a;
    std::cout<<"Enter operation:";
    std::cin>>operation;
    std::cout<<"Enter b:";
    std::cin>>b;
    switch(operation) {
        case '+' :
            sum(a, b);
            break;
        case '-' :
            difference(a, b);
            break;
        case '*' :
            multiplication(a, b);
            break;
        case ':' :
            division(a,b);
            break;
        case '^':
            degree(a, b);
            break;
        case 'H':
            GCD(a,b);
            break;

    }
}
