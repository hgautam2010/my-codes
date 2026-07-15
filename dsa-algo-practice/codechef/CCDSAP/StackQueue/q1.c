#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>

struct monitorType
{
	sem_t OkProduce;
	sem_t OkConsume;
	sem_t Busy;
	int current;
	int size;
};

struct monitorType monitor;

int initialize(int k)
{
	monitor.size = k;

	if (sem_init(&(monitor.Busy),0,1) == 0 && sem_init(&(monitor.OkProduce),0,k) == 0 && sem_init(&(monitor.OkConsume),0,0) == 0)
	{
		printf("Initialized\n");
		return 0;
	}
	else
	{
		printf("Unable to initialize.\n");
		return 1;
	}
}

void startConsume()
{
	sem_wait(&(monitor.OkConsume));
	sem_wait(&(monitor.Busy));
}

void consume()
{
	monitor.current--;
}

void endConsume()
{
	sem_post(&(monitor.Busy));
	sem_post(&(monitor.OkProduce));
}

void startProduce()
{
	sem_wait(&(monitor.OkProduce));
	sem_wait(&(monitor.Busy));
}

void produce()
{
	monitor.current++;
}

void endProdece()
{
	sem_post(&(monitor.Busy));
	sem_post(&(monitor.OkConsume));
}

void *producer(void *p)
{
	do
	{
		sleep(rand()%2);
		startProduce();
		produce();
		printf("Item produced %d.\n", monitor.current);
		endProdece();
	}while(1);
}

void *consumer(void *p)
{
	do
	{
		sleep(rand()%2);
		startConsume();
		consume();
		printf("Item consumed %d.\n", monitor.current);
		endConsume();
	}while(1);
}

int main(int argc, char const *argv[])
{
	if(initialize(10))
		return 0;
	
	pthread_t p,c;
	int a = 1;
	pthread_create(&p,NULL,producer,(void*)a);
	pthread_create(&c,NULL,consumer,(void*)a);
	pthread_join(p,0);
	pthread_join(c,0);

	return 0;
}