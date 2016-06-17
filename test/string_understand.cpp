#include<iostream>
using namespace std;

// extern: declaration but not define
extern string s;

void string_size(){
    string s("happy");
    for (string::size_type i=0; i<s.size(); ++i)
        cout<< s[i];
    cout<< s.length() << " " << s.size() << endl;
    cout<< s.empty() << endl;
    cout<< string::npos <<endl;
    // compare s2
    string s2(5,'h');
    cout<< s2 << " " << (s2>s) << endl;

    //3.2.4 cctype functions, isalnum isalpha isdigit islower toupper tolower, etc.
    for (string::size_type i=0; i<s.size(); ++i)
        s[i] = toupper(s[i]);
    cout<< s << endl;
}

void string_input(){
    string s;
    // getline: no matter s is a blank line or not.
    getline(cin,s);
    cout<<s<<endl;
}

void process_string(){
    string s="hello world!";
    cout<< (s.find('.') == string::npos)<< endl;
    cout<< s.find('!') << endl;
}


int main(){
    //string_size();
    //string_input();
    process_string();
    return 0;
}
