/*Illiterate person in a town*/
#include<stdio.h>
int main(){
  int totalPopulation, malePercent, male_literacy_rate, female_literacy_rate, female_population_rate, total_literacy_rate;
  int male_population, female_population, total_literate_population, male_literate, female_literate, male_illetarate, female_illeterate;
  printf("Enter the population of the town:");
  scanf("%d", &totalPopulation);
  printf("Enter the male percentage rate:");
  scanf("%d", &malePercent);
  printf("Enter the male_literacy_rate: ");
  scanf("%d", &male_literacy_rate);
  printf("Enter the total_literacy_rate:");
  scanf("%d", &total_literacy_rate);
  male_population=(malePercent*totalPopulation)/100;;              //finds total male population
  male_literate=(male_literacy_rate*totalPopulation)/100;          //finds total male literate population
  male_illetarate=(male_population-male_literate);                  //finds total male illeterate population
  female_population=((100-malePercent)/100)*totalPopulation;         //finds total female population
  total_literate_population=(total_literacy_rate/100)*totalPopulation;        //finds total literate population of teh town
  female_literate=total_literate_population-male_literate;                    //finds total female literate population
  female_illeterate=female_population-female_literate;                        //finds total femaale illeterate population
printf("Total female_illeterate:=%d",female_illeterate );
printf("\nTotal male illeterate:=%d", male_illetarate);
}