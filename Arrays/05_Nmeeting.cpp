#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxMeetings(int start[], int end[], int n) {
    vector<vector<int>> temp;
    int ans = 1;
    for (int i = 0; i < n; i++) {
        temp.push_back({start[i], end[i]});
    }
    int i = 1;
    sort(temp.begin(), temp.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    });
    int e = 0;
    while (i < n) {
        if (temp[i][0] > temp[e][1]) {
            ans++;
            e = i;
        }
        i++;
    }
    return ans;
}

int main() {
    int start[] = {1, 3, 0, 5, 8, 5};
    int end[] = {2, 4, 6, 7, 9, 9};
    int n = sizeof(start) / sizeof(start[0]);

    cout << "Maximum number of meetings that can be held: " << maxMeetings(start, end, n) << endl;

    return 0;
}
