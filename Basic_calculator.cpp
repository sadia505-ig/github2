#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    char op;
    while(true){
    cin>>a>>op>>b;
    if(op=='+'){
        cout<<a+b;
    }
    else if(op=='-'){
        cout<<a-b;
    }
    else if(op=='*'){
        cout<<a*b;
    }
    else if(op=='/'){
        if(b==0){ cout<<"MATH ERROR";}
        else cout<<a/b;
    }


}
}