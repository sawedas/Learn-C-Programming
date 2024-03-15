#include <stdio.h>
#include <string.h>

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

void reportStock(char *filename){
    FILE* data;
    int n,i = 0,count = 0,Amount = 0,last = 0,notfind = 1;
    char Pname[30];
    double cost = 0;

    data = fopen(filename,"r");
    fscanf(data,"%d\n",&n);

    Product stock[n];
    while(!feof(data)){
        fseek(data,18,SEEK_CUR);
        fscanf(data,"%30[^,],%d,%lf\n",Pname,&Amount,&cost);
        notfind = 1;
        for(i = 0;i < last;i++){
            if(strcmp(Pname,stock[i].name) == 0){
                stock[i].amount += Amount;
                stock[i].totalCost += cost;
                notfind = 0;
            }
        }
        if(notfind){
            strcpy(stock[last].name,Pname);
            stock[last].amount = Amount;
            stock[last].totalCost = cost;
            last++;
        }
    }
    fclose(data);
    printStock(stock,n);
}


int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    reportStock(filename);
}