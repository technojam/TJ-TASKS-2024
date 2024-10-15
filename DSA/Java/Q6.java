public class Q6
 {
    public static long number_spiral(long y, long x) {
       
    }

    public static void main(String[] args) {
        // Default Test Cases
        long[][] test_cases = {
            {2, 3},  // Output: 8
            {1, 1},  // Output: 1
            {4, 2}   // Output: 15
        };

        // Run Test Cases
        for (long[] test_case : test_cases) {
            System.out.println(number_spiral(test_case[0], test_case[1]));
        }
    }
}

// Sample Output:
// 8
// 1
// 15
