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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTETABLELISTREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTETABLELISTREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DescribeRouteTableListRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeRouteTableListRequest();
	~DescribeRouteTableListRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRouteTableName() const;
	void setRouteTableName(const std::string &routeTableName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getRouteTableId() const;
	void setRouteTableId(const std::string &routeTableId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getRouterType() const;
	void setRouterType(const std::string &routerType);
	std::string getRouterId() const;
	void setRouterId(const std::string &routerId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getRouteTableType() const;
	void setRouteTableType(const std::string &routeTableType);

private:
	long resourceOwnerId_;
	int pageNumber_;
	std::string resourceGroupId_;
	std::string routeTableName_;
	std::string regionId_;
	int pageSize_;
	std::vector<Tag> tag_;
	std::string routeTableId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string routerType_;
	std::string routerId_;
	std::string vpcId_;
	std::string routeTableType_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTETABLELISTREQUEST_H_
