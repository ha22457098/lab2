#include<iostream>
#include<fstream>
#include<math.h>
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

