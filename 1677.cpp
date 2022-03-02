#include <iostream>
using namespace std;
int main()
{
	int n,k;
	scanf("%d %d", &n, &k);
	for(int i=1; i<=k; i++){
		for(int j; j<=n; j++)
		{
			if((i==1)||(i==k)&&(j==1)||(j==n)) printf("+");
			else if((i==1)||(i==k)) printf("-");
			else if((j==1)||(j==n)) printf("|");
			else printf(" ");
		}
		printf("\n");
	}
}