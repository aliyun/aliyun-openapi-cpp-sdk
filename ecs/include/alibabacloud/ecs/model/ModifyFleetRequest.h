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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYFLEETREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYFLEETREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT ModifyFleetRequest : public RpcServiceRequest
			{

			public:
				ModifyFleetRequest();
				~ModifyFleetRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				bool getTerminateInstancesWithExpiration()const;
				void setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration);
				std::string getOnDemandTargetCapacity()const;
				void setOnDemandTargetCapacity(const std::string& onDemandTargetCapacity);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDefaultTargetCapacityType()const;
				void setDefaultTargetCapacityType(const std::string& defaultTargetCapacityType);
				std::string getExcessCapacityTerminationPolicy()const;
				void setExcessCapacityTerminationPolicy(const std::string& excessCapacityTerminationPolicy);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getFleetId()const;
				void setFleetId(const std::string& fleetId);
				std::string getTotalTargetCapacity()const;
				void setTotalTargetCapacity(const std::string& totalTargetCapacity);
				std::string getSpotTargetCapacity()const;
				void setSpotTargetCapacity(const std::string& spotTargetCapacity);
				float getMaxSpotPrice()const;
				void setMaxSpotPrice(float maxSpotPrice);

            private:
				long resourceOwnerId_;
				bool terminateInstancesWithExpiration_;
				std::string onDemandTargetCapacity_;
				std::string regionId_;
				std::string defaultTargetCapacityType_;
				std::string excessCapacityTerminationPolicy_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string fleetId_;
				std::string totalTargetCapacity_;
				std::string spotTargetCapacity_;
				float maxSpotPrice_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYFLEETREQUEST_H_