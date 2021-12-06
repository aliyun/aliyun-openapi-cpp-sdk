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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEENIMONITORDATAREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEENIMONITORDATAREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeEniMonitorDataRequest : public RpcServiceRequest {
public:
	DescribeEniMonitorDataRequest();
	~DescribeEniMonitorDataRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPeriod() const;
	void setPeriod(int period);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getEniId() const;
	void setEniId(const std::string &eniId);

private:
	long resourceOwnerId_;
	std::string startTime_;
	std::string regionId_;
	int period_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string endTime_;
	long ownerId_;
	std::string instanceId_;
	std::string eniId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEENIMONITORDATAREQUEST_H_
