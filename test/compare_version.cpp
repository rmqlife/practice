#include<iostream>
#include"stdlib.h"
using namespace std;
int compareVersion(string version1, string version2) {
    cout<< version1 << endl;
    cout<< version2 << endl;
    if (version1 == "" && version2 == "")
        return 0;
    if (version1=="")
        version1="0";
    if (version2=="")
        version2="0";
    string::size_type b1=0, t1=0, e1=0;
    string::size_type b2=0, t2=0, e2=0;

    t1 = version1.find('.');
    t2 = version2.find('.');
    e1 = t1==string::npos ? version1.size() : t1+1;
    e2 = t2==string::npos ? version2.size() : t2+1;
    t1 = t1==string::npos ? version1.size() : t1;
    t2 = t2==string::npos ? version2.size() : t2;

    string s1=version1.substr(b1,t1);
    string s2=version2.substr(b2,t2);

    int n1=atoi(s1.c_str());
    int n2=atoi(s2.c_str());

    cout<< s1 << endl;
    cout<< s2 << endl;

    if (n1>n2)
        return 1;
    else if (n1<n2)
        return -1;
    else
        return compareVersion(version1.substr(e1, version1.size()), version2.substr(e2, version2.size()));
}

int main(){
    cout<<"ans:"<<compareVersion("0.11324.01234","0.11324.1234");
    return 0;
}
