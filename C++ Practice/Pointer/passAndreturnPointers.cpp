# include <iostream>

using namespace std;

typedef int (* FP)(int, int);

int sum(int a, int b)
{

    return a + b;

}


int mod(int a, int b)
{

    return a + b;
}

int execute(int x, int y, FP fp)
{
    int result = (*fp)(x,y);
    return result;
}


int main()
{
    cout<<execute(10,5,sum)<<endl;
    cout<<execute(10,5,mod)<<endl;

    return 0;
}



// Passing Structure

struct employee
{
    char name[4];
    int age;
    float weight;

};

void fun(struct employee);

int main()
{
    struct employee e = {"abc", 20, 55.5};
    struct employee *ptr = &e;
    fun(ptr);

    return 0;

}


void fun(struct employee *obj)
{
    printf("name = %s\n", obj -> name);
    printf("age = %s\n", obj -> age);
    printf("weight = %s\n", obj -> weight);



}