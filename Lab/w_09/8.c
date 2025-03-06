#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}


void reportStock(char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Cannot open file.\n");
        return;
    }

    int n, date, hr, m, s, amount;
    double price;
    char name[30];

    fscanf(file, "%d", &n);

    Product stock[100];
    int stock_count = 0;

    while (fscanf(file, "%d,%d:%d:%d,%[^,],%d,%lf", 
            &date, &hr, &m, &s, name, &amount, &price) == 7) {
        
        int found = 0;
        for (int i = 0; i < stock_count; i++) {
            if (strcmp(stock[i].name, name) == 0) { //เช็คว่ามีอยู่
                stock[i].amount += amount;
                stock[i].totalCost += price;
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(stock[stock_count].name, name);
            stock[stock_count].amount = amount;
            stock[stock_count].totalCost = price;
            stock_count++;
        }
    }

    fclose(file);
    
    printStock(stock, stock_count);
}


int main()
{
    char filename[20];
    scanf("%s", filename);
    reportStock(filename);
}