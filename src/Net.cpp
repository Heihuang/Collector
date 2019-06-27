/*
 * Net.cpp
 *
 *  Created on: Jun 26, 2019
 *      Author: zhou
 */

#include "Net.h"

namespace lxh{
Net::Net():sock_fd_(0){
}

Net::~Net(){

}

int Net::InitConn(const char* ip, const unsigned int port){
	struct sockaddr_in s_addr;
	sock_fd_ = socket(AF_INET, SOCK_STREAM, 0);
	bzero(&s_addr, sizeof(s_addr));
	s_addr.sin_family = AF_INET;
	inet_pton(AF_INET, ip, &s_addr.sin_addr);
	s_addr.sin_port = htons(port);
	return connect(sock_fd_, (struct sockaddr *)&s_addr, sizeof(s_addr));
}

void Net::CloseConn(){
	close(sock_fd_);
}

size_t Net::Write(char* data, const size_t len){
	if (data == nullptr || len <= 0){
		return 0;
	}
	return(sock_fd_, data, len);
}

size_t Net::Read(char* buff, size_t len){
	if(buff == nullptr || len <= 0){
		return 0;
	}
	memset((void*)buff, 0, len);
	return read(sock_fd_, buff, len);
}

}


