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

#ifndef ALIBABACLOUD_AMQP_OPEN_MODEL_CREATEBINDINGREQUEST_H_
#define ALIBABACLOUD_AMQP_OPEN_MODEL_CREATEBINDINGREQUEST_H_

#include <alibabacloud/amqp-open/Amqp_openExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Amqp_open {
namespace Model {
class ALIBABACLOUD_AMQP_OPEN_EXPORT CreateBindingRequest : public RpcServiceRequest {
public:
	CreateBindingRequest();
	~CreateBindingRequest();
	std::string getArgument() const;
	void setArgument(const std::string &argument);
	std::string getDestinationName() const;
	void setDestinationName(const std::string &destinationName);
	std::string getSourceExchange() const;
	void setSourceExchange(const std::string &sourceExchange);
	std::string getBindingKey() const;
	void setBindingKey(const std::string &bindingKey);
	std::string getBindingType() const;
	void setBindingType(const std::string &bindingType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getVirtualHost() const;
	void setVirtualHost(const std::string &virtualHost);

private:
	std::string argument_;
	std::string destinationName_;
	std::string sourceExchange_;
	std::string bindingKey_;
	std::string bindingType_;
	std::string instanceId_;
	std::string virtualHost_;
};
} // namespace Model
} // namespace Amqp_open
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AMQP_OPEN_MODEL_CREATEBINDINGREQUEST_H_
