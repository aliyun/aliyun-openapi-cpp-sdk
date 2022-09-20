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

#ifndef ALIBABACLOUD_MNS_OPEN_MODEL_CREATEQUEUEREQUEST_H_
#define ALIBABACLOUD_MNS_OPEN_MODEL_CREATEQUEUEREQUEST_H_

#include <alibabacloud/mns-open/Mns_openExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mns_open {
namespace Model {
class ALIBABACLOUD_MNS_OPEN_EXPORT CreateQueueRequest : public RpcServiceRequest {
public:
	CreateQueueRequest();
	~CreateQueueRequest();
	std::string getQueueName() const;
	void setQueueName(const std::string &queueName);
	long getMessageRetentionPeriod() const;
	void setMessageRetentionPeriod(long messageRetentionPeriod);
	bool getEnableLogging() const;
	void setEnableLogging(bool enableLogging);
	long getVisibilityTimeout() const;
	void setVisibilityTimeout(long visibilityTimeout);
	long getMaximumMessageSize() const;
	void setMaximumMessageSize(long maximumMessageSize);
	long getDelaySeconds() const;
	void setDelaySeconds(long delaySeconds);
	long getPollingWaitSeconds() const;
	void setPollingWaitSeconds(long pollingWaitSeconds);

private:
	std::string queueName_;
	long messageRetentionPeriod_;
	bool enableLogging_;
	long visibilityTimeout_;
	long maximumMessageSize_;
	long delaySeconds_;
	long pollingWaitSeconds_;
};
} // namespace Model
} // namespace Mns_open
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MNS_OPEN_MODEL_CREATEQUEUEREQUEST_H_
