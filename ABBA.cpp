#include <bits/stdc++.h>
using namespace  std;

string k(string n, string m) {
	if(n.size()>m.size()) return n;
		else if(m.size()>n.size()) return m;
	else { 
	 	int	i=0;
		while(n[i]!=m[i]) {
			if(n[i]>m[i]){
			return n; break;}
				else
			if(m[i]>n[i]){
			return m; break;}		
			else i++;
		} 
				if(i==n.size()) return n;
	}
}
int main() {
	string a, b, c, d;
	cin >> a >> b >> c;
	d=k(a, b);
	cout << k(d, c) << endl;
}
