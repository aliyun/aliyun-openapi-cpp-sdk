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

#ifndef ALIBABACLOUD_POLARDB_MODEL_CREATECRONJOBPOLICYSERVERLESSREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_CREATECRONJOBPOLICYSERVERLESSREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT CreateCronJobPolicyServerlessRequest : public RpcServiceRequest {
public:
	CreateCronJobPolicyServerlessRequest();
	~CreateCronJobPolicyServerlessRequest();
	std::string getScaleRoNumMax() const;
	void setScaleRoNumMax(const std::string &scaleRoNumMax);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCronExpression() const;
	void setCronExpression(const std::string &cronExpression);
	std::string getServerlessRuleMode() const;
	void setServerlessRuleMode(const std::string &serverlessRuleMode);
	std::string getScaleApRoNumMax() const;
	void setScaleApRoNumMax(const std::string &scaleApRoNumMax);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getScaleMax() const;
	void setScaleMax(const std::string &scaleMax);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getServerlessRuleCpuEnlargeThreshold() const;
	void setServerlessRuleCpuEnlargeThreshold(const std::string &serverlessRuleCpuEnlargeThreshold);
	std::string getSecondsUntilAutoPause() const;
	void setSecondsUntilAutoPause(const std::string &secondsUntilAutoPause);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getScaleApRoNumMin() const;
	void setScaleApRoNumMin(const std::string &scaleApRoNumMin);
	std::string getScaleMin() const;
	void setScaleMin(const std::string &scaleMin);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getServerlessRuleCpuShrinkThreshold() const;
	void setServerlessRuleCpuShrinkThreshold(const std::string &serverlessRuleCpuShrinkThreshold);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getScaleRoNumMin() const;
	void setScaleRoNumMin(const std::string &scaleRoNumMin);
	std::string getAllowShutDown() const;
	void setAllowShutDown(const std::string &allowShutDown);

private:
	std::string scaleRoNumMax_;
	long resourceOwnerId_;
	std::string cronExpression_;
	std::string serverlessRuleMode_;
	std::string scaleApRoNumMax_;
	std::string startTime_;
	std::string scaleMax_;
	std::string accessKeyId_;
	std::string serverlessRuleCpuEnlargeThreshold_;
	std::string secondsUntilAutoPause_;
	std::string regionId_;
	std::string scaleApRoNumMin_;
	std::string scaleMin_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	std::string endTime_;
	std::string serverlessRuleCpuShrinkThreshold_;
	long ownerId_;
	std::string scaleRoNumMin_;
	std::string allowShutDown_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_CREATECRONJOBPOLICYSERVERLESSREQUEST_H_
