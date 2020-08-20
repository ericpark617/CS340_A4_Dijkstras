# CS340 Asignment 4: Dijkstra's Algorithm

This program takes a representation of a graph using distances between vertices and calculates the minimum cost from the source to each vertex in the graph.

# Repository Contents
- /Code_Files - Folder containing all the C++ files
- output.log - log of the output window running the program
- example.png - image used in this readme for demonstrative purposes.
- README.md - this readme file

# Usage
1. Compile and run the program using all the files in `Code_Files`.
2. Set the `vertexCount` in `dijkstras.h` to the number of vertices that are in your graph.
3. Input the distances from the source to each vertex in order.
  - Example: \
  Given such a graph: \
  ![alt text](https://github.com/ericpark617/CS340_A4_Dijkstras/blob/master/example.png?raw=true) \
  the input will be: 0 2 3 0 \ 0 0 1 4 \ 0 0 0 2 \ 0 0 0 0 (with `\` representing enter)
4. The output will show all minimum distances from the source to all the vertices in the graph.
