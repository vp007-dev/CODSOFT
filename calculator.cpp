#include <iostream>

using namespace std;

int add(int num1, int num2){
	cout <<"Add:"<< num1 + num2 << endl;
}

int sub(int num1, int num2){
	cout <<"Subtract:"<< num1 - num2 << endl;

}

int mult(int num1, int num2){
	cout <<"Multiply:"<< num1 * num2 << endl;

}

int divide(int num1, int num2){
	cout <<"divide:"<< num1 / num2 << endl;

}




int main(){
	int x;
	int y;
	string a;
	string ex;
	bool exit = false;
	while(!exit){
		cout << "Enter number 1:" << endl;
		cin >> x;
		cout << "Enter number 2:" << endl;
		cin >> y;
		cout << "Enter operator"<< endl;
		cin >> a;
		if(a == "*"){
			mult(x, y);
		}else if(a == "+"){
			add(x, y);
		}else if(a == "-"){
			sub(x, y);
		}else if (a == "/"){
			div(x, y);
		}
		else{
			cout << "Invalid Operator" << endl;
		}


		cout << "Want to exit calculator yes/no?: " << endl;
		cin >> ex;
		if (ex == "no"){
			exit = false;
		}
		else{
			exit = true;
		}
	}
	

}