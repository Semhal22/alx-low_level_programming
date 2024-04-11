# 0x1E. C - Search Algorithms
### A search algorithm is an algorithm designed to solve a search problem. The appropriate search algorithm to use often depends on the data structure being searched, and may also include prior knowledge about the data. This project is concerned with implementing some search algorithms(linear and binary in general). In addition to that, identifying space and time complexity of algorithms.
0. Linear search
    * Search for value in an array using Linear search algorithm
    * Print value in array while doing comparison
1. Binary search
    * Search for a value in a sorted array of integers using Binary search algorithm
    * Print array being searched everytime it changes
2. Big O #0
    * What is the time complexity (worst case) of a linear search in an array of size n?
3. Big O #1
    * What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?
4. Big O #2
    * What is the time complexity (worst case) of a binary search in an array of size n?
5. Big O #3
    * What is the space complexity (worst case) of a binary search in an array of size n?
6. Big O #4
    * Space complexity of given algorithm
    * ```int **allocate_map(int n, int m)
	{	
     		int **map;

     		map = malloc(sizeof(int *) * n);
     		for (size_t i = 0; i < n; i++)
     		{
          	map[i] = malloc(sizeof(int) * m);
     		}
     	return (map);
	}
	```
