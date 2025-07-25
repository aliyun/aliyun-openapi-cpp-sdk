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

#ifndef ALIBABACLOUD_VPC_MODEL_DELETEROUTEENTRIESREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DELETEROUTEENTRIESREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DeleteRouteEntriesRequest : public RpcServiceRequest {
public:
	struct RouteEntries {
		std::string routeTableId;
		std::string routeEntryId;
		std::string dstCidrBlock;
		std::string nextHop;
	};
	DeleteRouteEntriesRequest();
	~DeleteRouteEntriesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<RouteEntries> getRouteEntries() const;
	void setRouteEntries(const std::vector<RouteEntries> &routeEntries);

private:
	long resourceOwnerId_;
	std::string regionId_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::vector<RouteEntries> routeEntries_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DELETEROUTEENTRIESREQUEST_H_
