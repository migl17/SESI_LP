int num;
long long fat = 1;
printf("Digite um numero: ");
scanf("%d", &num);
for(int i = num; i > 1; i--) fat *= i;
printf("Fatorial: %lld", fat);