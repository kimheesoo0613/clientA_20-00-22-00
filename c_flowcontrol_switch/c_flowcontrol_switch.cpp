

#include <iostream>
using namespace std;


/*
    switch 예약어를 이용한 판단제어구조
*/
int main()
{
    //step_1
    //정수타임, 변수이름은 tA, 초기값은 0
    int tA = 0;
    //tA이름의 변수에 정수값 2를 대입
    tA = 1;

    switch(tA) //switch가 요구하는 것은 정수값이다.
    {
        //해당 정수값에 의해 각각의 케이스로 점프한다
        case 0:
        {
            cout << "tA == 0" << endl;
        }
        break;   //<--- break를 만나면 해당 switch구문 전체를 빠져나간다
        case 1:
        {
            cout << "tA == 1" << endl;
        }
        break;
        case 2:
        {
            cout << "tA == 2" << endl;
        }
        break;
        default:     // 위에 조건들에 맞는 케이스가 없는 경우 기본적으로 이 부분의 구문을 실행한다
        {
            cout << "tA의 값은 0,1,2 가 아니다." << endl;
        }
        break;
    }
    //step_1
    //변수 선언과 초기화
    //정수타임, 변수이름은 tB, 초기값은 0
    int tB = 0;
    //tB변수에 정수값 1를 대입
    tB = 4;


    int tX = 3;
    int tY = 2;
    int tResult = 0;

    tX = 3;
    tY = 2;

    //switch~case~구문을 이용하여 다음을 작성하세요
    //tB의 값이 1인 경우 --> 두 정수의 덧셈의 결과를 출력하세요
    //tB의 값이 2인 경우 --> 두 정수의 뺄셈의 결과를 출력하세요
    //tB의 값이 3인 경우 --> 두 정수의 곱셈의 결과를 출력하세요
    //tB의 값이 4인 경우 --> 두 정수의 나눗셈의 결과를 출력하세요

    switch (tB)
    {
        case 1:
        {
            tResult = tX + tY;
            cout << "addictive" << tResult << endl;
        }
        break;
        case 2:
        {
            tResult = tX - tY;
            cout << "subtract" << tResult << endl;
        }
        break;
        case 3:
        {
            tResult = tX * tY;
            cout << "multiply" << tResult << endl;
        }
        break;
        case 4:
        {
            float tResult_0 = 0.0f;    //상수를 float 실수타입으로
            tResult_0 = (float)tX / (float)tY;
            cout << "divide" << tResult_0 << endl;
        }
        break;
    }

    

    return 0;
}

