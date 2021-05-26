#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>

struct P{
  char name[100];
  int t;
};

const int SIZE = 1000002;
P que[SIZE];
int head, tail, n;

void enqueue(P x){
  que[tail]=x;
  tail = (tail+1)%SIZE;
}

P deque(){
  P tmp = que[head];
  head = (head+1)%SIZE;
  return tmp;
}

int main(){
  int elaps = 0;
  int c,i,q;
  P u;

  std::cin >> n >> q;
  for(int i=1; i<=n; i++){
    std::cin >> que[i].name >> que[i].t;
  }

  head = 1; 
  tail = n+1;

  while(head!=tail){
    u = deque();
    c = std::min(u.t, q); //qまたは必要な時間 u.tだけ処理を行う
    u.t -= c; // 残りの必要時間を計算
    elaps += c; //経過時間を加算
    if(u.t>0) enqueue(u);
    else std::cout << u.name << " " << elaps << std::endl;
  }
  return 0;
}
      

  

