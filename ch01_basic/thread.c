#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

void* myturn(void* args)
{
    while(1)
    {
       sleep(1);
       printf("My Turn\n");
    }
}
void yourturn()
{
    while(1)
    {
       sleep(2);
       printf("Your Turn\n");
    }
}

int main()
{
    pthread_t thread;

    /*
        #include <pthread.h>

        int pthread_create(pthread_t *thread, const pthread_attr_t *attr,
                            void *(*start_routine) (void *), void *arg);

        Compile and link with -pthread.
    */
    pthread_create(&thread,NULL,myturn,NULL);
 
    yourturn();

    return 0;
}
