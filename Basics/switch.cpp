#include<iostream>
using namespace std;

int main() {

    char grade;
    cin>>grade;

    switch (grade)
    {
    case "A":
        cout<<"it's monday !"<<endl;
        break;

    case "B":
        cout<<"it's tuesday !"<<endl;
        break;

    case "C":
        cout<<"it's wednesday !"<<endl;
        break;
    }

    return 0;
}