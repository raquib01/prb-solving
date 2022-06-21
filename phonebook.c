#include<stdio.h>
#include<string.h>
struct phonebook{
    char name[100];
    char phone[11];
};
typedef struct phonebook phonebook;
int main(void){
    phonebook list[10];
    int n;
    printf("How many contacts do you want to add(not more than 10): ");
    scanf("%d",&n);
    printf("Enter in this format: \"john 0123456789\"\n");
    for(int i=0;i<n;i++){
        scanf("%s %s",list[i].name,list[i].phone);
    }

    char entry[100];
    int i = 0;
    printf("Enter Name: ");
    scanf("%s",entry);
    while(strcmp(entry,list[i].name)){
        if(i>10){
            printf("Not found\n");
            return 0;
        }
        i++;
    }
    printf("%s %s\n",list[i].name,list[i].phone);
    return 0;
}