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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYROUTEENTRYREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYROUTEENTRYREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ModifyRouteEntryRequest : public RpcServiceRequest {
public:
	ModifyRouteEntryRequest();
	~ModifyRouteEntryRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getRouteEntryName() const;
	void setRouteEntryName(const std::string &routeEntryName);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getNewNextHopId() const;
	void setNewNextHopId(const std::string &newNextHopId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getRouteTableId() const;
	void setRouteTableId(const std::string &routeTableId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getDestinationCidrBlock() const;
	void setDestinationCidrBlock(const std::string &destinationCidrBlock);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getNewNextHopType() const;
	void setNewNextHopType(const std::string &newNextHopType);
	std::string getRouteEntryId() const;
	void setRouteEntryId(const std::string &routeEntryId);

private:
	long resourceOwnerId_;
	std::string routeEntryName_;
	std::string description_;
	std::string newNextHopId_;
	std::string regionId_;
	std::string routeTableId_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string destinationCidrBlock_;
	long ownerId_;
	std::string newNextHopType_;
	std::string routeEntryId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYROUTEENTRYREQUEST_H_
