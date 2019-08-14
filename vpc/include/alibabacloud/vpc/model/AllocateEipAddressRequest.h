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

#ifndef ALIBABACLOUD_VPC_MODEL_ALLOCATEEIPADDRESSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_ALLOCATEEIPADDRESSREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT AllocateEipAddressRequest : public RpcServiceRequest
			{

			public:
				AllocateEipAddressRequest();
				~AllocateEipAddressRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getPeriod()const;
				void setPeriod(int period);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getBandwidth()const;
				void setBandwidth(const std::string& bandwidth);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getISP()const;
				void setISP(const std::string& iSP);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				long getActivityId()const;
				void setActivityId(long activityId);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				std::string getNetmode()const;
				void setNetmode(const std::string& netmode);
				std::string getPricingCycle()const;
				void setPricingCycle(const std::string& pricingCycle);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);

            private:
				long resourceOwnerId_;
				int period_;
				bool autoPay_;
				std::string resourceOwnerAccount_;
				std::string bandwidth_;
				std::string clientToken_;
				std::string iSP_;
				std::string ownerAccount_;
				long ownerId_;
				long activityId_;
				std::string resourceGroupId_;
				std::string regionId_;
				std::string internetChargeType_;
				std::string netmode_;
				std::string pricingCycle_;
				std::string instanceChargeType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_ALLOCATEEIPADDRESSREQUEST_H_