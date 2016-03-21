#include<iostream>
#include<fstream>
#include<math.h>
#include<iomanip>
#include"Bmi.h"

using namespace std;

void Bmi::setHeightWeight(float h,float w){
	height=h;
	weight=w;
}
float Bmi::getBmi(){
	return bmi;
}
void Bmi::calculate(){
	bmi=weight/pow((height/100),2);
}
void Bmi::outputBmi(){
	ofstream output("file.out",ios::app);
	output<<fixed<<setprecision(2)<<bmi<<"\t";
//http://www.programmer-club.com.tw/ShowSameTitleN/cb/17025.html
	if(bmi<18.5){
		if(bmi<16){
			if(bmi<15)
				output<<"Very severely underweight"<<endl;
			else
				output<<"Severely underweight"<<endl;
		}
		else{
			output<<"Underweight"<<endl;
		}
	}
	else{
		if(bmi>25){
			if(bmi>30){
				if(bmi>35){
					if(bmi>=40)
						output<<"Obese Class III (Very severely obese)"<<endl;
					else
						output<<"Obese Class II (Severely obese)"<<endl;
				}
				else{
					output<<"Obese Class I (Moderately obese)"<<endl;
				}
			}
			else{
				output<<"Overweight"<<endl;
			}
		}
		else{
			output<<"Normal"<<endl;
		}
	}
	output.close();
}






