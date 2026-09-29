#include<stdio.h>
#include <omp.h>

int main(){
    int num_iteration;
    printf("enter the number odf itration : ");
    scanf("%d",&num_iteration);
    #pragma omp parallel
    {
        #pragma omp for schedule(static,2)
        for (int i= 0; i<num_iteration;i++) {
            printf("thread %d: Itration %d\n", omp_get_thread_num(),i);
        }

        }
        return 0;
    

    }
