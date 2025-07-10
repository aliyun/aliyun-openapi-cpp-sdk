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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEROUTEENTRYREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEROUTEENTRYREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateRouteEntryRequest : public RpcServiceRequest {
public:
	struct NextHopList {
		int weight;
		std::string nextHopId;
		std::string nextHopType;
	};
	CreateRouteEntryRequest();
	~CreateRouteEntryRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getRouteEntryName() const;
	void setRouteEntryName(const std::string &routeEntryName);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextHopId() const;
	void setNextHopId(const std::string &nextHopId);
	std::string getNextHopType() const;
	void setNextHopType(const std::string &nextHopType);
	std::string getRouteTableId() const;
	void setRouteTableId(const std::string &routeTableId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDestinationCidrBlock() const;
	void setDestinationCidrBlock(const std::string &destinationCidrBlock);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::vector<NextHopList> getNextHopList() const;
	void setNextHopList(const std::vector<NextHopList> &nextHopList);

private:
	long resourceOwnerId_;
	std::string routeEntryName_;
	std::string clientToken_;
	std::string description_;
	std::string regionId_;
	std::string nextHopId_;
	std::string nextHopType_;
	std::string routeTableId_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string destinationCidrBlock_;
	std::string ownerAccount_;
	long ownerId_;
	std::string privateIpAddress_;
	std::vector<NextHopList> nextHopList_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEROUTEENTRYREQUEST_H_
