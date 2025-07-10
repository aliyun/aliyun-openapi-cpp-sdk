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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEVPCREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEVPCREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateVpcRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateVpcRequest();
	~CreateVpcRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	bool getEnableIpv6() const;
	void setEnableIpv6(bool enableIpv6);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getIpv4CidrMask() const;
	void setIpv4CidrMask(int ipv4CidrMask);
	std::string getVpcName() const;
	void setVpcName(const std::string &vpcName);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getIpv4IpamPoolId() const;
	void setIpv4IpamPoolId(const std::string &ipv4IpamPoolId);
	std::string getIpv6Isp() const;
	void setIpv6Isp(const std::string &ipv6Isp);
	std::string getUserCidr() const;
	void setUserCidr(const std::string &userCidr);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	bool getEnableDnsHostname() const;
	void setEnableDnsHostname(bool enableDnsHostname);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getIpv6CidrBlock() const;
	void setIpv6CidrBlock(const std::string &ipv6CidrBlock);
	std::string getCidrBlock() const;
	void setCidrBlock(const std::string &cidrBlock);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	bool enableIpv6_;
	std::string description_;
	int ipv4CidrMask_;
	std::string vpcName_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string ipv4IpamPoolId_;
	std::string ipv6Isp_;
	std::string userCidr_;
	std::vector<Tag> tag_;
	bool dryRun_;
	bool enableDnsHostname_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string ipv6CidrBlock_;
	std::string cidrBlock_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEVPCREQUEST_H_
