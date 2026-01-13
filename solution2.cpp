#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
	string answer = "";
	stringstream line(s);
	string word;
	vector<string> words;
	while (getline(line, word, ' '))
	{
		words.push_back(word);
	}
	for (int i = 0; i < words.size(); i++)
	{
		for (int j = 0; j < words[i].size(); j++)
		{
			if (j % 2 == 0)
			{
				words[i][j] = toupper(words[i][j]);
			}
			else
			{
				words[i][j] = tolower(words[i][j]);
			}
			if (i+1 < words.size())
			{
				words.push_back(" ");
			}
		}
	}
	return answer;
}