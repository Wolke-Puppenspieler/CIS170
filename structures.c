//structures and records
#include<stdio.h>

struct Inventory
	{
		int partNumber;
		int qty;
		float price;
	};

void getData(struct Inventory parts[]);
void displayData(struct Inventory parts[]);
int main()
	{
          int i=0;
	struct Inventory parts[3];
	//struct Inventory part; //some compilers require struct 
	struct Inventory part, partA={222,7,5.00};
	
	getData(&parts);
	displayData(&parts);
	
	for(i=0;i<3;++i)
		{
			printf("\n %d \t %d \t %.2f",parts[i].partNumber,parts[i].qty,parts[i].price);
		}
	part.partNumber=123;
	part.qty=10;
	part.price=15.00;
	printf("\n %d \t %d \t %.2f",part.partNumber,part.qty,part.price);
	printf("\n %d \t %d \t %.2f",partA.partNumber,partA.qty,partA.price);
	getch();
	return 0;
	}	

void getData(struct Inventory parts[])
	{
	int i=0;
	for(i=0;i<3;++i)
		{
			printf("enter a part #");
			scanf("%d", &parts[i].partNumber);
			printf("\nenter a quantity");
			scanf("%d", &parts[i].qty);
			printf("\nenter a price");
			scanf("%f", &parts[i].price);
		}
	}

void displayData(struct Inventory parts[])
	{
		int i=0;
		for(i=0;i<3;++i)
			{
				printf("\n %d \t %d", parts->partNumber, parts->qty);
				parts++;
			}
		//address->fields
	}
