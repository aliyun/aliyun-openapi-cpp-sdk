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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6GATEWAYSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6GATEWAYSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DescribeIpv6GatewaysRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string key;
		std::string value;
	};
	DescribeIpv6GatewaysRequest();
	~DescribeIpv6GatewaysRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getIpv6GatewayId() const;
	void setIpv6GatewayId(const std::string &ipv6GatewayId);
	std::string getName() const;
	void setName(const std::string &name);

private:
	long resourceOwnerId_;
	int pageNumber_;
	std::string resourceGroupId_;
	std::string regionId_;
	int pageSize_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::vector<Tags> tags_;
	std::string vpcId_;
	std::string ipv6GatewayId_;
	std::string name_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6GATEWAYSREQUEST_H_
