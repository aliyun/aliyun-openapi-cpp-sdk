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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBERECOMMENDINSTANCETYPEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBERECOMMENDINSTANCETYPEREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeRecommendInstanceTypeRequest : public RpcServiceRequest
			{

			public:
				DescribeRecommendInstanceTypeRequest();
				~DescribeRecommendInstanceTypeRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getInstancePpsRx()const;
				void setInstancePpsRx(int instancePpsRx);
				float getMemory()const;
				void setMemory(float memory);
				int getInstancePpsTx()const;
				void setInstancePpsTx(int instancePpsTx);
				std::string getIoOptimized()const;
				void setIoOptimized(const std::string& ioOptimized);
				std::string getNetworkType()const;
				void setNetworkType(const std::string& networkType);
				std::string getScene()const;
				void setScene(const std::string& scene);
				int getInstanceBandwidthTx()const;
				void setInstanceBandwidthTx(int instanceBandwidthTx);
				int getCores()const;
				void setCores(int cores);
				int getInstanceBandwidthRx()const;
				void setInstanceBandwidthRx(int instanceBandwidthRx);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getSystemDiskCategory()const;
				void setSystemDiskCategory(const std::string& systemDiskCategory);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				float getMaxPrice()const;
				void setMaxPrice(float maxPrice);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::vector<std::string> getInstanceTypeFamily()const;
				void setInstanceTypeFamily(const std::vector<std::string>& instanceTypeFamily);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSpotStrategy()const;
				void setSpotStrategy(const std::string& spotStrategy);
				std::string getPriorityStrategy()const;
				void setPriorityStrategy(const std::string& priorityStrategy);
				std::string getInstanceFamilyLevel()const;
				void setInstanceFamilyLevel(const std::string& instanceFamilyLevel);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);

            private:
				long resourceOwnerId_;
				int instancePpsRx_;
				float memory_;
				int instancePpsTx_;
				std::string ioOptimized_;
				std::string networkType_;
				std::string scene_;
				int instanceBandwidthTx_;
				int cores_;
				int instanceBandwidthRx_;
				std::string regionId_;
				std::string systemDiskCategory_;
				std::string instanceType_;
				std::string instanceChargeType_;
				float maxPrice_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::vector<std::string> instanceTypeFamily_;
				long ownerId_;
				std::string spotStrategy_;
				std::string priorityStrategy_;
				std::string instanceFamilyLevel_;
				std::string zoneId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBERECOMMENDINSTANCETYPEREQUEST_H_