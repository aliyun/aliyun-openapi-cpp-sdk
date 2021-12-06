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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEROUTETABLESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEROUTETABLESREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeRouteTablesRequest : public RpcServiceRequest {
public:
	DescribeRouteTablesRequest();
	~DescribeRouteTablesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getVRouterId() const;
	void setVRouterId(const std::string &vRouterId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRouteTableName() const;
	void setRouteTableName(const std::string &routeTableName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
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

private:
	long resourceOwnerId_;
	std::string vRouterId_;
	int pageNumber_;
	std::string routeTableName_;
	std::string regionId_;
	int pageSize_;
	std::string routeTableId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string routerType_;
	std::string routerId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEROUTETABLESREQUEST_H_
