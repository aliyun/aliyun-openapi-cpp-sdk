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

#ifndef ALIBABACLOUD_ESS_MODEL_CREATELIFECYCLEHOOKREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_CREATELIFECYCLEHOOKREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT CreateLifecycleHookRequest : public RpcServiceRequest {
public:
	CreateLifecycleHookRequest();
	~CreateLifecycleHookRequest();
	std::string getDefaultResult() const;
	void setDefaultResult(const std::string &defaultResult);
	int getHeartbeatTimeout() const;
	void setHeartbeatTimeout(int heartbeatTimeout);
	std::string getScalingGroupId() const;
	void setScalingGroupId(const std::string &scalingGroupId);
	std::string getLifecycleTransition() const;
	void setLifecycleTransition(const std::string &lifecycleTransition);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getLifecycleHookName() const;
	void setLifecycleHookName(const std::string &lifecycleHookName);
	std::string getNotificationArn() const;
	void setNotificationArn(const std::string &notificationArn);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getNotificationMetadata() const;
	void setNotificationMetadata(const std::string &notificationMetadata);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	std::string defaultResult_;
	int heartbeatTimeout_;
	std::string scalingGroupId_;
	std::string lifecycleTransition_;
	std::string accessKeyId_;
	std::string lifecycleHookName_;
	std::string notificationArn_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string notificationMetadata_;
	long ownerId_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_CREATELIFECYCLEHOOKREQUEST_H_
