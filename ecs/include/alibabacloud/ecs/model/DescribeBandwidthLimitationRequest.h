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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEBANDWIDTHLIMITATIONREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEBANDWIDTHLIMITATIONREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeBandwidthLimitationRequest : public RpcServiceRequest {
public:
	DescribeBandwidthLimitationRequest();
	~DescribeBandwidthLimitationRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	std::string getResourceId() const;
	void setResourceId(const std::string &resourceId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getOperationType() const;
	void setOperationType(const std::string &operationType);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSpotStrategy() const;
	void setSpotStrategy(const std::string &spotStrategy);

private:
	long resourceOwnerId_;
	std::string regionId_;
	std::string instanceType_;
	std::string instanceChargeType_;
	std::string resourceId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string operationType_;
	long ownerId_;
	std::string spotStrategy_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEBANDWIDTHLIMITATIONREQUEST_H_
