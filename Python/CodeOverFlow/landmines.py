# There are N cities with M bi-directional roads between them. You want to travel from a given source city to target city. But there are some cities that have landmines in them and you will die if you visit these cities.
# Find the smallest number of roads that you can take to complete your travel without dying. If it is not possible to do so output −1


# Input
# The first line contains two integers N
#  and M
#  denoting the number of cities and the number of roads respectively.

# The second line contains two integers: source and target.

# The third line contains N
#  integers which are either 0
#  or 1
#  denoting whether each city has landmines or not. (1
#  means that the city has landmines.)

# Finally, there are M
#  lines containing 2
#  integers each u
#  and v
#  denoting that there is a road between city u
#  and city v
# .

# Output
# Output the smallest number of roads that you should take to complete your travel without dying. If it is not possible to do so output −1
# .

# Example
# Input
# 5 5
# 0 2
# 0 1 0 0 0
# 0 1
# 1 2
# 0 3
# 3 4
# 4 2
# Output
# 3
# Note
# 1≤N≤10^5
# 0≤M≤2×10^5


from collections import deque, defaultdict

class Graph:
    def __init__(self, n):
        self.adj_list = defaultdict(list)
        self.n = n
    
    def add_edge(self, u, v):
        self.adj_list[u].append(v)
        self.adj_list[v].append(u)
    
    def bfs(self, start, target, landmines):
        if landmines[start] == 1 or landmines[target] == 1:
            return -1
        
        distance = {node: float('inf') for node in range(1, self.n + 1)}
        distance[start] = 0
        
        queue = deque([start])
        
        while queue:
            current_node = queue.popleft()
            
            for neighbor in self.adj_list[current_node]:
                if landmines[neighbor] == 1:
                    continue  # Skip neighbors with landmines
                
                if distance[neighbor] == float('inf'):  # Unvisited node
                    distance[neighbor] = distance[current_node] + 1
                    queue.append(neighbor)
                    
                    if neighbor == target:
                        return distance[neighbor]
        
        return -1 if distance[target] == float('inf') else distance[target]

# Example usage:
if __name__ == "__main__":
    n, m = list(map(int, input().split()))
    source, target = list(map(int, input().split()))
    landmines = list(map(int, input().split()))
    
    g = Graph(n)
    for _ in range(m):
        u, v = map(int, input().split())
        g.add_edge(u, v)
    
    result = g.bfs(source, target, landmines)
    print(result)
