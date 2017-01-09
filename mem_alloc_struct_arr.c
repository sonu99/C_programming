#include<stdio.h>
#include<stdlib.h>
typedef struct Empolyee{
    char * Name;
    int    id;
}EMP;

EMP * *mem_struct(EMP * *);
void assign_struct(EMP* *);
void print_struct(EMP* *);

void main()
{
    EMP * sonu[5];
    EMP **sonu_ = NULL;
    sonu_ = mem_struct(sonu);
    assign_struct(sonu_);
    print_struct(sonu_);
}
EMP * * mem_struct(EMP* *sonu_){
    sonu_ = (EMP* *)calloc(sizeof(EMP), 5);
    return sonu_;
}
void assign_struct(EMP* *sonu_){
    int i;
    for(i=0;i<5;i++)
    {
        sonu_ [i]->Name = "sonu";
        sonu_ [i]->id = 99;
    }
}
void print_struct(EMP* *sonu_){
    int i;
    for(i = 0;i < 5;i++ )
    {
        printf("Name:%s\nID:%d\n",sonu_ [i] ->Name,sonu_ [i]->id);
    }
}


#include<stdio.h>
#include<stdlib.h>
typedef struct Empolyee{
    char * Name;
    int    id;
}EMP;

EMP * *mem_struct(EMP * *);
void assign_struct(EMP* *);
void print_struct(EMP* *);

void main()
{
    EMP * sonu[5];
    EMP **sonu_ = NULL;
    sonu_ = mem_struct(sonu);
    assign_struct(sonu_);
    print_struct(sonu_);
}
EMP * * mem_struct(EMP* *sonu_){
    int i;
    for(i = 0; i<5; i++){
        sonu_[i] = (EMP*)malloc(sizeof(EMP));
    }
    return sonu_;
}
void assign_struct(EMP* *sonu_){
    int i;
    for(i=0;i<5;i++)
    {
        sonu_ [i]->Name = "sonu";
        sonu_ [i]->id = 99;
    }
}
void print_struct(EMP* *sonu_){
    int i;
    for(i = 0;i < 5;i++ )
    {
        printf("Name:%s\nID:%d\n",sonu_ [i] ->Name,sonu_ [i]->id);
    }
}


_______________________________no memory leak----------------------------
    #include<stdio.h>
#include<stdlib.h>
typedef struct Empolyee{
    char * Name;
    int    id;
}EMP;

EMP * *mem_struct(EMP * *);
void assign_struct(EMP* *);
void print_struct(EMP* *);

void main()
{
    EMP * sonu[5];
    EMP **sonu_ = NULL;
    sonu_ = mem_struct(sonu);
    assign_struct(sonu_);
    print_struct(sonu_);
}
EMP * * mem_struct(EMP* *sonu_){
    int i;
    for(i = 0; i<5; i++){
        sonu_[i] = (EMP*)malloc(sizeof(EMP));
    }
    return sonu_;
}
void assign_struct(EMP* *sonu_){
    int i;
    for(i=0;i<5;i++)
    {
        sonu_ [i]->Name = "sonu";
        sonu_ [i]->id = 99;
    }
}
void print_struct(EMP* *sonu_){
    int i;
    for(i = 0;i < 5;i++ )
    {
        printf("Name:%s\nID:%d\n",sonu_ [i] ->Name,sonu_ [i]->id);
    }
    for(i = 0;i<5;i++){
        free(sonu_[i]);
    }
}



valgrind --leak-check=full ./a.out



