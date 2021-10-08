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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEDEDICATEDBLOCKSTORAGECLUSTERREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEDEDICATEDBLOCKSTORAGECLUSTERREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT CreateDedicatedBlockStorageClusterRequest : public RpcServiceRequest {
public:
	CreateDedicatedBlockStorageClusterRequest();
	~CreateDedicatedBlockStorageClusterRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDedicatedBlockStorageClusterName() const;
	void setDedicatedBlockStorageClusterName(const std::string &dedicatedBlockStorageClusterName);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getType() const;
	void setType(const std::string &type);
	int getCapacity() const;
	void setCapacity(int capacity);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPeriod() const;
	void setPeriod(int period);
	std::string getFromApp() const;
	void setFromApp(const std::string &fromApp);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getCategory() const;
	void setCategory(const std::string &category);

private:
	long resourceOwnerId_;
	std::string dedicatedBlockStorageClusterName_;
	std::string clientToken_;
	std::string description_;
	std::string type_;
	int capacity_;
	std::string regionId_;
	int period_;
	std::string fromApp_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string periodUnit_;
	std::string zoneId_;
	std::string category_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEDEDICATEDBLOCKSTORAGECLUSTERREQUEST_H_
