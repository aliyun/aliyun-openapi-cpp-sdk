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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYDISKSPECREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYDISKSPECREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyDiskSpecRequest : public RpcServiceRequest {
public:
	struct PerformanceControlOptions {
		int iOPS;
		int throughput;
		std::string recover;
	};
	ModifyDiskSpecRequest();
	~ModifyDiskSpecRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDestinationZoneId() const;
	void setDestinationZoneId(const std::string &destinationZoneId);
	std::string getDiskCategory() const;
	void setDiskCategory(const std::string &diskCategory);
	std::string getDiskId() const;
	void setDiskId(const std::string &diskId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getPerformanceLevel() const;
	void setPerformanceLevel(const std::string &performanceLevel);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	PerformanceControlOptions getPerformanceControlOptions() const;
	void setPerformanceControlOptions(const PerformanceControlOptions &performanceControlOptions);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	long getProvisionedIops() const;
	void setProvisionedIops(long provisionedIops);

private:
	long resourceOwnerId_;
	std::string destinationZoneId_;
	std::string diskCategory_;
	std::string diskId_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string performanceLevel_;
	std::string ownerAccount_;
	PerformanceControlOptions performanceControlOptions_;
	long ownerId_;
	long provisionedIops_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYDISKSPECREQUEST_H_
