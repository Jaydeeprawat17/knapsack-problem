#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 20

struct Data_items{
 char dname[6];
 int weight,value;
 float profit;
};
struct Knapsack{
 char dname[6];
 int weight,value;
};

void swap(struct Data_items i[max],int s){
   char dname[6];
   int weight,value;
   float profit;


    strcpy(dname,i[s].dname);
    weight= i[s].weight;
    value= i[s].value;
    profit=i[s].profit;

    strcpy(i[s].dname,i[s+1].dname);
    i[s].weight=i[s+1].weight;
    i[s].value=i[s+1].value;
    i[s].profit=i[s+1].profit;

    strcpy(i[s+1].dname,dname);
    i[s+1].weight=weight;
    i[s+1].value=value;
    i[s+1].profit= profit;
}

void bubble_sort(struct Data_items i[max],int length){
  int j,s;
  for(s=1;s<length;s++){
     for(j=0;j<(length-s);j++){
	if(i[j].profit<i[j+1].profit){
	    swap(i,j);
	}
     }
  }

}

void profit(struct Data_items i[max],int length){
  int s;
  for(s=0;s<length;s++){
      i[s].profit=((i[s].value+0.0) /i[s].weight);
  }
}

void fill_knapsack(struct Data_items i[max],int knapsack_weight,int length){
struct Knapsack knapsack[10];
 int s,k,weight;
 float profit=0.0;
     weight=0,k=0;

    for(s=0;s<length;s++){
       if(weight==knapsack_weight)
	  break;

	 if(i[s].weight<=(knapsack_weight-weight)){

	      strcpy(knapsack[k].dname,i[s].dname);
	      knapsack[k].weight=i[s].weight;
	      knapsack[k].value=i[s].value;
	      profit+=knapsack[k].value;
	      weight+=knapsack[k].weight;
	      k++;
	 }else{
	      strcpy(knapsack[k].dname,i[s].dname);
	      knapsack[k].weight=knapsack_weight-weight;

	      knapsack[k].value=i[s].profit*(knapsack_weight-weight);
			 profit+=i[s].profit*(knapsack_weight-weight);

	      weight+=knapsack[k].weight;
	      k++;
	 }
    }

    printf("Total Profit: %0.2f\n",profit);
    for(s=0;s<k;s++){
      printf("%s: %d %d\n",knapsack[s].dname,knapsack[s].weight,knapsack[s].value);
    }

}

void main(){
 int length,s,j,knapsack_weight;
 struct Data_items i[max];

 clrscr();

 printf("Enter Knapsack Total Weight: ");
 scanf("%d",&knapsack_weight);
 printf("Enter No of Data Items: ");
 scanf("%d",&length);
 printf("\nEnter %d Data Items: with Name,weight,value:\n",length);

 for(s=0;s<length;s++){
    printf("Enter %d data item:\n",s+1);
    scanf("%s %d %d",i[s].dname,&i[s].weight,&i[s].value);
    clrscr();
 }
 profit(i,length);
 bubble_sort(i,length);

 for(s=0;s<length;s++){
 printf("%s: %d %d %0.2f\n",i[s].dname,i[s].weight,i[s].value,i[s].profit);
 }
 getch();
 clrscr();
 fill_knapsack(i,knapsack_weight,length);

 getch();

}