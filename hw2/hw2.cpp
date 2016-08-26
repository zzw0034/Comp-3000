/*
 *  * filename:hw2.cpp
 *   * Author: Zhuonan Wang
 *    * Auburn UserID: zzw0034
 *     * Development Environment: vi g++ Linux
 *        Compile: g++ -o hw2 hw2.cpp
 *           Sample usage: ./hw2
 *            */


#include <iostream>
using namespace std;

int main()
{
	const double RATE = 0.001;
	double lethalKillMouse, mouseWeight, yourWeight, soda;

	cout << "What is the amount of artificial sweetener needed to kill a mouse:";
	cin >> lethalKillMouse;

	cout << "\nWhat is the weight of the mouse:";
	cin >> mouseWeight;

	cout << "\nWhat is the weight of the dieter:";
	cin >> yourWeight;

	soda = lethalKillMouse/mouseWeight*yourWeight/RATE;

	cout  << "\nYou can drink "<< soda << " diet soda without dying as a result.";

	return 0;

}

