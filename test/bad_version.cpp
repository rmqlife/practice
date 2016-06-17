#include<iostream>
using namespace std;
bool isBadVersion(int version){
    return version >= 1702766719;
}
int findRange(int i, int j){
    if (i>=j)
        return i;
    int k = i/2+j/2;
    cout<<i<<","<<j<<","<<k<<endl;
    string s;
    getline(cin,s);
    if (isBadVersion(k))
        return findRange(i,k);
    else // k is not bad version
        return findRange(k+1,j);
}
int firstBadVersion(int n) {
    return findRange(1,n);
}

int main(){
    std::cout << firstBadVersion(2126753390);
    return 0;
}
