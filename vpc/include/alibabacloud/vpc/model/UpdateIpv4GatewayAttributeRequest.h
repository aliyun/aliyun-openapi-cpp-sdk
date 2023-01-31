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

#ifndef ALIBABACLOUD_VPC_MODEL_UPDATEIPV4GATEWAYATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_UPDATEIPV4GATEWAYATTRIBUTEREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT UpdateIpv4GatewayAttributeRequest : public RpcServiceRequest {
public:
	UpdateIpv4GatewayAttributeRequest();
	~UpdateIpv4GatewayAttributeRequest();
	std::string getIpv4GatewayDescription() const;
	void setIpv4GatewayDescription(const std::string &ipv4GatewayDescription);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getIpv4GatewayName() const;
	void setIpv4GatewayName(const std::string &ipv4GatewayName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getIpv4GatewayId() const;
	void setIpv4GatewayId(const std::string &ipv4GatewayId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	std::string ipv4GatewayDescription_;
	long resourceOwnerId_;
	std::string clientToken_;
	std::string ipv4GatewayName_;
	std::string regionId_;
	std::string ipv4GatewayId_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_UPDATEIPV4GATEWAYATTRIBUTEREQUEST_H_
