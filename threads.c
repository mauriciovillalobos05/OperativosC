#include <stdio.h>
#include <pthread.h>

void * printHello(void *arg){
  int hid=*((int *)arg);
  print("hola desde el hilo %d\n",hid);
  phtread_exit(NULL);
}

int main(){
  int num_threads=20;
  pthread_t threadStatus[num_threads];
  int hids[NUM_THREADS];
  for(int i=0;i<num_threads;i++){
    hids[i]=i
    pthread_create(&threadStatus[i],NULL,printHello,NULL,(void *)&hids[i]);
  }
  pthread_exit(NULL);
}
