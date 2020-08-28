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

#ifndef ALIBABACLOUD_EHPC_MODEL_CREATEGWSINSTANCEREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_CREATEGWSINSTANCEREQUEST_H_

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
			class ALIBABACLOUD_EHPC_EXPORT CreateGWSInstanceRequest : public RpcServiceRequest
			{

			public:
				CreateGWSInstanceRequest();
				~CreateGWSInstanceRequest();

				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				bool getAllocatePublicAddress()const;
				void setAllocatePublicAddress(bool allocatePublicAddress);
				std::string getAppList()const;
				void setAppList(const std::string& appList);
				int getInternetMaxBandwidthOut()const;
				void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSystemDiskCategory()const;
				void setSystemDiskCategory(const std::string& systemDiskCategory);
				int getSystemDiskSize()const;
				void setSystemDiskSize(int systemDiskSize);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getWorkMode()const;
				void setWorkMode(const std::string& workMode);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				bool getAutoRenew()const;
				void setAutoRenew(bool autoRenew);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				std::string getName()const;
				void setName(const std::string& name);
				int getInternetMaxBandwidthIn()const;
				void setInternetMaxBandwidthIn(int internetMaxBandwidthIn);

            private:
				std::string imageId_;
				bool allocatePublicAddress_;
				std::string appList_;
				int internetMaxBandwidthOut_;
				std::string accessKeyId_;
				std::string systemDiskCategory_;
				int systemDiskSize_;
				std::string instanceType_;
				std::string instanceChargeType_;
				std::string period_;
				std::string clusterId_;
				std::string workMode_;
				std::string vSwitchId_;
				std::string periodUnit_;
				bool autoRenew_;
				std::string internetChargeType_;
				std::string name_;
				int internetMaxBandwidthIn_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_CREATEGWSINSTANCEREQUEST_H_