#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdio.h>
using namespace std;
string findLastAWord(const string s)
{
	string str = s;
	int a = 0;
	int tmp = 0;
	for (int i = str.size(); i >= 0; i--) {
		if (str[i] == ' ') {
			if (str[i + 1] == 'a') {
				a = i + 1;
				int len1 = i;
				str.erase(0, len1+1);
				for (int j = str.size(); j >= 0; j--) {
					if (str[j] == ' ') {
						int len2 = str.size() - j;
						str.erase(j, len2+1);
						break;
					}
				}
				break;
			}
		}
	}
	return str;
}

string readFile(string path) {
	string s;
	getline(ifstream(path), s, '\0');
	return s;
}

void edit(string filename) {
	string fileContent = readFile(filename);

	string result = findLastAWord(fileContent);
	
	fstream f(filename, ios_base::out);

    if (f.is_open()){
		f << result;
		f.close();
	}
}


int main()
{
	string filename = "1.txt";
	edit(filename);
	return 0;

}


