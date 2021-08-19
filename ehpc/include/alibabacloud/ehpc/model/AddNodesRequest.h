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

#ifndef ALIBABACLOUD_EHPC_MODEL_ADDNODESREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_ADDNODESREQUEST_H_

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
			class ALIBABACLOUD_EHPC_EXPORT AddNodesRequest : public RpcServiceRequest
			{

			public:
				AddNodesRequest();
				~AddNodesRequest();

				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getSystemDiskLevel()const;
				void setSystemDiskLevel(const std::string& systemDiskLevel);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				bool getAllocatePublicAddress()const;
				void setAllocatePublicAddress(bool allocatePublicAddress);
				int getInternetMaxBandWidthOut()const;
				void setInternetMaxBandWidthOut(int internetMaxBandWidthOut);
				std::string getJobQueue()const;
				void setJobQueue(const std::string& jobQueue);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getImageOwnerAlias()const;
				void setImageOwnerAlias(const std::string& imageOwnerAlias);
				std::string getSystemDiskType()const;
				void setSystemDiskType(const std::string& systemDiskType);
				int getMinCount()const;
				void setMinCount(int minCount);
				int getSystemDiskSize()const;
				void setSystemDiskSize(int systemDiskSize);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getHostNamePrefix()const;
				void setHostNamePrefix(const std::string& hostNamePrefix);
				std::string getComputeSpotPriceLimit()const;
				void setComputeSpotPriceLimit(const std::string& computeSpotPriceLimit);
				int getAutoRenewPeriod()const;
				void setAutoRenewPeriod(int autoRenewPeriod);
				int getPeriod()const;
				void setPeriod(int period);
				int getCount()const;
				void setCount(int count);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getComputeSpotStrategy()const;
				void setComputeSpotStrategy(const std::string& computeSpotStrategy);
				std::string getHostNameSuffix()const;
				void setHostNameSuffix(const std::string& hostNameSuffix);
				bool getSync()const;
				void setSync(bool sync);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				bool getComputeEnableHt()const;
				void setComputeEnableHt(bool computeEnableHt);
				std::string getAutoRenew()const;
				void setAutoRenew(const std::string& autoRenew);
				std::string getEcsChargeType()const;
				void setEcsChargeType(const std::string& ecsChargeType);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				std::string getCreateMode()const;
				void setCreateMode(const std::string& createMode);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				int getInternetMaxBandWidthIn()const;
				void setInternetMaxBandWidthIn(int internetMaxBandWidthIn);

            private:
				std::string imageId_;
				std::string systemDiskLevel_;
				std::string clientToken_;
				bool allocatePublicAddress_;
				int internetMaxBandWidthOut_;
				std::string jobQueue_;
				std::string accessKeyId_;
				std::string imageOwnerAlias_;
				std::string systemDiskType_;
				int minCount_;
				int systemDiskSize_;
				std::string instanceType_;
				std::string hostNamePrefix_;
				std::string computeSpotPriceLimit_;
				int autoRenewPeriod_;
				int period_;
				int count_;
				std::string clusterId_;
				std::string computeSpotStrategy_;
				std::string hostNameSuffix_;
				bool sync_;
				std::string vSwitchId_;
				std::string periodUnit_;
				bool computeEnableHt_;
				std::string autoRenew_;
				std::string ecsChargeType_;
				std::string internetChargeType_;
				std::string createMode_;
				std::string zoneId_;
				int internetMaxBandWidthIn_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_ADDNODESREQUEST_H_