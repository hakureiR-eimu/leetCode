public class Main {
}

class Solution {
    public int change(int amount, int[] coins) {
        int[][] dp = new int[coins.length][amount + 1];
        for (int i = 0; i <= amount; ++i) {
            if (i % coins[0] == 0) dp[0][i] = 1;
        }
        for (int i = 0; i < coins.length; ++i) {
            dp[i][0] = 1;

        }
        for (int i = 1; i < coins.length; ++i) {
            for (int j = 1; j <= amount; ++j) {
                dp[i][j] = dp[i - 1][j];
                if (j - coins[i] >= 0) {
                    dp[i][j] += dp[i][j - coins[i]];
                }
            }
        }
        return dp[coins.length - 1][amount];
    }
}