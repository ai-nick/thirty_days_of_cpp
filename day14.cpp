#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
  		// Add your code here
    void computeDifference(){
        int max = 0;
        for(size_t i=0;i<this->elements.size(); i++){
            for(size_t i2=i; i2 < this->elements.size(); i2++){
                int diff = this->elements[i] - this->elements[i2];
                if(diff < 0){
                    diff = diff * -1;
                }
                if(diff>max){
                    max = diff;
                }
            }
        }
        this->maximumDifference = max;
    }
    Difference(vector <int> elementArray){
        this->elements = elementArray;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}