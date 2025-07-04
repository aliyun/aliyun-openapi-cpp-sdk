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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYCOMPUTEBURSTCONFIGREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYCOMPUTEBURSTCONFIGREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyComputeBurstConfigRequest : public RpcServiceRequest {
public:
	ModifyComputeBurstConfigRequest();
	~ModifyComputeBurstConfigRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getCpuShrinkThreshold() const;
	void setCpuShrinkThreshold(const std::string &cpuShrinkThreshold);
	std::string getBurstStatus() const;
	void setBurstStatus(const std::string &burstStatus);
	std::string getPeriodScaleMemory() const;
	void setPeriodScaleMemory(const std::string &periodScaleMemory);
	std::string getSwitchTimeMode() const;
	void setSwitchTimeMode(const std::string &switchTimeMode);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getPeriodScaleCpus() const;
	void setPeriodScaleCpus(const std::string &periodScaleCpus);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getSwitchTime() const;
	void setSwitchTime(const std::string &switchTime);
	std::string getScaleType() const;
	void setScaleType(const std::string &scaleType);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getMemoryEnlargeThreshold() const;
	void setMemoryEnlargeThreshold(const std::string &memoryEnlargeThreshold);
	std::string getCrontabJobId() const;
	void setCrontabJobId(const std::string &crontabJobId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getScaleMaxMemory() const;
	void setScaleMaxMemory(const std::string &scaleMaxMemory);
	std::string getMemoryShrinkThreshold() const;
	void setMemoryShrinkThreshold(const std::string &memoryShrinkThreshold);
	std::string getScaleMaxCpus() const;
	void setScaleMaxCpus(const std::string &scaleMaxCpus);
	std::string getCpuEnlargeThreshold() const;
	void setCpuEnlargeThreshold(const std::string &cpuEnlargeThreshold);

private:
	std::string clientToken_;
	std::string cpuShrinkThreshold_;
	std::string burstStatus_;
	std::string periodScaleMemory_;
	std::string switchTimeMode_;
	std::string resourceGroupId_;
	std::string periodScaleCpus_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string switchTime_;
	std::string scaleType_;
	std::string taskId_;
	std::string memoryEnlargeThreshold_;
	std::string crontabJobId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string scaleMaxMemory_;
	std::string memoryShrinkThreshold_;
	std::string scaleMaxCpus_;
	std::string cpuEnlargeThreshold_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYCOMPUTEBURSTCONFIGREQUEST_H_
