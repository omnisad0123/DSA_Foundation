#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string temp1="";
    string temp2="";
       for(auto i:word1){ temp1+=i; }
       for(auto i:word2){ temp2+=i; }
    // sort(temp1.begin(),temp1.end());
    // sort(temp2.begin(),temp2.end());

      return temp1==temp2;
    }


int main() {
  vector<string>s1 ={"abc", "e", "f"};
  vector<string> s2={"a", "bcd", "ef"};
    // vector<string> strings = {"flower", "flow", "flight"};
 if(arrayStringsAreEqual(s1,s2)){
        cout<<"YES"<<endl;
 }   else {
      cout<<"NO"<<endl;
 }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string temp1="";
    string temp2="";
       for(auto i:word1){ temp1+=i; }
       for(auto i:word2){ temp2+=i; }
    // sort(temp1.begin(),temp1.end());
    // sort(temp2.begin(),temp2.end());

      return temp1==temp2;
    }


int main() {
  vector<string>s1 ={"abc", "de", "f"};
  vector<string> s2={"a", "bcd", "ef"};
    // vector<string> strings = {"flower", "flow", "flight"};
 if(arrayStringsAreEqual(s1,s2)){
        cout<<"YES"<<endl;
 }   else {
      cout<<"NO"<<endl;
 }
    return 0;
}
