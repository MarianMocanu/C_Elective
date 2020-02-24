#include <stdio.h>
#include <stdlib.h>
#define MAXMSG 2

struct Message
{
    unsigned char data[7];
    unsigned char len;
};

void printMessage(struct Message myMsg)
{
    struct Message *msg_ptr;
    msg_ptr = &myMsg;
    for (int i = 0; i < sizeof(msg_ptr->data); i++)
    {
        printf("msg_ptr->data[%d] = %d\n", i, msg_ptr->data[i]);
    }
}

int main()
{
    struct Message msg[MAXMSG] =
        {
            {{0xFF, 0, 0xFF, 0, 0, 0, 0}, 3},
            {{0, 0, 0, 0, 0, 0, 0}, 3}};
    for (int i = 0; i < MAXMSG; i++)
    {
        printf("\nThis is message number %d:\n", i + 1);
        printMessage(msg[i]);
    }

    return 0;
}