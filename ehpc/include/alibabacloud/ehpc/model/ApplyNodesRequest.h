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

#ifndef ALIBABACLOUD_EHPC_MODEL_APPLYNODESREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_APPLYNODESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT ApplyNodesRequest : public RpcServiceRequest
			{
			public:
				struct ZoneInfos
				{
					std::string vSwitchId;
					std::string zoneId;
				};
				struct InstanceTypeModel
				{
					float maxPrice;
					std::string targetImageId;
					std::string instanceType;
				};

			public:
				ApplyNodesRequest();
				~ApplyNodesRequest();

				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				int getMemory()const;
				void setMemory(int memory);
				bool getAllocatePublicAddress()const;
				void setAllocatePublicAddress(bool allocatePublicAddress);
				int getInternetMaxBandWidthOut()const;
				void setInternetMaxBandWidthOut(int internetMaxBandWidthOut);
				std::string getResourceAmountType()const;
				void setResourceAmountType(const std::string& resourceAmountType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSystemDiskType()const;
				void setSystemDiskType(const std::string& systemDiskType);
				int getCores()const;
				void setCores(int cores);
				int getSystemDiskSize()const;
				void setSystemDiskSize(int systemDiskSize);
				std::vector<ZoneInfos> getZoneInfos()const;
				void setZoneInfos(const std::vector<ZoneInfos>& zoneInfos);
				std::string getHostNamePrefix()const;
				void setHostNamePrefix(const std::string& hostNamePrefix);
				float getComputeSpotPriceLimit()const;
				void setComputeSpotPriceLimit(float computeSpotPriceLimit);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getComputeSpotStrategy()const;
				void setComputeSpotStrategy(const std::string& computeSpotStrategy);
				std::string getHostNameSuffix()const;
				void setHostNameSuffix(const std::string& hostNameSuffix);
				std::string getPriorityStrategy()const;
				void setPriorityStrategy(const std::string& priorityStrategy);
				std::string getInstanceFamilyLevel()const;
				void setInstanceFamilyLevel(const std::string& instanceFamilyLevel);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				std::vector<InstanceTypeModel> getInstanceTypeModel()const;
				void setInstanceTypeModel(const std::vector<InstanceTypeModel>& instanceTypeModel);
				int getInternetMaxBandWidthIn()const;
				void setInternetMaxBandWidthIn(int internetMaxBandWidthIn);
				int getTargetCapacity()const;
				void setTargetCapacity(int targetCapacity);
				bool getStrictSatisfiedTargetCapacity()const;
				void setStrictSatisfiedTargetCapacity(bool strictSatisfiedTargetCapacity);

            private:
				std::string imageId_;
				int memory_;
				bool allocatePublicAddress_;
				int internetMaxBandWidthOut_;
				std::string resourceAmountType_;
				std::string accessKeyId_;
				std::string systemDiskType_;
				int cores_;
				int systemDiskSize_;
				std::vector<ZoneInfos> zoneInfos_;
				std::string hostNamePrefix_;
				float computeSpotPriceLimit_;
				std::string clusterId_;
				std::string computeSpotStrategy_;
				std::string hostNameSuffix_;
				std::string priorityStrategy_;
				std::string instanceFamilyLevel_;
				std::string internetChargeType_;
				std::vector<InstanceTypeModel> instanceTypeModel_;
				int internetMaxBandWidthIn_;
				int targetCapacity_;
				bool strictSatisfiedTargetCapacity_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_APPLYNODESREQUEST_H_