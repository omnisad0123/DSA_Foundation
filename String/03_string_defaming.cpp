/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;


    string defangIPaddr(string s) {
          string ans="";
        for(int i=0;i<s.length();i++){
             if(s[i]=='.'){
              ans+="[.]";
             } else {
                   ans+=s[i];
             }
        }
        return ans;
    }

int main()
{
   string s;
   cin>>s;
   std::cout << defangIPaddr(s) << std::endl;

    return 0;
}