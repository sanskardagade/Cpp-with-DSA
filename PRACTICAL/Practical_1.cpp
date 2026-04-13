#include <iostream>
#include <vector>
#include <queue>
#include <omp.h>
using namespace std;

// ------------------ PARALLEL BFS (Order-preserving) ------------------
void parallelBFS(vector<vector<int>> &graph, int start) {
    int n = graph.size();
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "\nParallel BFS Traversal: ";

    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> currentLevel;

        // Extract nodes of current level sequentially
        for (int i = 0; i < levelSize; i++) {
            int node = q.front(); q.pop();
            currentLevel.push_back(node);
            cout << node << " ";
        }

        // Push neighbors in parallel while preserving adjacency order
        #pragma omp parallel for
        for (int i = 0; i < currentLevel.size(); i++) {
            int node = currentLevel[i];
            for (int neighbor : graph[node]) {
                if (!visited[neighbor]) {
                    #pragma omp critical
                    {
                        if (!visited[neighbor]) {
                            visited[neighbor] = true;
                            q.push(neighbor);
                        }
                    }
                }
            }
        }
    }
}

// ------------------ PARALLEL DFS (Order-preserving as much as possible) ------------------
void parallelDFSUtil(vector<vector<int>> &graph, int node, vector<bool> &visited) {
    bool alreadyVisited = false;

    #pragma omp critical
    {
        if (visited[node])
            alreadyVisited = true;
        else {
            visited[node] = true;
            cout << node << " ";
        }
    }

    if (alreadyVisited) return;

    for (int i = 0; i < graph[node].size(); i++) {
        int neighbor = graph[node][i];
        #pragma omp task firstprivate(neighbor)
        parallelDFSUtil(graph, neighbor, visited);

        // Wait for this task to finish before starting the next neighbor
        #pragma omp taskwait
    }
}

void parallelDFS(vector<vector<int>> &graph, int start) {
    vector<bool> visited(graph.size(), false);
    cout << "\nParallel DFS Traversal: ";

    #pragma omp parallel
    {
        #pragma omp single
        parallelDFSUtil(graph, start, visited);
    }
}

// ------------------ MAIN ------------------
int main() {
    int n, e;
    cout << "Enter number of vertices: ";
    cin >> n;

    vector<vector<int>> graph(n);

    cout << "Enter number of edges: ";
    cin >> e;

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int start;
    cout << "Enter starting node: ";
    cin >> start;

    parallelBFS(graph, start);
    parallelDFS(graph, start);

    return 0;
}