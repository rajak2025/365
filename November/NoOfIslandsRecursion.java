import java.util.Scanner;

public class NoOfIslandsRecursion {

    public int numIslands(char[][] islandGrid) {

        int h = islandGrid.length;
        if (h == 0)
            return 0;
        int l = islandGrid[0].length;
        int result = 0;
        
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < l; j++) {
                if (islandGrid[i][j] == '1') {
                    DFS(islandGrid, i,  j);
                    result++;
                }
            }
        }
        return result;
    }

    public void DFS(char[][] islandGrid, int row, int col) {

        int H = islandGrid.length;
        int L = islandGrid[0].length;

        if (row < 0 || col < 0 || row >= H || col >= L || islandGrid[row][col] != '1')
            return;
        islandGrid[row][col] = '0'; //marking it visited
        DFS(islandGrid, row+ 1, col); // go right
        DFS(islandGrid, row- 1, col); //go left
        DFS(islandGrid, row, col + 1); //go down
        DFS(islandGrid, row, col - 1); // go up
    }

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        char [][] islandGrid = new char[N][M]; 
        for(int i = 0 ; i < N; i++) {
            for(int j = 0 ; j < M ; j++) {
                islandGrid[i][j] = sc.next().charAt(0);
            }
        }
        NoOfIslandsRecursion noOfIslands = new NoOfIslandsRecursion();
        System.out.println("No of Islands: " + noOfIslands.numIslands(islandGrid));
        
        sc.close();
    }
}