#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

    int mostWordsFound(vector<string>& sentences) {
        int res=0;
       
        for(int i=0;i<sentences.size();i++){ 
               bool f=1; int ans=0;
            for(int j=0;j<sentences[i].size();j++){
                   if(sentences[i][j]!=' '){
                  ans++;
                  while(sentences[i][j]!=' '&&j<sentences[i].size()){
                       j++;
                  }


              }
            
            }
            res=max(res,ans);
             
        }
        return res;
    }


int main() {
  vector<string>v= {"please wait", "continue to fight", "continue to win"};
    // vector<string> strings = {"flower", "flow", "flight"};
    cout << mostWordsFound(v) << endl;
    return 0;
}
