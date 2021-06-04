dp[i] = dp[i] + dp[i - 1];
            answer = max(answer, dp[i]);