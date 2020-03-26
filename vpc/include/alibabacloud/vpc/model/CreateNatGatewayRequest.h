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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATENATGATEWAYREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATENATGATEWAYREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT CreateNatGatewayRequest : public RpcServiceRequest
			{
			public:
				struct BandwidthPackage
				{
					int bandwidth;
					std::string zone;
					std::string internetChargeType;
					std::string iSP;
					int ipCount;
				};

			public:
				CreateNatGatewayRequest();
				~CreateNatGatewayRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getSpec()const;
				void setSpec(const std::string& spec);
				std::string getDuration()const;
				void setDuration(const std::string& duration);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getNatType()const;
				void setNatType(const std::string& natType);
				std::vector<BandwidthPackage> getBandwidthPackage()const;
				void setBandwidthPackage(const std::vector<BandwidthPackage>& bandwidthPackage);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getPricingCycle()const;
				void setPricingCycle(const std::string& pricingCycle);

            private:
				long resourceOwnerId_;
				std::string clientToken_;
				std::string description_;
				std::string spec_;
				std::string duration_;
				std::string regionId_;
				std::string natType_;
				std::vector<BandwidthPackage> bandwidthPackage_;
				std::string instanceChargeType_;
				bool autoPay_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string vSwitchId_;
				std::string internetChargeType_;
				std::string vpcId_;
				std::string name_;
				std::string pricingCycle_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_CREATENATGATEWAYREQUEST_H_