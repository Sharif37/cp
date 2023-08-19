#include<bits/stdc++.h>
using namespace std;

void solve()
{
  string s[3];
  cin >> s[0] >> s[1] >> s[2];

  for(int i=0;i<3;i++)
    if(s[i][0]==s[i][1] and s[i][1]==s[i][2] and s[i][2]!='.')
      {
	cout << s[i][0] << endl;
	return;
      }
    else if(s[0][i]==s[1][i] and s[1][i]==s[2][i] and s[2][i]!='.')
      {
	cout << s[0][i] << endl;
	return;
      }

  if(s[0][0] == s[1][1] and s[1][1]==s[2][2] and s[2][2]!='.')
    cout << s[0][0] << endl;
  else if(s[0][2]==s[1][1] and s[1][1]==s[2][0] and s[2][0]!='.')
    cout << s[1][1] << endl;
  else
    cout << "DRAW\n";
}

int main()
{
  int t;
  cin >> t;
  while(t--)
    solve();
  return 0;
}
