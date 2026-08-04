#include <stdio.h>
#include <string.h>
#include <math.h>

struct product{
    char name[50];
    int id;
    int price;
    int quantity;
};

struct product input();
void display(struct product s);

int main(){
   
struct product s[3];

for (int i = 0; i < 3; i++)
{
    s[i] = input();
}
for (int i = 0; i < 3; i++)
{
    display(s[i]);
}



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