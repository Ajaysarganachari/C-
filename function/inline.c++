#include<iostream>
#include<string>
using namespace std;

//inline
// inline function is a function defined with the inline keyword, suggesting to the compiler that it should attempt to insert the function's body directly into the calling code at the point where the function is called, rather than performing the usual function call overhead (like pushing arguments onto the stack, jumping to the function, etc.).

inline int max(int a,int b){return a>b?a:b;}

int main(){
    //call
    int res = max(18,24);
    cout<<"res="<<res<<"\n";
    return 0;
}
