# Given N towns and M bidirectional roads. Travelling across each road takes exactly 1 day.
# Find out maximal possible time you will need to travel if you start from some town and want to reach nearest city which has a hospital.

# If there is a town, from which you cannot reach to a city with hospital then print "-1"

# Input
# The first line contains two integers N and M , the number of towns and the number of bidirectional roads respectively.
# The second line contains N
#  integers, where each integer is either 0 (city has no hospital), 1 (city has a hospital) representing the presence of an hospital in each town.
# The next M lines each contain two integers u and v , representing a bidirectional road between towns uand v

# Output
# Single integer representing maximal possible time you will need to travel if you start from some town and want to reach nearest city which has a hospital or "-1" if a town is unreachable by any hospital city.

# Examples
# Input
# 6 5
# 1 0 0 0 0 1
# 1 2
# 2 3
# 3 4
# 1 5
# 5 6
# Output
# 3
# Input
# 4 2
# 1 1 0 0
# 1 2
# 3 4
# Output
# -1
# Input
# 4 2
# 1 0 0 1
# 1 2
# 3 4
# Output
# 1

from collections import deque, defaultdict

class Graph:
    def __init__(self, directed=False):
        self.adj_list = defaultdict(list)
        self.directed = directed
    
    def add_edge(self, u, v):
        self.adj_list[u].append(v)
        if not self.directed:
            self.adj_list[v].append(u)
    
    def bfs(self, start_nodes, total_nodes):
        # Dictionary to store distance from start nodes
        distance = {node: float('inf') for node in range(1, total_nodes + 1)}
        
        queue = deque()
        for start in start_nodes:
            queue.append(start)
            distance[start] = 0
        
        while queue:
            current_node = queue.popleft()
            
            for neighbor in self.adj_list[current_node]:
                if distance[neighbor] == float('inf'):  # Unvisited node
                    distance[neighbor] = distance[current_node] + 1
                    queue.append(neighbor)
        
        return distance

def find_max_distance_to_hospital(n, m, hospitals, edges):
    g = Graph(directed=False)
    
    for u, v in edges:
        g.add_edge(u, v)
    
    start_nodes = [i + 1 for i in range(n) if hospitals[i] == 1]
    
    distances = g.bfs(start_nodes, n)
    
    max_distance = -1
    for i in range(1, n + 1):
        if distances[i] == float('inf'):
            print(-1)
            return
        max_distance = max(max_distance, distances[i])
    
    print(max_distance)

def main():
    n, m = map(int, input().split())
    hospitals = list(map(int, input().split()))
    
    edges = []
    for _ in range(m):
        u, v = map(int, input().split())
        edges.append((u, v))
    
    find_max_distance_to_hospital(n, m, hospitals, edges)

if __name__ == "__main__":
    main()
