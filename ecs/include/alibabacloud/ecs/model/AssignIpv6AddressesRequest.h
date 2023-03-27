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

#ifndef ALIBABACLOUD_ECS_MODEL_ASSIGNIPV6ADDRESSESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_ASSIGNIPV6ADDRESSESREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT AssignIpv6AddressesRequest : public RpcServiceRequest {
public:
	AssignIpv6AddressesRequest();
	~AssignIpv6AddressesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<std::string> getIpv6Prefix() const;
	void setIpv6Prefix(const std::vector<std::string> &ipv6Prefix);
	int getIpv6PrefixCount() const;
	void setIpv6PrefixCount(int ipv6PrefixCount);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	int getIpv6AddressCount() const;
	void setIpv6AddressCount(int ipv6AddressCount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getNetworkInterfaceId() const;
	void setNetworkInterfaceId(const std::string &networkInterfaceId);
	std::vector<std::string> getIpv6Address() const;
	void setIpv6Address(const std::vector<std::string> &ipv6Address);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::vector<std::string> ipv6Prefix_;
	int ipv6PrefixCount_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	int ipv6AddressCount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string networkInterfaceId_;
	std::vector<std::string> ipv6Address_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_ASSIGNIPV6ADDRESSESREQUEST_H_
