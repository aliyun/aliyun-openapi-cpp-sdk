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

#ifndef ALIBABACLOUD_ECS_MODEL_ASSIGNPRIVATEIPADDRESSESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_ASSIGNPRIVATEIPADDRESSESREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT AssignPrivateIpAddressesRequest : public RpcServiceRequest {
public:
	AssignPrivateIpAddressesRequest();
	~AssignPrivateIpAddressesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::vector<std::string> getIpv4Prefix() const;
	void setIpv4Prefix(const std::vector<std::string> &ipv4Prefix);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	int getSecondaryPrivateIpAddressCount() const;
	void setSecondaryPrivateIpAddressCount(int secondaryPrivateIpAddressCount);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getIpv4PrefixCount() const;
	void setIpv4PrefixCount(int ipv4PrefixCount);
	std::vector<std::string> getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::vector<std::string> &privateIpAddress);
	std::string getNetworkInterfaceId() const;
	void setNetworkInterfaceId(const std::string &networkInterfaceId);

private:
	long resourceOwnerId_;
	std::vector<std::string> ipv4Prefix_;
	std::string clientToken_;
	int secondaryPrivateIpAddressCount_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	int ipv4PrefixCount_;
	std::vector<std::string> privateIpAddress_;
	std::string networkInterfaceId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_ASSIGNPRIVATEIPADDRESSESREQUEST_H_
