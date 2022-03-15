#include<iostream>
#include<ctime>
using namespace std;

void Monster();

int main() {
	srand(time(NULL));
	while (1) {
		Monster();
		system("pause");
	}
}

void Monster() {
	int num = rand() % 100 + 1;
	if (num <= 20)
		cout << "a short goomba appears!" << endl << endl;
	else if (num <= 40)
		cout << "a koopa trooper attacks you!" << endl << endl;
	else if (num <= 85)
		cout << "Beware of the buzzy beetle!" << endl << endl;
	else
		cout << "a piranha plant is here!" << endl << endl; 
}
