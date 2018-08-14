#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int largest = 0;
    for(size_t x = 0; x < 4; x++){
        for(size_t ix=0; ix < 4; ix++){
            int total = 0;
            int top = arr[x][ix] + arr[x][ix+1] + arr[x][ix+2];
            int mid = arr[x+1][ix+1];
            int bottom = arr[x+2][ix] + arr[x+2][ix+1] + arr[x+2][ix+2];
            total += top+mid+bottom;
            if(total > largest){
            largest = total;
        }
        }
    }
    cout<<largest<<endl;
    return 0;
}
