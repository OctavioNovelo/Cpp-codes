#include <bits/stdc++.h>

using namespace std;

    int n;
    vector<int> grafo[5001]; /// lista de adyacencia

    struct pos{ /// Estructura para hacer la BFS
        int i; /// nodo del paso actual
        int d; /// distancia en la que se encontro el nodo
        pos(int i, int d) : i(i), d(d) {}
    };

    /// Hacemos la BFS para contar la minima recompensa de todos para la opcion actual
    /// La funcion regresa la suma de recompensas minima para el ganador actual
    int BFS(int gatoGanador){
    vector<char> visitado(n + 2);

    queue<pos> cola;
    cola.push( pos(gatoGanador, 1) ); /// iniciamos con el ganador de todos, con distancia 1
    visitado[gatoGanador] = true;

    int suma, cnt_nodos = suma = 0;
    while(!cola.empty()){
        pos act = cola.front();
        cola.pop();
        suma += act.d; /// sumamos las distancias de cada nodo visitado
        cnt_nodos++; /// y contamos la cantidad de nodos que visitamos
            for(int it : grafo[act.i]){
                if(visitado[it]) continue;
                visitado[it] = true;
                pos nnp(it, act.d + 1);
                cola.push(nnp);
            }
    }

    /// Si i es un ganador total valido, entonces podremos llegar a todos los nodos con la BFS
    /// Esto significa que suma es una posible respuesta
    if(cnt_nodos == n) return suma;
        return INT_MAX;
    }

    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

    cin >> n;

    /// Guardamos el grafo
    for(int i = 1; i <= n; ++i){
        int k; cin >> k;
        grafo[i].reserve(k);
        while(k--){
            int x; cin >> x;
            grafo[x].push_back(i); /// x le puede ganar a i
        }
    }

    int ans = 1e9;
    
    /// Probamos con cada gato como posible ganador
    
    for(int i = 1; i <= n; ++i) ans = min(ans, BFS(i));
        cout << ans << '\n';
}