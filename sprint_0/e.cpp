#include <iostream>
#include <vector>

using namespace std;

// Если ответ существует, верните вектор из двух элементов
// Если нет - то верните пустой вектор
vector <int> solve(vector <int> arr, int k) {
	// Здесь реализация вашего решения

}

void print(const vector <int> &result) {
	if (result.size() != 2)
		cout << "None" << endl;
	else
		cout << result[0] << " " << result[1] << endl;
}

int main() {
	int n, k;
	cin >> n;
	vector <int> arr(n);
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	cin >> k;
	print(solve(arr, k));
}