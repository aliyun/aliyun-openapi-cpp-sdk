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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBESTORAGECAPACITYUNITSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBESTORAGECAPACITYUNITSREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeStorageCapacityUnitsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	DescribeStorageCapacityUnitsRequest();
	~DescribeStorageCapacityUnitsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getCapacity() const;
	void setCapacity(int capacity);
	std::vector<std::string> getStorageCapacityUnitId() const;
	void setStorageCapacityUnitId(const std::vector<std::string> &storageCapacityUnitId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getAllocationType() const;
	void setAllocationType(const std::string &allocationType);
	std::vector<std::string> getStatus() const;
	void setStatus(const std::vector<std::string> &status);

private:
	long resourceOwnerId_;
	int pageNumber_;
	int capacity_;
	std::vector<std::string> storageCapacityUnitId_;
	std::string regionId_;
	int pageSize_;
	std::vector<Tag> tag_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string name_;
	std::string allocationType_;
	std::vector<std::string> status_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBESTORAGECAPACITYUNITSREQUEST_H_
