class Bmi{
	public:
		Bmi(){}
		void setHeightWeight(float h,float w);
		float getBmi();
		void calculate();
		void outputBmi();
	private:
		float height,weight;
		float bmi;
};
