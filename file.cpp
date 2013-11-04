#include <iostream>
#include <string>
using namespace std;

/*

        CAMBI0
 */
 
 //Propongo le seguenti modifiche:
class B{
	 public:
	 std::string pub ;

	B(string p1="PUB",string p2="PRI",string p3="PRO"):pub(p1),pri(p2),pro(p3){};

	 std::string rpub(){return pub; };
	 std::string rpri(){return pri; };
	 std::string rpro(){return pro; };
	 
	 private:
	 std::string pri ;	 
	 protected:
	 std::string pro ;
};

class D: public B{

	public :
	std::string diff;

	 /*
	 D(string p1="dPUB",string p2="dPRI",string p3="dPRO"):pub(p1),pri(p2),pro(p3){};

	 std::string rpub(){return pub; };
	 std::string rpri(){return pri; };
	 std::string rpro(){return pro; };
	 
	 
	 private:
	 std::string pri ;	 
	 protected:
	 std::string pro ;
	 */
};
int main() {
	
	D d;
	
	d.diff = "Penso di poter modificarlo. Ma forse ci sarà un modo di condividere un progetto";
	
	cout<<d.rpub();
	cout<<d.rpri();
	cout<<d.rpro();

cout<<endl;
	return 0;
}
