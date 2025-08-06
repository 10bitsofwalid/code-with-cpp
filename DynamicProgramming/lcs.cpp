#include <bits/stdc++.h>
using namespace std;

int m, n;
int c[10][10];
char x[10], y[10];
char b[10][10];

void print(int i, int j){

    if(i==0 || j==0)
    return;

    if(b[i][j]=='c'){
        print(i-1,j-1);
        cout << x[i-1];
    }
    else if(b[i][j]=='u'){
        print(i-1,j);
    }
    else{
        print(i, j-1);
    }

}

void lcs(){

    m = strlen(x);
    n = strlen(y);

    for(int i=0; i<=m; i++)
        c[i][0] = 0;

    for(int j=0; j<=n; j++)
        c[0][j] = 0;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){

            if(x[i-1] == y[j-1]){
                c[i][j] = c[i-1][j-1] + 1;
                b[i][j] = 'c';
            }
            else if(c[i-1][j] >= c[i][j-1]){
                c[i][j] = c[i-1][j];
                b[i][j] = 'u';
            }
            else{
                c[i][j] = c[i][j-1];
                b[i][j] = 'l';
            }

        }
    }

}

int main(){

    cout << "1st Sequence: ";
    cin >> x;

    cout << "2nd Sequence: ";
    cin >> y;

    lcs();

    cout << "lcs is: ";
    print(m, n);
    cout << endl; 

    return 0;

}