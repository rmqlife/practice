#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ret;
    for (int i=0; i<numRows; i++){
        // the first item is always 1
        vector<int> row(1,1);
        // j_th row has i+1 items, but the (i+1)/2 is same
        for (int j=1; j<round(float(i+1)/2); j++)
            row.push_back(ret[i-1][j-1]+ret[i-1][j]);
        for (int j=row.size(); j<i+1; ++j)
            row.push_back(row[i-j]);
        ret.push_back(row);
    }
    return ret;
}

int main(){
    vector<vector<int>> ret = generate(k);
    for (int i=0;i<ret.size();i++)
        cout<<ret[i];
    return 0;
}
