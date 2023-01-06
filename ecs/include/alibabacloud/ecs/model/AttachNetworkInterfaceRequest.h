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

#ifndef ALIBABACLOUD_ECS_MODEL_ATTACHNETWORKINTERFACEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_ATTACHNETWORKINTERFACEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT AttachNetworkInterfaceRequest : public RpcServiceRequest {
public:
	AttachNetworkInterfaceRequest();
	~AttachNetworkInterfaceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getTrunkNetworkInstanceId() const;
	void setTrunkNetworkInstanceId(const std::string &trunkNetworkInstanceId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	bool getWaitForNetworkConfigurationReady() const;
	void setWaitForNetworkConfigurationReady(bool waitForNetworkConfigurationReady);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getNetworkCardIndex() const;
	void setNetworkCardIndex(int networkCardIndex);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getNetworkInterfaceId() const;
	void setNetworkInterfaceId(const std::string &networkInterfaceId);

private:
	long resourceOwnerId_;
	std::string regionId_;
	std::string trunkNetworkInstanceId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	bool waitForNetworkConfigurationReady_;
	long ownerId_;
	int networkCardIndex_;
	std::string instanceId_;
	std::string networkInterfaceId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_ATTACHNETWORKINTERFACEREQUEST_H_
