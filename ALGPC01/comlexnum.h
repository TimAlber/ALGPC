#pragma once
class comlexnum
{
private:

	double x; //real
	double y; //imag

public:

	void add(comlexnum complex);
	//write member vars
	comlexnum(double, double);
	void setX(double x);
	void setY(double y);
	//read member vars
	double getX();
	double getY();

	comlexnum();
	~comlexnum();
};

comlexnum::comlexnum(/* args */)
{

}

comlexnum::~comlexnum()
{

}