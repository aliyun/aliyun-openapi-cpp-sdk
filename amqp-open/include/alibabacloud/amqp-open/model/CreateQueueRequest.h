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

#ifndef ALIBABACLOUD_AMQP_OPEN_MODEL_CREATEQUEUEREQUEST_H_
#define ALIBABACLOUD_AMQP_OPEN_MODEL_CREATEQUEUEREQUEST_H_

#include <alibabacloud/amqp-open/Amqp_openExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Amqp_open {
namespace Model {
class ALIBABACLOUD_AMQP_OPEN_EXPORT CreateQueueRequest : public RpcServiceRequest {
public:
	CreateQueueRequest();
	~CreateQueueRequest();
	std::string getQueueName() const;
	void setQueueName(const std::string &queueName);
	std::string getDeadLetterRoutingKey() const;
	void setDeadLetterRoutingKey(const std::string &deadLetterRoutingKey);
	long getMaxLength() const;
	void setMaxLength(long maxLength);
	long getAutoExpireState() const;
	void setAutoExpireState(long autoExpireState);
	std::string getDeadLetterExchange() const;
	void setDeadLetterExchange(const std::string &deadLetterExchange);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	bool getExclusiveState() const;
	void setExclusiveState(bool exclusiveState);
	bool getAutoDeleteState() const;
	void setAutoDeleteState(bool autoDeleteState);
	long getMessageTTL() const;
	void setMessageTTL(long messageTTL);
	std::string getVirtualHost() const;
	void setVirtualHost(const std::string &virtualHost);
	int getMaximumPriority() const;
	void setMaximumPriority(int maximumPriority);

private:
	std::string queueName_;
	std::string deadLetterRoutingKey_;
	long maxLength_;
	long autoExpireState_;
	std::string deadLetterExchange_;
	std::string instanceId_;
	bool exclusiveState_;
	bool autoDeleteState_;
	long messageTTL_;
	std::string virtualHost_;
	int maximumPriority_;
};
} // namespace Model
} // namespace Amqp_open
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AMQP_OPEN_MODEL_CREATEQUEUEREQUEST_H_
