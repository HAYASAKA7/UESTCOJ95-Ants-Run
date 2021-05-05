#include<bits/stdc++.h>
#define max_N 50
#define pi acos(-1.0)
using namespace std;
int main() {
	//	cout<<pi<<endl;
	int T;
	cin >> T;
	while (T--) {
		int N, R, v[max_N], i;
		cin >> N >> R;
		for (i = 1; i <= N; i++) {
			cin >> v[i];
		}
		v[0] = v[N];
		int sum = 0;
		for (i = 1; i <= N; i++) {
			if (v[i] > v[i - 1]) sum += (v[i] - v[i - 1]);
		}
		if (sum == 0) cout << "Inf" << endl;
		else printf("%.3f\n", 2 * pi * R / sum);
	}
	return 0;
}
