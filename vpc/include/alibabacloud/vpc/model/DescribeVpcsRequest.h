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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVPCSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVPCSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DescribeVpcsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeVpcsRequest();
	~DescribeVpcsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	long getVpcOwnerId() const;
	void setVpcOwnerId(long vpcOwnerId);
	bool getEnableIpv6() const;
	void setEnableIpv6(bool enableIpv6);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getVpcName() const;
	void setVpcName(const std::string &vpcName);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	bool getIsDefault() const;
	void setIsDefault(bool isDefault);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getDhcpOptionsSetId() const;
	void setDhcpOptionsSetId(const std::string &dhcpOptionsSetId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	bool getAdvancedFeature() const;
	void setAdvancedFeature(bool advancedFeature);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);

private:
	long resourceOwnerId_;
	long vpcOwnerId_;
	bool enableIpv6_;
	int pageNumber_;
	std::string vpcName_;
	std::string resourceGroupId_;
	std::string regionId_;
	int pageSize_;
	bool isDefault_;
	std::vector<Tag> tag_;
	bool dryRun_;
	std::string dhcpOptionsSetId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	bool advancedFeature_;
	long ownerId_;
	std::string vpcId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVPCSREQUEST_H_
