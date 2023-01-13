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

#ifndef ALIBABACLOUD_CBN_MODEL_DELETETRANSITROUTERROUTEENTRYREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_DELETETRANSITROUTERROUTEENTRYREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT DeleteTransitRouterRouteEntryRequest : public RpcServiceRequest {
public:
	DeleteTransitRouterRouteEntryRequest();
	~DeleteTransitRouterRouteEntryRequest();
	std::string getTransitRouterRouteEntryId() const;
	void setTransitRouterRouteEntryId(const std::string &transitRouterRouteEntryId);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getTransitRouterRouteEntryNextHopType() const;
	void setTransitRouterRouteEntryNextHopType(const std::string &transitRouterRouteEntryNextHopType);
	std::string getTransitRouterRouteEntryDestinationCidrBlock() const;
	void setTransitRouterRouteEntryDestinationCidrBlock(const std::string &transitRouterRouteEntryDestinationCidrBlock);
	std::string getTransitRouterRouteTableId() const;
	void setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId);
	std::string getTransitRouterRouteEntryNextHopId() const;
	void setTransitRouterRouteEntryNextHopId(const std::string &transitRouterRouteEntryNextHopId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVersion() const;
	void setVersion(const std::string &version);

private:
	std::string transitRouterRouteEntryId_;
	long resourceOwnerId_;
	std::string clientToken_;
	std::string transitRouterRouteEntryNextHopType_;
	std::string transitRouterRouteEntryDestinationCidrBlock_;
	std::string transitRouterRouteTableId_;
	std::string transitRouterRouteEntryNextHopId_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string version_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_DELETETRANSITROUTERROUTEENTRYREQUEST_H_
