/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_AMQP_OPEN_MODEL_LISTQUEUECONSUMERSREQUEST_H_
#define ALIBABACLOUD_AMQP_OPEN_MODEL_LISTQUEUECONSUMERSREQUEST_H_

#include <alibabacloud/amqp-open/Amqp_openExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Amqp_open {
namespace Model {
class ALIBABACLOUD_AMQP_OPEN_EXPORT ListQueueConsumersRequest : public RpcServiceRequest {
public:
	ListQueueConsumersRequest();
	~ListQueueConsumersRequest();
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getQueryCount() const;
	void setQueryCount(int queryCount);
	std::string getVirtualHost() const;
	void setVirtualHost(const std::string &virtualHost);
	std::string getQueue() const;
	void setQueue(const std::string &queue);

private:
	std::string instanceId_;
	std::string nextToken_;
	int queryCount_;
	std::string virtualHost_;
	std::string queue_;
};
} // namespace Model
} // namespace Amqp_open
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AMQP_OPEN_MODEL_LISTQUEUECONSUMERSREQUEST_H_
