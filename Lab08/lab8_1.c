#include<stdio.h>

struct Process {
  int pid;
  int bt;
  int wt, tt;
} p[10];


int main() {
  int n;
  int wt = 0;
  int sum = 0;
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    p[i].pid = i + 1;
    p[i].wt = wt;
    sum += wt;
    scanf("%d", &p[i].bt);
    p[i].tt = p[i].wt + p[i].bt;
    wt += p[i].bt;
  }

  for(int i = 0; i < n; i++) {
    printf("wait time p[%d]: %d\n", i + 1, p[i].wt);
    printf("turn around time p[%d]: %d\n", i + 1, p[i].tt);
  }

  printf("average wait time: %lf\n", (double)sum / n);

}
