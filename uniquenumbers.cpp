#include <iostream>
#include <string>
#include <unordered_set> 
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_set<string> nums; 
    while(n--) {
        string num;
        cin >> num;
        nums.insert(num); 
    }
    
    cout << nums.size() << endl;
    return 0;
}
