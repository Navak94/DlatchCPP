#include <iostream>
bool D;
bool E;
bool boolstate;
bool Q;
bool Qnot;
bool output1;
bool output2;

bool andGate(bool Gateinput1, bool Gateinput2) {

	if (Gateinput1 == true && Gateinput2 == true) {
		boolstate = true;
	}
	else {
		boolstate = false;
	}
	return boolstate;
}
bool notGate(bool To_be_notted) {
	if (To_be_notted == true) {
		To_be_notted = false;
	}
	else {
		To_be_notted = true;
	}
	return To_be_notted;
}
bool orGate(bool Gateinput1, bool Gateinput2) {

	if (Gateinput1 == true || Gateinput2 == true) {
		boolstate = true;
	}
	else {
		boolstate = false;
	}
	return boolstate;
}


int main()
{
	while (1) {
	std::cout << "input E value: ";
	std::cin >> E;

	std::cout << "input D value: ";
	std::cin >> D;
	
	output1 = andGate(E, D);
	output2 = andGate(notGate(E), D);

	Q = notGate(orGate(output1, Qnot));
	Qnot = notGate(orGate(output2, Q));

	Q = notGate(Q);
	Qnot = notGate(Qnot); //somehow this is backwards? im tired and confused rn guys


	std::cout << Q << " = Q out\n" << Qnot << "= Qnot out\n";
	std::cout << "Round complete\n ";
	}
	
}

