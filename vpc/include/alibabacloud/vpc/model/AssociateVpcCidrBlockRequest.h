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

#ifndef ALIBABACLOUD_VPC_MODEL_ASSOCIATEVPCCIDRBLOCKREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_ASSOCIATEVPCCIDRBLOCKREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT AssociateVpcCidrBlockRequest : public RpcServiceRequest {
public:
	AssociateVpcCidrBlockRequest();
	~AssociateVpcCidrBlockRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getIPv6CidrType() const;
	void setIPv6CidrType(const std::string &iPv6CidrType);
	std::string getIpamPoolId() const;
	void setIpamPoolId(const std::string &ipamPoolId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getIpv6Isp() const;
	void setIpv6Isp(const std::string &ipv6Isp);
	std::string getIpVersion() const;
	void setIpVersion(const std::string &ipVersion);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getIPv6CidrBlock() const;
	void setIPv6CidrBlock(const std::string &iPv6CidrBlock);
	int getSecondaryCidrMask() const;
	void setSecondaryCidrMask(int secondaryCidrMask);
	std::string getSecondaryCidrBlock() const;
	void setSecondaryCidrBlock(const std::string &secondaryCidrBlock);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);

private:
	long resourceOwnerId_;
	std::string iPv6CidrType_;
	std::string ipamPoolId_;
	std::string regionId_;
	std::string ipv6Isp_;
	std::string ipVersion_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string iPv6CidrBlock_;
	int secondaryCidrMask_;
	std::string secondaryCidrBlock_;
	std::string vpcId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_ASSOCIATEVPCCIDRBLOCKREQUEST_H_
