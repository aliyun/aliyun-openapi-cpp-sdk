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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCEMODIFICATIONPRICEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCEMODIFICATIONPRICEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeInstanceModificationPriceRequest : public RpcServiceRequest {
public:
	struct DataDisk {
		std::string performanceLevel;
		int size;
		std::string category;
	};
	struct PromotionOptions {
		std::string couponNo;
	};
	DescribeInstanceModificationPriceRequest();
	~DescribeInstanceModificationPriceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getSystemDiskCategory() const;
	void setSystemDiskCategory(const std::string &systemDiskCategory);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<DataDisk> getDataDisk() const;
	void setDataDisk(const std::vector<DataDisk> &dataDisk);
	PromotionOptions getPromotionOptions() const;
	void setPromotionOptions(const PromotionOptions &promotionOptions);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	long resourceOwnerId_;
	std::string systemDiskCategory_;
	std::string regionId_;
	std::string instanceType_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::vector<DataDisk> dataDisk_;
	PromotionOptions promotionOptions_;
	std::string instanceId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCEMODIFICATIONPRICEREQUEST_H_
