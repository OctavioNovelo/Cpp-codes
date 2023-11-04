#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

const int MAX_N = 100001;
vector<pair<int, int>> adj[MAX_N]; // Lista de adyacencia para representar el grafo
vector<long long> resources_from_start(MAX_N, LLONG_MAX); // Arreglo para almacenar recursos desde la isla base (1)
vector<long long> resources_to_end(MAX_N, LLONG_MAX); // Arreglo para almacenar recursos hacia la isla final (N)

void Dijkstra(vector<long long>& resources, int start) {
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0, start});
    resources[start] = 0;

    while (!pq.empty()) {
        long long current_cost = pq.top().first;
        int current = pq.top().second;
        pq.pop();

        if (current_cost > resources[current]) {
            continue;
        }

        for (auto neighbor : adj[current]) {
            int next = neighbor.first;
            int days = neighbor.second;

            if (current_cost + days < resources[next]) {
                resources[next] = current_cost + days;
                pq.push({resources[next], next});
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        adj[A].push_back({B, C});
        adj[B].push_back({A, C});
    }

    Dijkstra(resources_from_start, 1); // Encuentra recursos desde la isla base (1)
    Dijkstra(resources_to_end, N); // Encuentra recursos hacia la isla final (N)

    long long min_resources = LLONG_MAX;

    for (int i = 1; i <= N; i++) {
        // Encuentra el mínimo entre los recursos para llegar a la isla i desde la base (1)
        // y los recursos para llegar a la isla final (N) desde la isla i.
        long long total_resources = resources_from_start[i] + resources_to_end[i];
        min_resources = min(min_resources, total_resources);
    }

    cout << (min_resources / 2) + 1 << endl;

    return 0;
}






