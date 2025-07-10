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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEPUBLICIPADDRESSPOOLREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEPUBLICIPADDRESSPOOLREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreatePublicIpAddressPoolRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	CreatePublicIpAddressPoolRequest();
	~CreatePublicIpAddressPoolRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getIsp() const;
	void setIsp(const std::string &isp);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::vector<std::string> getZones() const;
	void setZones(const std::vector<std::string> &zones);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getBizType() const;
	void setBizType(const std::string &bizType);
	std::string getName() const;
	void setName(const std::string &name);
	std::vector<std::string> getSecurityProtectionTypes() const;
	void setSecurityProtectionTypes(const std::vector<std::string> &securityProtectionTypes);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string isp_;
	std::string description_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::vector<Tag> tag_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::vector<std::string> zones_;
	long ownerId_;
	std::string bizType_;
	std::string name_;
	std::vector<std::string> securityProtectionTypes_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEPUBLICIPADDRESSPOOLREQUEST_H_
