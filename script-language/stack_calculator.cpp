#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace	std;

class Statement {
public:
	string	output;				//출력
	string	opstack;			//연산자 스택
	int		oprank(char);		//연산자 우선순위 반환, 기호를 인수로 받음
	void	opstack_push(char);	//연산자 push 함수, 기호를 인수로 받음
	void	opstack_pop(int);	//연산자 pop 함수, 우선순위를 인수로 받음
	void	opstack_popbrack();	//top이 (가 올때까지 pop
	void	express(); 			//식 분석 함수
	void	factor(); 			//피연산자, 괄호 등 분석 함수
};

int main()
{
	return (0);
}
