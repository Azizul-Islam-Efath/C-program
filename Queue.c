#include<stdio.h>
int main() {
    int size, front=-1, rear=-1;
    int choice, value;
    printf("Enter the size of the queue: ");
    scanf("%d", &size);

    int queue[size];

    while(1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice==1) {
            if((rear+1)%size==front) {
                printf("Queue is full\n");
            } else {
                printf("Enter value: ");
                scanf("%d", &value);

                if(front==-1) {
                    front=0;
                }
                rear= (rear+1)%size;
                queue[rear]= value;
            }
        }
        else if(choice==2) {
            if(front==-1) {
                printf("Queue is empty\n");
            } else {
                printf("%d is dequeued from the array\n", queue[front]);
                if(front==rear) {
                    front=-1;
                    rear=-1;
                } else {
                    front=(front+1)%size;
                }
            }
        }
        else if(choice==3) {
            if(front==-1) {
                printf("Queue is empty\n");
            } else {
                int i= front;

                while (1)
                {
                    printf("%d", queue[i]);
                    if(i==rear) {
                        break;
                    }
                    i=(i+1)%size;
                }
                printf("\n");
            }
        }
        else if(choice==4) {
            break;
        }
        else {
            printf("Chocie invalid\n");
        }
    }
    return 0;
}
