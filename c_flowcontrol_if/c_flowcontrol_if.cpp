

#include <iostream>
using namespace std;


//프로그래밍 언어의 가장 기초적인 기본구성요소 3가지
//  타입 type
//  연산자 operator
//  제어구조 flow control : 실행의 흐름을 제어하는 구문들로 만든 구조

//제어구조의 3가지 종류
//  i) 순차처리: 명령문들을 위에서부터 아래대로 차례차례 순서대로 처리한다
//  ii) 판단: 조건문의 결과값에 따라 분기를 타서 처리한다
//  iii) 반복: 조건문의 결과값에 따라 임의의 명령문들을 반복하여 처리한다.



/*
    여러줄 주석
    comment: 설명용도의 텍스트를 코드에 적어둘 수 있게 하는 것

    프로그램 실행파일 ---> 프로세스process
    프로세스: 실행의 흐름 
*/

int main()
{
    //변수 선언과 초기화
    //정수타입, 이름은 tA, 초기값은 3
    //정수타입, 이름은 tB, 초기값은 2
    int tA = 3;
    int tB = 2;


    tB = 3;

    //예약어 reserved keyword: 프로그래밍 언어에서 미리 그 역할이 정해진 단어

    //if'예약어'를 사용한 판단제어구조
    // 조건문 은 참, 거짓 둘 중에 하나의 값을 도출한다
    // == 비교연산자 , 같냐? 라는 의미로 해석하자, 좌변, 우변 모두 값으로 해석
    if (tA == tB)           
    {
        //조건문의 결과가 참인 경우 이 지역의 명령문을 수행
        cout << "tA == tB" << endl;
    }

    //if(조건문)
    // 조건문 은 참, 거짓 둘 중에 하나의 값을 도출한다
    if (tA > tB)//비교연산자 >, 크냐?
    {
        //조건문의 결과가 참인 경우 이 지역의 명령문을 수행
        cout << "tA > tB" << endl;
    }
    else
    {
        //조건문의 결과가 거짓인 경우 이 지역의 명령문을 수행
        cout << "tA <= tB" << endl;
    }
    //if~ else if~ else 구문은
    //위에서부터 아래대로 차레대로 조건문을 평가하다가
    //참인 조건문을 만나면 해당 절을 수행하고
    //구조를 빠져나간다
    tA = 3;
    tB = 2;

    if (tA > tB)
    {
        cout << "tA > tB" << endl;
    }
    else if(tA < tB)
    {
        cout << "tA < tB" << endl;
    }
    else
    {
        cout << "tA == tB" << endl;
    }


    //다음 문단은 위와 같은 기능이지만,
    //구문의 특성에 따라 위에 if~ else if~ else~ 구문이 좀더 효율적일 수 있다.
    if(tA > tB)
    {
        cout << "tA > tB" << endl;
    }
    if(tA < tB)
    {
        cout << "tA < tB" << endl;
    }
    if(tA == tB)
    {
        cout << "tA == tB" << endl;
    }

    return 0;
}


