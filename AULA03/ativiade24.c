int n, divisores = 0;
scanf("%d", &n);
for(int i = 1; i <= n; i++) if(n % i == 0) divisores++;
if(divisores == 2) printf("E primo");
else printf("Nao e primo");