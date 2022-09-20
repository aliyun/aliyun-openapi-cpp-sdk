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

#ifndef ALIBABACLOUD_MNS_OPEN_MODEL_SUBSCRIBEREQUEST_H_
#define ALIBABACLOUD_MNS_OPEN_MODEL_SUBSCRIBEREQUEST_H_

#include <alibabacloud/mns-open/Mns_openExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mns_open {
namespace Model {
class ALIBABACLOUD_MNS_OPEN_EXPORT SubscribeRequest : public RpcServiceRequest {
public:
	SubscribeRequest();
	~SubscribeRequest();
	std::string getTopicName() const;
	void setTopicName(const std::string &topicName);
	std::string getMessageTag() const;
	void setMessageTag(const std::string &messageTag);
	std::string getEndpoint() const;
	void setEndpoint(const std::string &endpoint);
	std::string getSubscriptionName() const;
	void setSubscriptionName(const std::string &subscriptionName);
	std::string getNotifyStrategy() const;
	void setNotifyStrategy(const std::string &notifyStrategy);
	std::string getNotifyContentFormat() const;
	void setNotifyContentFormat(const std::string &notifyContentFormat);
	std::string getPushType() const;
	void setPushType(const std::string &pushType);

private:
	std::string topicName_;
	std::string messageTag_;
	std::string endpoint_;
	std::string subscriptionName_;
	std::string notifyStrategy_;
	std::string notifyContentFormat_;
	std::string pushType_;
};
} // namespace Model
} // namespace Mns_open
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MNS_OPEN_MODEL_SUBSCRIBEREQUEST_H_
