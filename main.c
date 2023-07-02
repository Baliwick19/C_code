/* p3_46 world_population_growth */ 

#include <stdio.h>

int main(){
	
	double growth_rate ; 
	int current_year ; 
	unsigned long long int population ; 

	printf("Enter current year, growth rate and current population : "); 
	scanf("%d %lf %lld", &current_year, &growth_rate, &population);
	unsigned long long int population_change = 0 ; 
		
	printf("%5s %15s %20s\n\n", "Year", "Population", "Population change");

	int i = 0 ; 
	while ( i <= 100 ) {
		unsigned long long int temp = population ; 
		printf("%5d  %15lld  %20lld\n", current_year + i, population, population_change);
		population *= growth_rate ;
		population_change = population - temp ; 
		i++ ; 
	}

}
