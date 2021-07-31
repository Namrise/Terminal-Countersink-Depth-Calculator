#include <iostream>
#include <string>
#include <math.h>

using namespace std;

double PI = 3.14159265;

double holeDia, cSinkDia, rise, angle, depth;

void setHoleDia(), setCSinkDia(), setAngle(), calcCosine();

int main() {
	setHoleDia();
	return 0;
}

void setHoleDia() {
	bool on = true;
	while (on) {
		cout << "Hole diameter: ";
		if (!(cin >> holeDia)) {
			string str;
			cin.clear();
			getline(cin, str);
			cout << endl << "'" << str << "'" << " must be a number." << endl << endl;
		}
		else {
			on = false;
			setCSinkDia();
		}
	}
}

void setCSinkDia() {
	bool on = true;
	while (on) {
		cout << "Countersink diameter: ";
		if (!(cin >> cSinkDia)) {
			string str;
			cin.clear();
			getline(cin, str);
			cout << endl << "'" << str << "'" << " must be a number." << endl << endl;
		}
		else {
			on = false;
			setAngle();
		}
	}
}

void setAngle() {
	bool on = true;
	while (on) {
		cout << "Countersink angle: ";
		if (!(cin >> angle)) {
			string str;
			cin.clear();
			getline(cin, str);
			cout << endl << "'" << str << "'" << " must be a number." << endl << endl;
		}
		else {
			on = false;
			calcCosine();
		}
	}
}

void calcCosine() {
	rise = cSinkDia - holeDia;
	depth = rise / 2 / sin(angle / 2 * PI / 180) * cos(angle / 2 * PI / 180);
	cout << "Countersink Depth: " << depth << endl << endl;
	main();
}
