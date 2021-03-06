#ifndef __NETWORK_H
#define __NETWORK_H

#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <pthread.h>

#include <sys/types.h>
#include <sys/time.h>

#include <sys/socket.h>
#include <arpa/inet.h>


#define AUDIO_PORT 50001
#define VIDEO_PORT 50002
#define STATE_PORT 50003

#define COMM_CHANNELS 3 // [0]: audio; [1]: video; [2]: state
#define AUDIO 0
#define VIDEO 1
#define STATE 2


/* +++++++ 变量声明 +++++++ */
extern struct sockaddr_in *g_peer_addr[COMM_CHANNELS];
extern int g_udp_sockfd[COMM_CHANNELS];

/* +++++++ 函数声明 +++++++ */
int sock_init(int num, char *peer_ip, unsigned short port);
void wait_each_other(void);

#endif
