#include<iostream>
#include<fstream>
#include"Bmi.h"

using namespace std;

int main(){
	float height,weight;
	Bmi BmiObject;
	ifstream input("file.in",ios::in);
	ofstream output("file.out",ios::trunc);
	output.close();

	while( (input>>height) && (input>>weight) && (weight!=0) ){
		BmiObject.setHeightWeight(height,weight);
		BmiObject.calculate();
		BmiObject.outputBmi();
	}
	input.close();
	return 0;
}
