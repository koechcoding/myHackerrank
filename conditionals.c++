// // if and else are two of the most frequently used conditionals in C/C++, 
// // and they enable you to execute zero or one conditional statement among
// //  many such dependent conditional statements. We use them in the following ways:
// if(first condition) {
//     ...
// }
// else if(second condition) {
//     ...
// }
// .
// .
// .
// else if((n-1)'th condition) {
//     ....
// }
// else {
//     ...
// }

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
   int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // Write Your Code Here
    if (n==1)
    cout<<"one";
    else if(n==2)
    cout<<"two";
    else if(n==3)
    cout<<"three";
    else if(n==4)
    cout<<"four";
    else if(n==5)
    cout<<"five";
    else if(n==6)
    cout<<"six";
    else if(n==7)
    cout<<"seven";
    else if(n==8)
    cout<<"eight";
    else if(n==9)
    cout<<"nine";
    else
    cout<<"Greater than 9";
    return 0;
}