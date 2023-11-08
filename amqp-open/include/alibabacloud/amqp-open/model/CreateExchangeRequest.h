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

#ifndef ALIBABACLOUD_AMQP_OPEN_MODEL_CREATEEXCHANGEREQUEST_H_
#define ALIBABACLOUD_AMQP_OPEN_MODEL_CREATEEXCHANGEREQUEST_H_

#include <alibabacloud/amqp-open/Amqp_openExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Amqp_open {
namespace Model {
class ALIBABACLOUD_AMQP_OPEN_EXPORT CreateExchangeRequest : public RpcServiceRequest {
public:
	CreateExchangeRequest();
	~CreateExchangeRequest();
	bool getInternal() const;
	void setInternal(bool internal);
	std::string getExchangeName() const;
	void setExchangeName(const std::string &exchangeName);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getAlternateExchange() const;
	void setAlternateExchange(const std::string &alternateExchange);
	bool getAutoDeleteState() const;
	void setAutoDeleteState(bool autoDeleteState);
	std::string getExchangeType() const;
	void setExchangeType(const std::string &exchangeType);
	std::string getVirtualHost() const;
	void setVirtualHost(const std::string &virtualHost);

private:
	bool internal_;
	std::string exchangeName_;
	std::string instanceId_;
	std::string alternateExchange_;
	bool autoDeleteState_;
	std::string exchangeType_;
	std::string virtualHost_;
};
} // namespace Model
} // namespace Amqp_open
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AMQP_OPEN_MODEL_CREATEEXCHANGEREQUEST_H_
