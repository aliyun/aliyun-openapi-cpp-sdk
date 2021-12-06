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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBERESERVEDINSTANCESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBERESERVEDINSTANCESREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeReservedInstancesRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	DescribeReservedInstancesRequest();
	~DescribeReservedInstancesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getLockReason() const;
	void setLockReason(const std::string &lockReason);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getScope() const;
	void setScope(const std::string &scope);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getInstanceTypeFamily() const;
	void setInstanceTypeFamily(const std::string &instanceTypeFamily);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<std::string> getReservedInstanceId() const;
	void setReservedInstanceId(const std::vector<std::string> &reservedInstanceId);
	std::string getOfferingType() const;
	void setOfferingType(const std::string &offeringType);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getReservedInstanceName() const;
	void setReservedInstanceName(const std::string &reservedInstanceName);
	std::string getAllocationType() const;
	void setAllocationType(const std::string &allocationType);
	std::vector<std::string> getStatus() const;
	void setStatus(const std::vector<std::string> &status);

private:
	long resourceOwnerId_;
	int pageNumber_;
	std::string lockReason_;
	std::string regionId_;
	std::string scope_;
	int pageSize_;
	std::string instanceType_;
	std::vector<Tag> tag_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string instanceTypeFamily_;
	long ownerId_;
	std::vector<std::string> reservedInstanceId_;
	std::string offeringType_;
	std::string zoneId_;
	std::string reservedInstanceName_;
	std::string allocationType_;
	std::vector<std::string> status_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBERESERVEDINSTANCESREQUEST_H_
