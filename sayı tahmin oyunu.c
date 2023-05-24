#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	
	int tahmin, rastgele, attempts = 0;
	
	srand(time(0));
	
	rastgele = rand() % 100 + 1;
	
	printf("1 ile 100 arasinda bir sayi tahmin et\n");
	
	do
	{
		
		printf("sayi tahmininizi giriniz: ");
		scanf("%d", &tahmin);
		
		attempts++;
		
		if(tahmin > rastgele)
		{
			printf("yuksek tahmin ettin dusurmelisin\n");
		}
		else if(tahmin < rastgele)
		{
			printf("dusuk tahmin ettin arttirmalisin\n");
		}
		else 
		{
			printf("tebrikler buldun\n", attempts);
		
		   break;
		}
		
	
		
	}
	
	while(1);
	
	
	
	return 0;
}
