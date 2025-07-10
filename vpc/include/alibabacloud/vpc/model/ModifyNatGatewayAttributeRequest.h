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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYNATGATEWAYATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYNATGATEWAYATTRIBUTEREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ModifyNatGatewayAttributeRequest : public RpcServiceRequest {
public:
	struct LogDelivery {
		std::string logDeliveryType;
		std::string logDestination;
	};
	ModifyNatGatewayAttributeRequest();
	~ModifyNatGatewayAttributeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	bool getSecurityProtectionEnabled() const;
	void setSecurityProtectionEnabled(bool securityProtectionEnabled);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	LogDelivery getLogDelivery() const;
	void setLogDelivery(const LogDelivery &logDelivery);
	bool getIcmpReplyEnabled() const;
	void setIcmpReplyEnabled(bool icmpReplyEnabled);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNatGatewayId() const;
	void setNatGatewayId(const std::string &natGatewayId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getPrivateLinkMode() const;
	void setPrivateLinkMode(const std::string &privateLinkMode);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	bool getEnableSessionLog() const;
	void setEnableSessionLog(bool enableSessionLog);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getEipBindMode() const;
	void setEipBindMode(const std::string &eipBindMode);

private:
	long resourceOwnerId_;
	bool securityProtectionEnabled_;
	std::string description_;
	LogDelivery logDelivery_;
	bool icmpReplyEnabled_;
	std::string regionId_;
	std::string natGatewayId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string privateLinkMode_;
	long ownerId_;
	bool enableSessionLog_;
	std::string name_;
	std::string eipBindMode_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYNATGATEWAYATTRIBUTEREQUEST_H_
