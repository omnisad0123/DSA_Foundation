#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int countSeniors(vector<string>& details) {
        int ans=0;
        for(int i=0;i<details.size();i++){
              char c1=details[i][11];
              char c2=details[i][12];
             string s="";
             s+=c1; s+=c2;
             if(stoi(s)>60){
                  ans++;
             }
        }
        return ans;
    }

int main() {
  vector<string>s1 ={"7868190130M7522","5303914400F9211","9273338290F4010"};
    cout<<countSeniors(s1)<<endl;
    return 0;
}
