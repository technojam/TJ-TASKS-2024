public class Q3 {
    public static int rangeBitwiseAnd(int left, int right) {
       //write your code here 
    }

    public static void main(String[] args) {
        // Default Test Cases
        int[][] testCases = {
            {5, 7},          // Output: 4
            {0, 0},          // Output: 0
            {1, 2147483647}  // Output: 0
        };

        // Run Test Cases
        for (int[] testCase : testCases) {
            System.out.println(rangeBitwiseAnd(testCase[0], testCase[1]));
        }
    }
}

// Sample Output:
// 4
// 0
// 0

