//
//  main.cpp
//  10_Stack
//
//  Created by 세광 on 2021/08/10.
//

/*
 스택 기본 함수
 
 [추가 및 삭제]
 - push(element): top에 원소 추가
 - pop(): top에 있는 원소 삭제
 [조회]
 - top(): top(스택의 처음이 아닌 가장 끝)에 있는 원소를 반환
 [기타]
 - empty(): 스택이 비어있으면 true 아니면 false를 반환
 - size(): 스택 사이즈를 반환
 */

#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s; // 스택 생성
    s.push(7);
    s.push(5);
    s.push(4);
    s.pop();
    s.push(6);
    s.pop();
    
    while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
    cout << endl;
}
