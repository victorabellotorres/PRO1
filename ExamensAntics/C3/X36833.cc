#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string card;
        cin >> card;
        string prev_card = card;

        int count = 0;
        cin >> card;
        while (card != "end") {
            if (card != "multicolor" and card != prev_card) {
                ++count;
                prev_card = card;
            }
            cin >> card;
        }
        cout << count << endl;
    }
}