/*
 * Net.h
 *
 *  Created on: Jun 26, 2019
 *      Author: zhou
 */

#ifndef SRC_NET_H_
#define SRC_NET_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netinet/tcp.h>


namespace lxh{
class Net{
public:
	Net();
	~Net();
	int InitConn(const char* ip, const unsigned int port);
	void CloseConn();
	size_t Write(char* data, const size_t len);
	size_t Read(char* buff, size_t len);
private:
	int sock_fd_;
};

}

#endif /* SRC_NET_H_ */
