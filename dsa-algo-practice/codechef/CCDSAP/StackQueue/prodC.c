#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <semaphore.h>
 
struct monitorType
{
	sem_t OkRead;
	sem_t OkWrite;
	int readCount;
	int writeBusy;
	int readRequest;
};
 
struct monitorType monitor;
 
int initialize()
{
	monitor.readCount = 0;
	monitor.writeBusy = 0;
	monitor.readRequest = 0;
 
	if (sem_init(&(monitor.OkRead),0,1) == 0 && sem_init(&(monitor.OkWrite),0,1) == 0)
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
 
void startRead()
{
	if(monitor.writeBusy)
	{
		monitor.readRequest++;
		sem_wait(&(monitor.OkRead));
		monitor.readRequest--;
	}
	monitor.readCount++;
	sem_post(&(monitor.OkRead));
}
 
void endRead()
{
	monitor.readCount--;
	if (monitor.readCount == 0)
		sem_post(&(monitor.OkWrite));
}
 
void startWrite()
{
	if (monitor.readCount !=0 || monitor.writeBusy)
		sem_wait(&(monitor.OkWrite));
	monitor.writeBusy++;
}
 
void endWrite()
{
	monitor.writeBusy--;
	if(monitor.readRequest)
		sem_post(&(monitor.OkRead));
	else
		sem_post(&(monitor.OkWrite));
}
 
void *reader(void *p)
{
	do
	{
		sleep(rand()%2);
		startRead();
		printf("Read\n");
		endRead();
	}while(1);
}
 
void *writer(void *p)
{
	do
	{
		sleep(rand()%2);
		startWrite();
		printf("Write\n");
		endWrite();
	}while(1);
}
 
int main()
{
	if(initialize())
		return 0;
	pthread_t p,c;
	int a = 1;
	pthread_create(&p,NULL,reader,(void*)a);
	pthread_create(&c,NULL,writer,(void*)a);
	pthread_join(p,0);
	pthread_join(c,0);
}