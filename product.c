#include <stdio.h>
#include <stdlib.h>

struct product{
    char name[50];
    int id;
    int price;
    int quantity;
};

struct product input();
void display(struct product s);

int main(){
    int n;
    struct product *ptr;
    printf("How many products:");
    scanf("%d",&n);
    
    ptr = malloc(n*sizeof(struct product));
    

    for (int i = 0; i < n; i++)
    {
        ptr[i] = input();
    }
    for (int i = 0; i < n; i++)
    {
        display(ptr[i]);
    }

    free(ptr);



}

struct product input(){
    struct product s;
    printf("enter product name:");
    scanf("%s",s.name);
    printf("enter product id:");
    scanf("%d",&s.id);
    printf("enter price:");
    scanf("%d",&s.price);
    printf("enter quantity:");
    scanf("%d",&s.quantity);

    return s;
    
}

void display(struct product s){
    printf("Name:%s\n",s.name);
    printf("id:%d\n",s.id);
    printf("price:%d\n",s.price);
    printf("quantity:%d\n",s.quantity);

}