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

#ifndef ALIBABACLOUD_ECS_MODEL_DELETEROUTEENTRYREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DELETEROUTEENTRYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DeleteRouteEntryRequest : public RpcServiceRequest
			{
				struct NextHopList
				{
					std::string nextHopId;
					std::string nextHopType;
				};

			public:
				DeleteRouteEntryRequest();
				~DeleteRouteEntryRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDestinationCidrBlock()const;
				void setDestinationCidrBlock(const std::string& destinationCidrBlock);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getNextHopId()const;
				void setNextHopId(const std::string& nextHopId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::vector<NextHopList> getNextHopList()const;
				void setNextHopList(const std::vector<NextHopList>& nextHopList);
				std::string getRouteTableId()const;
				void setRouteTableId(const std::string& routeTableId);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string destinationCidrBlock_;
				std::string ownerAccount_;
				std::string nextHopId_;
				long ownerId_;
				std::vector<NextHopList> nextHopList_;
				std::string routeTableId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DELETEROUTEENTRYREQUEST_H_