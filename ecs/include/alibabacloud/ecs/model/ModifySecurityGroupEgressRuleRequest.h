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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYSECURITYGROUPEGRESSRULEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYSECURITYGROUPEGRESSRULEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifySecurityGroupEgressRuleRequest : public RpcServiceRequest {
public:
	ModifySecurityGroupEgressRuleRequest();
	~ModifySecurityGroupEgressRuleRequest();
	std::string getNicType() const;
	void setNicType(const std::string &nicType);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getSourcePortRange() const;
	void setSourcePortRange(const std::string &sourcePortRange);
	std::string getDestPrefixListId() const;
	void setDestPrefixListId(const std::string &destPrefixListId);
	std::string getIpv6DestCidrIp() const;
	void setIpv6DestCidrIp(const std::string &ipv6DestCidrIp);
	std::string getPortRange() const;
	void setPortRange(const std::string &portRange);
	std::string getIpProtocol() const;
	void setIpProtocol(const std::string &ipProtocol);
	std::string getSourceCidrIp() const;
	void setSourceCidrIp(const std::string &sourceCidrIp);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPriority() const;
	void setPriority(const std::string &priority);
	std::string getDestCidrIp() const;
	void setDestCidrIp(const std::string &destCidrIp);
	std::string getSecurityGroupRuleId() const;
	void setSecurityGroupRuleId(const std::string &securityGroupRuleId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getPortRangeListId() const;
	void setPortRangeListId(const std::string &portRangeListId);
	std::string getPolicy() const;
	void setPolicy(const std::string &policy);
	std::string getIpv6SourceCidrIp() const;
	void setIpv6SourceCidrIp(const std::string &ipv6SourceCidrIp);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getDestGroupId() const;
	void setDestGroupId(const std::string &destGroupId);
	std::string getDestGroupOwnerAccount() const;
	void setDestGroupOwnerAccount(const std::string &destGroupOwnerAccount);
	long getDestGroupOwnerId() const;
	void setDestGroupOwnerId(long destGroupOwnerId);

private:
	std::string nicType_;
	long resourceOwnerId_;
	std::string sourcePortRange_;
	std::string destPrefixListId_;
	std::string ipv6DestCidrIp_;
	std::string portRange_;
	std::string ipProtocol_;
	std::string sourceCidrIp_;
	long ownerId_;
	std::string priority_;
	std::string destCidrIp_;
	std::string securityGroupRuleId_;
	std::string clientToken_;
	std::string securityGroupId_;
	std::string description_;
	std::string regionId_;
	std::string portRangeListId_;
	std::string policy_;
	std::string ipv6SourceCidrIp_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string destGroupId_;
	std::string destGroupOwnerAccount_;
	long destGroupOwnerId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYSECURITYGROUPEGRESSRULEREQUEST_H_
