#include <iostream>
#include <vector>
using namespace std;

int zig(vector<int> ar, int n)
{
    int op = 0;
    if (n == 0){
        for (int i = 0; i < ar.size() - 1; i++){
            if (i % 2 == 0){
                if (ar[i] <= ar[i + 1]){
                    op++;
                    while (ar[i + 1] >= ar[i])
                        ar[i + 1] -= 1;
                }
            }
            else{
                if (ar[i] >= ar[i + 1]){
                    op++;
                    while (ar[i] >= ar[i + 1])
                        ar[i] -= 1;
                }
            }
        }
    }

    if (n == 1){
        for (int i = 0; i < ar.size() - 1; i++){
            if (i % 2 == 0){
                if (ar[i] >= ar[i + 1]){
                    op++;
                    while (ar[i] >= ar[i + 1])
                        ar[i] -= 1;
                }
            }
            else{
                if (ar[i] <= ar[i + 1]){
                    op++;
                    while (ar[i + 1] >= ar[i])
                        ar[i + 1] -= 1;
                }
            }
        }
    }
    for (auto e : ar)
        cout << e << " ";
    cout << endl;
    return op;
}
int zigzag(vector<int>& ar){
    int a = zig(ar, 0);
    int b = zig(ar, 1);
    if (a <= b)
        return a;
    return b;
}
int main(){
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    cout << zigzag(ar);
    return 0;
}
