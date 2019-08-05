#include <stdio.h>
#include <math.h>

int main()
{
int start, end, i, temp1, temp2, r, n = 0, sum = 0;

scanf("%d %d", &start, &end);

for(i = start + 1; i < end; ++i)
{
temp2 = i;
temp1 = i;

while (temp1 != 0)
{
temp1 /= 10;
n++;
}

while (temp2 != 0)
{
r = temp2 % 10;
sum += pow(r, n);
temp2 /= 10;
}

if (sum == i) {
printf("%d ", i);
}

n = 0;
sum = 0;

}
return 0;
}
