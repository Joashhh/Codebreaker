#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> brick;
    int n;
    cin >> n;
    while (n--) {
        int b;
        cin >> b;
        if (brick.empty() || brick.top() > b) {
            brick.push(b);
        } else {
            while (!brick.empty() && brick.top() <= b) {
                brick.pop();
            }
            brick.push(b);
        }
    }
    while (!brick.empty()) {
        cout << brick.top() << " ";
        brick.pop();
        cout << endl;
    }
}
