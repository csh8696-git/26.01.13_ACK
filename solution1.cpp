#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
	int answer = 0;
	vector<int> triple_numbers;
	vector<int> backwards_numbers;
	while (n)
	{
		triple_numbers.push_back(n % 3);
		n /= 3;
	}
	for (int i = 0; i < triple_numbers.size(); i++)
	{
		backwards_numbers.push_back(triple_numbers[triple_numbers.size() - 1 - i]);
	}
	for (int i = 0; i < backwards_numbers.size(); i++)
	{
		answer += backwards_numbers[i] * pow(3, i);
	}
	return answer;
}

int solution(int n) {
	int answer = 0;
	vector<int> v;
	while (n > 0) {
		v.push_back(n % 3);
		n /= 3;
	}
	int k = 1;
	while (!v.empty()) {
		answer += k * v.back();
		v.pop_back();
		k *= 3;
	}

	return answer;
}
int solution(int n) {
	vector<int> a;
	while (n) {
		a.push_back(n % 3);
		n /= 3;
	}

	int ret = 0;
	for (int i = 0; i < a.size(); ++i) ret = ret * 3 + a[i];
	return ret;
}