#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
	string answer = s;
	int index = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
		{
			index = 0;
			answer[i] = ' ';
		}
		else
		{
			if (index % 2 == 0)
				answer[i] = toupper(s[i]);
			else
				answer[i] = tolower(s[i]);
			index++;
		}
	}

	return answer;
}

string solution(string s) {
	string answer = "";
	int nIndex = 1;
	for (int i = 0; i < s.size(); i++, nIndex++)
	{
		if (s[i] == ' ')
		{
			nIndex = 0;
			answer += " ";
		}
		else
			nIndex & 1 ? answer += toupper(s[i]) : answer += tolower(s[i]);
	}

	return answer;
}

string solution(string s) {
	string answer;
	int c = 2;
	//모르겠다 꾀꼬리 꾀꼬리 나는야 아기상어
	 //모르겟다 꾀꼬리 꾀꼬리 꾀꼬리 문자열 어렵따
	int i;
	for (i = 0; i <= s.size(); i++) {
		if (c % 2 == 0) {
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
			else if (s[i] == 32)
				c = 1;

		}
		else {
			if (s[i] >= 65 && s[i] <= 90)
				s[i] = s[i] + 32;
			else if (s[i] == 32)
				c = 1;
		}
		c++;
	}
	answer = s;

	return answer;
}