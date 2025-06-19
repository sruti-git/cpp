#include <iostream>
using namespace std;
int main() {
    int length,breadth;
    cin >> length >> breadth;
    int ropeLength = 2 * (length + breadth);  // perimeter
    int carpetArea = length * breadth;         // area
    cout << ropeLength << " " << carpetArea;
    return 0;
}
