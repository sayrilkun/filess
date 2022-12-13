
#include <bits/stdc++.h>
using namespace std;
int day_of_week(int y, int m, int d)
{
  static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  y -= m < 3;
  return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

int main()
{
	string str;
	cout << "Enter the date: ";
	cin >> str;
	vector<string> v;

	stringstream ss(str);

	while (ss.good()) {
		string substr;
		getline(ss, substr, '/');
		v.push_back(substr);
	}
    
    cout <<  "Output: ";
    switch(day_of_week(stoi(v[0]),stoi(v[1]),stoi(v[2]))){
        case 0: cout<<"Sunday\n";
        break;
        case 1: cout<<"Monday\n";
        break;
        case 2: cout<<"Tuesday\n";
        break;
        case 3: cout<<"Wednesday\n";
        break;
        case 4: cout<<"Thursday\n";
        break;
        case 5: cout<<"Friday\n";
        break;
        case 6: cout<<"Saturday\n";
        break;
    }
}
