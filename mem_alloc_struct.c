#include<stdio.h>
#include<stdlib.h>
typedef struct Empolyee{
    char * Name;
    int    id;
}EMP;

EMP * mem_struct(EMP *);
void assign_struct(EMP *);
void print_struct(EMP *);

void main()
{
    EMP * sonu;
    sonu = mem_struct(sonu);
    assign_struct(sonu);
    print_struct(sonu);
}
EMP * mem_struct(EMP * sonu_){
    sonu_ = (EMP*)malloc(sizeof(EMP));
    return sonu_;
}
void assign_struct(EMP * sonu_){
    sonu_->Name = "sonu";
    sonu_->id = 99;
}
void print_struct(EMP * sonu_){
    printf("Name:%s\nID:%d\n",sonu_->Name,sonu_->id);

}
