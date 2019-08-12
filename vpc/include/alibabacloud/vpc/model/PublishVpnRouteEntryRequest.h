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

#ifndef ALIBABACLOUD_VPC_MODEL_PUBLISHVPNROUTEENTRYREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_PUBLISHVPNROUTEENTRYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT PublishVpnRouteEntryRequest : public RpcServiceRequest
			{

			public:
				PublishVpnRouteEntryRequest();
				~PublishVpnRouteEntryRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				bool getPublishVpc()const;
				void setPublishVpc(bool publishVpc);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getVpnGatewayId()const;
				void setVpnGatewayId(const std::string& vpnGatewayId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getRouteDest()const;
				void setRouteDest(const std::string& routeDest);
				std::string getNextHop()const;
				void setNextHop(const std::string& nextHop);
				std::string getRouteType()const;
				void setRouteType(const std::string& routeType);

            private:
				long resourceOwnerId_;
				bool publishVpc_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string clientToken_;
				std::string ownerAccount_;
				std::string vpnGatewayId_;
				long ownerId_;
				std::string routeDest_;
				std::string nextHop_;
				std::string routeType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_PUBLISHVPNROUTEENTRYREQUEST_H_