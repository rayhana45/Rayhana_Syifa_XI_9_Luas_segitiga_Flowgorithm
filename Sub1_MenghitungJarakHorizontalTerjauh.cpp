#include <bits/stdc++.h>
using namespace std;
// jarak = (v * v * sin (s) ) / 10

int main()
{
	double s, v;
	cin >> s >> v;
	v = v * v;
	float jarak;
	float sinA = sin(2 * s * 3.141 / 180);
	jarak = (v * sinA) / 10;
	cout << fixed << setprecision(2) << jarak;
}
