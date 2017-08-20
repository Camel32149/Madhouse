// Mad.cpp : the main program
//
//1:scissors 2:rock 3:paper
#include "API.h"
#include <iostream>
//#include <list>
#include <string>

using namespace std;

//demo:
class camel : public API {
public:
	camel(bool f_flag, int* pe, int* ps) : API(f_flag, pe, ps) {};
	void core() {
		int a,b;
		a = 3;
		b = 1;
		result = (a + b) / 2;
	};
};

class luo : public API {
public:
	luo(bool f_flag, int* pe, int* ps) : API(f_flag, pe, ps) {};
	void core() {
		int a = this->getEnemyLastResult();
		if(a != 1 && a!= 2 && a!= 3){
			result = 1;
		}else{
			result = a;
		}
	};
};

int judge(int player1, int player2){  //0:player1 won 1:player2 won 
									  //2:Draw on both sides
	if(player1 == player2){
		return 2;
	}else if(player1 == 1 && player2 == 2){
		return 1;
	}else if(player1 == 2 && player2 == 3){
		return 1;
	}else{
		return 0;
	}

}

string R(int var){
	if(var == 1){
		return "scissors     ";
	}else if(var == 2){
		return "rock         ";
	}else if(var == 3){
		return "paper        ";
	}
}

int main()
{	
	int pl1[3], pl2[3];
	int ptr = 0;
	//re:
	camel player1(0, &pl2[ptr], &pl1[ptr]);
	luo player2(1, &pl1[ptr], &pl2[ptr]);

	for(ptr; ptr < 3; ptr++){
		player1.core();player2.core();
		pl1[ptr]=player1.result;pl2[ptr]=player2.result;
		player1.ptrS=&pl1[ptr];player1.ptrE=&pl2[ptr];
		player2.ptrS=&pl2[ptr];player2.ptrE=&pl1[ptr];
	}

	cout<<"the result of three rounds:"<<endl;
	for (int i = 0; i < 3; ++i)
	{
		if(judge(pl1[i], pl2[i]) == 0){
			cout<<"player1: "<<R(pl1[i])<<"player2: "<<R(pl2[i])<<"player1 won"<<endl;
		}else if(judge(pl1[i], pl2[i]) == 1){
			cout<<"player1: "<<R(pl1[i])<<"player2: "<<R(pl2[i])<<"player2 won"<<endl;
		}else if(judge(pl1[i], pl2[i]) == 2){
			cout<<"player1: "<<R(pl1[i])<<"player2: "<<R(pl2[i])<<"draw on both sides"<<endl;
		}

	}

    return 0;
}

