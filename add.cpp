#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a + b;
}

int main()
{
    int a,b;
    cin >> a >> b;
    int result = add(a,b);

    cout << result << endl;
    return 0;
}