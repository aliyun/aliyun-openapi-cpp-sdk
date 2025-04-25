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

#ifndef ALIBABACLOUD_ESS_MODEL_REMOVEINSTANCESREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_REMOVEINSTANCESREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT RemoveInstancesRequest : public RpcServiceRequest {
public:
	struct LifecycleHookContext {
		bool disableLifecycleHook;
		std::string string;
		std::vector<std::string> ignoredLifecycleHookIds;
	};
	RemoveInstancesRequest();
	~RemoveInstancesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getScalingGroupId() const;
	void setScalingGroupId(const std::string &scalingGroupId);
	LifecycleHookContext getLifecycleHookContext() const;
	void setLifecycleHookContext(const LifecycleHookContext &lifecycleHookContext);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	bool getDecreaseDesiredCapacity() const;
	void setDecreaseDesiredCapacity(bool decreaseDesiredCapacity);
	bool getIgnoreInvalidInstance() const;
	void setIgnoreInvalidInstance(bool ignoreInvalidInstance);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getStopInstanceTimeout() const;
	void setStopInstanceTimeout(int stopInstanceTimeout);
	std::string getRemovePolicy() const;
	void setRemovePolicy(const std::string &removePolicy);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<std::string> getInstanceId() const;
	void setInstanceId(const std::vector<std::string> &instanceId);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string scalingGroupId_;
	LifecycleHookContext lifecycleHookContext_;
	std::string accessKeyId_;
	bool decreaseDesiredCapacity_;
	bool ignoreInvalidInstance_;
	std::string regionId_;
	int stopInstanceTimeout_;
	std::string removePolicy_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::vector<std::string> instanceId_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_REMOVEINSTANCESREQUEST_H_
