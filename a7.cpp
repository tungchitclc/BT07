#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[100], s2[100];
    int count = 0;
    cout << "Nhap vao xau ki tu thu nhat: ";
    cin >> s1;
    cout << "Nhap vao xau ki tu thu hai: ";
    cin >> s2;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i < len2; i++) {
        if (strncmp(s1, s2 + i, len1) == 0) {
            count++;
        }
    }
    cout << count<< endl;
    return 0;
}
