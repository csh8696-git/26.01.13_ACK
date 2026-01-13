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