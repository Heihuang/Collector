/*
 * Collector.h
 *
 *  Created on: Jun 16, 2019
 *      Author: zhou
 */

#ifndef SRC_COLLECTOR_H_
#define SRC_COLLECTOR_H_

#include "Sender.h"

namespace lxh{
class Collector{
public:
	Collector():sender_(nullptr){
		sender_ = new Sender();
	}
	virtual ~Collector(){
		if(sender_){
			delete sender_;
			sender_ = nullptr;
		}
	}
	virtual void Collect() = 0;
protected:
	Sender* sender_;
};
}




#endif /* SRC_COLLECTOR_H_ */
