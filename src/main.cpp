/*
 * main.cpp
 *
 *  Created on: Jun 16, 2019
 *      Author: zhou
 */
#include "Collector.h"
#include "CltRedisInfo.h"
int main(int argc, char** argv){
	lxh::Collector *ct = new lxh::CltRedisInfo();
	delete ct;
	return 0;
}


