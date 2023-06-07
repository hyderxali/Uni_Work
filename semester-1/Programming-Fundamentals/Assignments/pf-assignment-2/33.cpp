#include<iostream>
using namespace std;
int main()
{
    int anglea, angleb, anglec, sum;
    cout << "Input three angles of triangle : ";
    cin >> anglea >> angleb >> anglec;
    sum = anglea + angleb + anglec;
    if(sum == 180)
    {
        cout << "It is a valid triangle. "<<endl;
    }
    else
    {
        cout << "It is a invalid triangle.";
    }
    return 0;}
