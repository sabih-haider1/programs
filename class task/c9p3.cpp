#include<iostream>
using namespace std;
int main() 
{
	float f=0, s=0, t=0, fr=0, fif=0,x=0;
	cin >> x;
	f = x;
	cin >> x;
	if (x > f) {
		s = f;
		f = x;
	}
	else {
		s = x;
	}
	cin >> x;
	if (x>f) {
		t = s;
		s = f;
		f = x;
	}
	else if (x > s) {
		fr = t;
		t = s;
		s = x;
	
	}
	else if(x<s) {
		t = x;
	
	}
	cin >> x;
	if (x>f) {
		fif = fr;
		 fr=t;
		 t = s;
		 s = f;
		 f = x;
	
	}
	else if (x>s) {
		fif = fr;
		fr = t;
		t = s;
		s = x;
	}
	else if (x > t) {
	
		fif = fr;
		fr = t;
		t = x;
	
	}
	else if (x > fr) {
		fif = fr;
		fr = x;
	
	}

	cin >> x;
	if (x > f) {
		fif = fr;
		fr = t;
		t = s;
		s = f;
		f = x;

	}
	else if (x > s) {
		fif = fr;
		fr = t;
		t = s;
		s = x;
	}
	else if (x > t) {

		fif = fr;
		fr = t;
		t = x;

	}
	else if (x > fr) {
		fif = fr;
		fr = x;

	}
	else if (x<fr) {
		fif = x;
	}

	cout << f<<"," << s << "," << t << "," << fr << "," << fif;
	return 0;
}