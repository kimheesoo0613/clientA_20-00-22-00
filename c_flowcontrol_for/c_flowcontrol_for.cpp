

#include <iostream>
using namespace std;

/*
   for예약어를 이용한 반복제어구조

   반복제어구조: 
     '조건문'의 결과값을 만족하는 동안
     임의의 명령문 구문들을 반복하는 제어구조

*/

int main()
{
    //문자열 I am a Good Boy.를 다섯줄 출력하세요.
    //순차처리 구문으로 하시면 됩니다

    cout << "I am a Good Boy." << endl;
    cout << "I am a Good Boy." << endl;
    cout << "I am a Good Boy." << endl;
    cout << "I am a Good Boy." << endl;
    cout << "I am a Good Boy." << endl;

    cout << endl;

    //초기식; 조건식; 증감식;
    for (int i = 0 ; i<5 ; i= i + 1)
    {
        //loop body 반복제어구조의 몸체
        cout << "I am a Good Boy." << endl;
    }

    return 0;
}

