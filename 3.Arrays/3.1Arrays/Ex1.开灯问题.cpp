
// 有n盏灯，编号为1~n。第1个人把所有灯打开，第2 个人按下所有编号为2的倍数的开关(这些灯将被关掉)，
// 第3个人按 下所有编号为3的倍数的开关(其中关掉的灯将被打开，开着的灯将被 关闭)，
// 依此类推。一共有k个人，问最后有哪些灯开着?输入n和k， 输出开着的灯的编号。k≤n≤1000。

#include <stdio.h>
#include <string.h>
#define maxn 1010

int main();
int a[maxn];

int main() {
    int n, k, first = 1;     // n为灯的数量, k为人的数量
    memset(a, 0,sizeof(a));  // 目的是把数组a清零
    scanf("%d%d", &n, &k);
    for(int i=1;i<=k;++i) {
        for(int j=1;j<=n;++j) {
            if(j%i == 0) {   // 判断倍数关系
                a[j] = !a[j];
            }
        }
    }
    for(int i=0;i<n;++i) {
        if(a[i]) {
            if(first) {
                first = 0;
            }
            else {
                printf("%d ", i);
            }
        }
    }

}