#include <iostream>
#include <random>
#include <ctime>


using namespace std;

int check(int a, int b){
	if (a == b){
        cout << " You guesed it right! " << endl;
        return true;
    }
    else if(a > b){
        cout << "Guess low" << endl;
    }
    else{
        cout << " guess high " << endl;
    }

    return false;
}

int generator(){
	mt19937 gen(static_cast<unsigned int>(time(0))); // Seed with the current time
    uniform_int_distribution<> dis(1, 100); // Distribution range [1, 100]
    return dis(gen);  // Generate a random number
}


int main(){
    bool guessed = false;
    int y = generator();
    int x;
    while (!guessed){
        cout << "Enter number" << endl;
        cin >> x;
        guessed = check(x, y);
    }
    
    return 0;
}