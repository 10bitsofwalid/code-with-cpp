#include <iostream>

using namespace std;

//6 taking input
int main(){
    cout << "Enter a value: ";
    int value;
    cin >> value;
    cout << value;
}

//5 task
int main(){
    int Sales = 95000;
    double Tax = Sales*0.04;
    double Country_tax = Sales*0.02;

    cout << "Sales amount = $" << Sales << endl;
    cout << "Tax amount = $" << Tax <<endl;
    cout << "Country Tax = $" << Country_tax;
}

//4 maths equations
int main(){
    
    int x = 10;
    int y = 5;
    double b = (x+10)/(3*y);
    cout << b;
    
    //double z = x + y;
    //int a = x++; //x = 11, a = 10
    //int a = ++x; //x = 11, a = 11

    //cout << z;
    //cout << "x = " << y << endl;
    return 0;

}

//3 declaring constant
int main(){

    const double pi = 3.1416; //making variable constant


}

//2 swaping
int main(){
    int a = 10;
    int b = 20;
    int temp;
    
    temp = a;
    a = b;
    b = temp;

    cout << a;
    cout << b;
    return 0;

}

//1 variable declaration
int main(){

    //file_size - snake case
    //SalesPrice - pascal case
    //fileSize - camel case
    //iFileSize - hungarian notation

    int file_size = 100; 
    double SalesPrice = 9.99;
    cout << file_size;
    cout << SalesPrice;
    return 0; 
}