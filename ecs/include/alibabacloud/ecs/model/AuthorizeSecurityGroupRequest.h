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

#ifndef ALIBABACLOUD_ECS_MODEL_AUTHORIZESECURITYGROUPREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_AUTHORIZESECURITYGROUPREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT AuthorizeSecurityGroupRequest : public RpcServiceRequest {
public:
	struct Permissions {
		std::string policy;
		std::string priority;
		std::string ipProtocol;
		std::string sourceCidrIp;
		std::string ipv6SourceCidrIp;
		std::string sourceGroupId;
		std::string sourcePrefixListId;
		std::string portRange;
		std::string destCidrIp;
		std::string ipv6DestCidrIp;
		std::string sourcePortRange;
		std::string sourceGroupOwnerAccount;
		long sourceGroupOwnerId;
		std::string nicType;
		std::string description;
		std::string portRangeListId;
	};
	AuthorizeSecurityGroupRequest();
	~AuthorizeSecurityGroupRequest();
	std::string getNicType() const;
	void setNicType(const std::string &nicType);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getSourcePrefixListId() const;
	void setSourcePrefixListId(const std::string &sourcePrefixListId);
	std::string getSourcePortRange() const;
	void setSourcePortRange(const std::string &sourcePortRange);
	std::string getSourceGroupOwnerAccount() const;
	void setSourceGroupOwnerAccount(const std::string &sourceGroupOwnerAccount);
	std::vector<Permissions> getPermissions() const;
	void setPermissions(const std::vector<Permissions> &permissions);
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
	std::string getSourceGroupId() const;
	void setSourceGroupId(const std::string &sourceGroupId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	long getSourceGroupOwnerId() const;
	void setSourceGroupOwnerId(long sourceGroupOwnerId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getPolicy() const;
	void setPolicy(const std::string &policy);
	std::string getIpv6SourceCidrIp() const;
	void setIpv6SourceCidrIp(const std::string &ipv6SourceCidrIp);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);

private:
	std::string nicType_;
	long resourceOwnerId_;
	std::string sourcePrefixListId_;
	std::string sourcePortRange_;
	std::string sourceGroupOwnerAccount_;
	std::vector<Permissions> permissions_;
	std::string ipv6DestCidrIp_;
	std::string portRange_;
	std::string ipProtocol_;
	std::string sourceCidrIp_;
	long ownerId_;
	std::string priority_;
	std::string destCidrIp_;
	std::string sourceGroupId_;
	std::string clientToken_;
	std::string securityGroupId_;
	std::string description_;
	long sourceGroupOwnerId_;
	std::string regionId_;
	std::string policy_;
	std::string ipv6SourceCidrIp_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_AUTHORIZESECURITYGROUPREQUEST_H_
