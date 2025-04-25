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

#ifndef ALIBABACLOUD_ESS_MODEL_CREATESCHEDULEDTASKREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_CREATESCHEDULEDTASKREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT CreateScheduledTaskRequest : public RpcServiceRequest {
public:
	CreateScheduledTaskRequest();
	~CreateScheduledTaskRequest();
	std::string getScheduledAction() const;
	void setScheduledAction(const std::string &scheduledAction);
	int getMaxValue() const;
	void setMaxValue(int maxValue);
	std::string getScalingGroupId() const;
	void setScalingGroupId(const std::string &scalingGroupId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getRecurrenceEndTime() const;
	void setRecurrenceEndTime(const std::string &recurrenceEndTime);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getLaunchTime() const;
	void setLaunchTime(const std::string &launchTime);
	int getDesiredCapacity() const;
	void setDesiredCapacity(int desiredCapacity);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getRecurrenceValue() const;
	void setRecurrenceValue(const std::string &recurrenceValue);
	int getLaunchExpirationTime() const;
	void setLaunchExpirationTime(int launchExpirationTime);
	int getMinValue() const;
	void setMinValue(int minValue);
	std::string getScheduledTaskName() const;
	void setScheduledTaskName(const std::string &scheduledTaskName);
	bool getTaskEnabled() const;
	void setTaskEnabled(bool taskEnabled);
	std::string getRecurrenceType() const;
	void setRecurrenceType(const std::string &recurrenceType);

private:
	std::string scheduledAction_;
	int maxValue_;
	std::string scalingGroupId_;
	std::string description_;
	std::string recurrenceEndTime_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string launchTime_;
	int desiredCapacity_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string recurrenceValue_;
	int launchExpirationTime_;
	int minValue_;
	std::string scheduledTaskName_;
	bool taskEnabled_;
	std::string recurrenceType_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_CREATESCHEDULEDTASKREQUEST_H_
