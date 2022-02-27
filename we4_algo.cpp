// 나누어 떨어지는 숫자 배열
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(int i=0; i<arr.size();i++){
        if(arr[i]%divisor==0)
            answer.push_back(arr[i]);
    }
    if(!answer.empty())
        sort(answer.begin(), answer.end());
    else answer.push_back(-1);
    return answer;
}

// 같은 숫자는 싫어
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(arr[0]);
    for(int i=1;i<arr.size();i++){
        if(arr[i-1]!=arr[i])   answer.push_back(arr[i]);
    }
    return answer;
}

// 가운데 글자 가져오기
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    if(s.size()%2==0) answer.push_back(s[s.size()/2-1]);
    answer.push_back(s[s.size()/2]);
    
    return answer;
}
// 부족한 금액 계산하기
using namespace std;

long long solution(int price, int money, int count){
    long answer = 0;

    for(int i=1; i<=count; i++) answer += i*price;
    if (answer > money) answer -= money;
    else answer = 0;

    return answer;
}

// 나머지가 1이 되는 수 찾기
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    for(answer=1;answer<n;answer++){
        if(n%answer==1) break;
    }
    return answer;
}
// 최소직사각형
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int width, height;
    width = height = 0;
    for (auto k : sizes) {
        width = max(width, max(k[0], k[1]));
        height = max(height, min(k[0], k[1]));
    }
    return width * height;
}

