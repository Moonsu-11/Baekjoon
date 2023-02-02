#include <iostream>
#include <queue>
using namespace std;

int N, M, V;
int map[1001][1001];
bool visited[1001];
queue<int> q;

void reset() {
    for (int i = 1; i <= N; i++) {
        visited[i] = 0;
    }
}

void dfs(int v) {
    visited[v] = true;
    cout << v << " ";

    for (int i = 1; i <= N; i++) {
        if (map[v][i] == 1 && visited[i] == 0) {
            dfs(i);
        }
    }
}

void bfs(int v) {
    q.push(v); // queue에 값 v 추가
    visited[v] = true;
    cout << v << " ";

    while (!q.empty()) { // queue가 비어있는지 확인하고 채워져있다면 while문
        v = q.front(); // v는 queue의 가장 첫번째 원소 출력
        q.pop(); // queue에 값 제거

        for (int j = 1; j <= N; j++) {
            if (map[v][j] == 1 && visited[j] == 0) { //현재 정점과 연결되어있고 방문되지 않았으면
                q.push(j); // queue에 값 j 추가
                visited[j] = true;
                cout << j << " ";
            }
        }
    }
}

int main() {
    cin >> N >> M >> V;

    for (int i = 0; i < M; i++) {
        int start, end;
        cin >> start >> end;
        map[start][end] = 1;
        map[end][start] = 1;
    }

    reset();
    dfs(V);

    cout << endl;

    reset();
    bfs(V);
}