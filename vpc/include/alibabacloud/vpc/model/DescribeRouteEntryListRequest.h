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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTEENTRYLISTREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTEENTRYLISTREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DescribeRouteEntryListRequest : public RpcServiceRequest {
public:
	DescribeRouteEntryListRequest();
	~DescribeRouteEntryListRequest();
	std::vector<std::string> getDestCidrBlockList() const;
	void setDestCidrBlockList(const std::vector<std::string> &destCidrBlockList);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getRouteEntryName() const;
	void setRouteEntryName(const std::string &routeEntryName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getRouteEntryType() const;
	void setRouteEntryType(const std::string &routeEntryType);
	std::string getIpVersion() const;
	void setIpVersion(const std::string &ipVersion);
	std::string getNextHopId() const;
	void setNextHopId(const std::string &nextHopId);
	std::string getNextHopType() const;
	void setNextHopType(const std::string &nextHopType);
	std::string getRouteTableId() const;
	void setRouteTableId(const std::string &routeTableId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDestinationCidrBlock() const;
	void setDestinationCidrBlock(const std::string &destinationCidrBlock);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getMaxResult() const;
	void setMaxResult(int maxResult);
	std::string getServiceType() const;
	void setServiceType(const std::string &serviceType);
	std::string getRouteEntryId() const;
	void setRouteEntryId(const std::string &routeEntryId);

private:
	std::vector<std::string> destCidrBlockList_;
	long resourceOwnerId_;
	std::string routeEntryName_;
	std::string regionId_;
	std::string nextToken_;
	std::string routeEntryType_;
	std::string ipVersion_;
	std::string nextHopId_;
	std::string nextHopType_;
	std::string routeTableId_;
	std::string resourceOwnerAccount_;
	std::string destinationCidrBlock_;
	std::string ownerAccount_;
	long ownerId_;
	int maxResult_;
	std::string serviceType_;
	std::string routeEntryId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTEENTRYLISTREQUEST_H_
