#include<omp.h>
#include<stdio.h>
int main()
{
    #pragma omp parallel
    {
    int thread_id=omp_get_thread_num();
    printf("Hello world from thread %d\n",thread_id);
    }
return 0;
}