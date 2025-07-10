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

#ifndef ALIBABACLOUD_VPC_MODEL_ALLOCATEIPV6INTERNETBANDWIDTHREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_ALLOCATEIPV6INTERNETBANDWIDTHREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT AllocateIpv6InternetBandwidthRequest : public RpcServiceRequest {
public:
	AllocateIpv6InternetBandwidthRequest();
	~AllocateIpv6InternetBandwidthRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	int getBandwidth() const;
	void setBandwidth(int bandwidth);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getIpv6AddressId() const;
	void setIpv6AddressId(const std::string &ipv6AddressId);
	std::string getInternetChargeType() const;
	void setInternetChargeType(const std::string &internetChargeType);
	std::string getIpv6GatewayId() const;
	void setIpv6GatewayId(const std::string &ipv6GatewayId);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string regionId_;
	bool dryRun_;
	int bandwidth_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string ipv6AddressId_;
	std::string internetChargeType_;
	std::string ipv6GatewayId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_ALLOCATEIPV6INTERNETBANDWIDTHREQUEST_H_
