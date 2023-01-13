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

#ifndef ALIBABACLOUD_CBN_MODEL_CREATECENCHILDINSTANCEROUTEENTRYTOCENREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_CREATECENCHILDINSTANCEROUTEENTRYTOCENREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT CreateCenChildInstanceRouteEntryToCenRequest : public RpcServiceRequest {
public:
	CreateCenChildInstanceRouteEntryToCenRequest();
	~CreateCenChildInstanceRouteEntryToCenRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getNextHopGatewayZoneId() const;
	void setNextHopGatewayZoneId(const std::string &nextHopGatewayZoneId);
	std::string getChildInstanceRegionId() const;
	void setChildInstanceRegionId(const std::string &childInstanceRegionId);
	std::string getRouteTableId() const;
	void setRouteTableId(const std::string &routeTableId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getDestinationCidrBlock() const;
	void setDestinationCidrBlock(const std::string &destinationCidrBlock);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getChildInstanceType() const;
	void setChildInstanceType(const std::string &childInstanceType);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::string getChildInstanceId() const;
	void setChildInstanceId(const std::string &childInstanceId);
	long getChildInstanceAliUid() const;
	void setChildInstanceAliUid(long childInstanceAliUid);

private:
	long resourceOwnerId_;
	std::string cenId_;
	std::string clientToken_;
	std::string nextHopGatewayZoneId_;
	std::string childInstanceRegionId_;
	std::string routeTableId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string destinationCidrBlock_;
	long ownerId_;
	std::string childInstanceType_;
	std::string version_;
	std::string childInstanceId_;
	long childInstanceAliUid_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_CREATECENCHILDINSTANCEROUTEENTRYTOCENREQUEST_H_
