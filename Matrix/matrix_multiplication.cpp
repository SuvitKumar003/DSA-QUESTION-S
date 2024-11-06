int r_a = 4;
    int c_a = 4;
    int r_b = 4;
    int c_b = 4;
    
    // Initialize the result matrix with 0s
    int res[4][4] = {0};
    
    // Check if matrix multiplication is possible
    if (c_a != r_b) {
        return false;  // If the number of columns of A is not equal to the number of rows of B
    }

    // Perform matrix multiplication
    for (int i = 0; i < r_a; i++) {
        for (int j = 0; j < c_b; j++) {
            int sum = 0;
            for (int k = 0; k < c_a; k++) {
                sum += A[i][k] * B[k][j];  // Multiply row i of A with column j of B
            }
            res[i][j] = sum;
        }
    }

    // Compare the result matrix with the expected result
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (res[i][j] != result[i][j]) {
                return false;  // If any element doesn't match, return false
            }
        }
    

    return true;  // If all elements match, return true
}
int main()
{
  
}