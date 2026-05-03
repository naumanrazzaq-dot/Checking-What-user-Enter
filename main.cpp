#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"enter any thing";
    cin>>ch;

    if(ch>='A' && ch<='Z'){
        cout<<"Capital letter";
    }
    else if(ch>='a'&& ch<='z'){
        cout<<"small letter";
    }
    else if(ch<0 && ch>9){
        cout<<"Digits";
    }
    else{
        cout<<"special ";
    }
    return 0;
}
