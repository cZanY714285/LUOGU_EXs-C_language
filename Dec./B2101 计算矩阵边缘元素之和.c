# include <stdio.h>
# include <math.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);

    int sum = 0;

    int arr[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d",&arr[i][j]);

            if (i == 0 || i == n - 1) {
                sum += arr[i][j];
            }if (j == 0 || j == m - 1) {
                sum += arr[i][j];
            }if ((i == 0 || i == n - 1) &&  (j == 0 || j == m - 1)) {
                sum -= arr[i][j];
            }
        }
    }
    printf("%d",sum);
    return 0;
}