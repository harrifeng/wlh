#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
    int n, k;
    while (scanf("%d%d", &n,&k ) != EOF) {
        int arr[100000] = {0};
        for (int i = 0; i < n; i++) {
            int cur;
            scanf("%d", &cur);
            arr[cur]++;
        }
        int cnt = 0;
        for (int i = 0; i < 100000; i++) {
            if (arr[i] > 0) {
                cnt += 1;
            }
        }
        if (k <= (n - cnt)) {
            cout << cnt << endl;
        } else {
            cout << n - k << endl;
        }
    }
    return 0;
}
