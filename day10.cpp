#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    bitset<32> binaryRep(n);
    int in_a_row = 0;
    int longest = 0;
    for(size_t x = 0; x < 32; x++){
        if(binaryRep[x] == 1){
            in_a_row += 1;
        } else {
            if(in_a_row > longest){
                longest = in_a_row;
            }
            in_a_row = 0;
        }
    }
    cout<<longest<<endl;
    return 0;
}
