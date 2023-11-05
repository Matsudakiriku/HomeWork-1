#include <stdio.h>
#include <math.h>

int main(void)

{
int a = 5;
 int count = 0;

for (int i = 7; i >= 0; i--)
{

count += 1&(a >> i);

}
printf ("%d",count);

return 0;
}

