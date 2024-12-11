#include <stdio.h>

int main (){
	
	//declare variables for the five different products
	int tv, vcr, remote, cd, tape;

	//declare item prices, total_price, subtotal and total_amount as float variables
	float tvCost, vcrCost, remoteCost, cdCost, tapeCost,tax, total_price, subtotal, total;

	//declare constants for the unit prices of the products and the tax rate.
	const float tv_price = 400.00;
	const float vcr_price = 220.00;
	const float remote_price = 35.20;
	const float cd_price  = 300.00;
	const float tape_price = 150.00;
	const float tax_amount = 8.25;
	
	//input the number of tv sold
	printf("How Many TVs Were Sold: ");
	scanf("%d", &tv);
	
	//input the number of vcr sold
	printf("How Many VCRs Were Sold: ");
	scanf("%d", &vcr);

	//input the number of remote controllers sold
	printf("How Many Remote Controllers Were Sold: ");
	scanf("%d", &remote);
	
	//input the number of cd's sold
	printf("How Many CDs Were Sold: ");
	scanf("%d", &cd);

	//input the number of tape recorders sold
	printf("How Many tape recorders Were Sold: ");
	scanf("%d", &tape);

	// Calculate costs
	tvCost = tv * tv_price;
	vcrCost = vcr * vcr_price;
	remoteCost = remote * remote_price;
	cdCost = cd * cd_price;
	tapeCost = tape * tape_price;
	
	//Calculate subtotal
	subtotal = tvCost + vcrCost + remoteCost + cdCost + tapeCost;

	// Calculate tax
    tax = (subtotal * tax_amount) / 100;

	//Calculate total
	total = subtotal + tax;
	
	//Output Customer's receipt
	
	printf("\n\n*** Customer's Receipt ***\n");
    printf("\n%-10s%-25s%-15s%-15s\n", "QTY", "DESCRIPTION", "UNIT PRICE", "TOTAL PRICE");
    printf("-------------------------------------------------------------\n");
    printf("%-10d %-25s$ %-14.2f$ %-14.2f\n", tv, "TVs", tv_price, tvCost);
    printf("%-10d %-25s$ %-14.2f$ %-14.2f\n", vcr, "VCRs", vcr_price, vcrCost);
    printf("%-10d %-25s$ %-14.2f$ %-14.2f\n", remote, "Remote Controllers", remote_price, remoteCost);
    printf("%-10d %-25s$ %-14.2f$ %-14.2f\n", cd, "CDs", cd_price, cdCost);
    printf("%-10d %-25s$ %-14.2f$ %-14.2f\n", tape, "Tape Recorders", tape_price, tapeCost);
    printf("-------------------------------------------------------------\n");
    printf("%-50s$ %-14.2f\n", "Subtotal:", subtotal);
    printf("%-50s$ %-14.2f\n", "Tax:", tax);
    printf("%-50s$ %-14.2f\n", "Total:", total);

	
	

	}
