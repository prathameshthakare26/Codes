#include <stdio.h>

struct item{
    int item_number, quantity,rate,sr_no;
    char item_name[20];
    float total;
};
int main(){
    int n;
    printf("Enter number of items: ");
    scanf("%d", &n);
    struct item items[n];
     float grand_total = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter serial number: ");
        scanf("%d", &items[i].sr_no);
        printf("Enter item name: ");
        scanf("%s", items[i].item_name);
        printf("Enter quantity: ");
        scanf("%d", &items[i].quantity);
        printf("Enter rate: ");
        scanf("%d", &items[i].rate);
        items[i].total = items[i].quantity * items[i].rate;
       
        grand_total += items[i].total;
    }
    printf("Summary of Items\n");
    printf("Sr. No.\tItem Name\tQuantity\tRate\t\tTotal\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%d\t\t%d\t\t%.2f\n", items[i].sr_no, items[i].item_name, items[i].quantity, items[i].rate, items[i].total);
        
    }
    printf("Grand Total: %.2f\n", grand_total);
    return 0;
}