#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector <string> queries;
    map <string, int> phoneBook;
    string tempQuery;
    int numFrens;
    cin>>numFrens;
    for(int i; i<numFrens; i++){
        string tempKey;
        int tempVal;
        cin>>tempKey>>tempVal;
        phoneBook[tempKey] = tempVal;
    }
    while(getline(cin, tempQuery)){
        if(tempQuery != ""){
        queries.push_back(tempQuery);    
        }
    }
    
    for(size_t ix = 0; ix<queries.size(); ix++){
        if(phoneBook.find(queries[ix]) == phoneBook.end()){
            cout<<"Not found"<<endl;
        } else {
            cout<<queries[ix]<<"="<<phoneBook[queries[ix]]<<endl;
        }
    }
    return 0;
}