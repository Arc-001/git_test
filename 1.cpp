#include <iostream>

class base{
public:
	base(){
		std::cout<<"This is the base constructor"<<std::endl;
}
};

class derived: public base{
public:
	derived(){
		std::cout<<"This is the derived constructor";
	}
};

int main(){
	derived obj;
	return 0;
}
