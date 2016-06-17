#include<iostream>
#include<vector>
using namespace std;
using std::vector;
typedef int integer;

enum fruits {apple, peach, banana, orange=1};
void init_vector(){
    vector<fruits> k(5,peach);
    // refer to 3.4, the const_iterator
    for (vector<fruits>::const_iterator iter = k.begin(); iter!=k.end(); ++iter)
        cout<<*iter<<endl;
    cout << k.begin()-k.end() <<endl;
    cout << accumulate(k.begin(), k.end()) << endl;
}
int main(){
    init_vector();
    return 0;
}
