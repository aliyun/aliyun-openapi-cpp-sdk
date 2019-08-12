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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEBANDWIDTHPACKAGEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEBANDWIDTHPACKAGEREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT CreateBandwidthPackageRequest : public RpcServiceRequest
			{

			public:
				CreateBandwidthPackageRequest();
				~CreateBandwidthPackageRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				int getBandwidth()const;
				void setBandwidth(int bandwidth);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getISP()const;
				void setISP(const std::string& iSP);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getZone()const;
				void setZone(const std::string& zone);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getNatGatewayId()const;
				void setNatGatewayId(const std::string& natGatewayId);
				int getIpCount()const;
				void setIpCount(int ipCount);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string clientToken_;
				int bandwidth_;
				std::string ownerAccount_;
				std::string iSP_;
				std::string description_;
				long ownerId_;
				std::string regionId_;
				std::string zone_;
				std::string internetChargeType_;
				std::string name_;
				std::string natGatewayId_;
				int ipCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEBANDWIDTHPACKAGEREQUEST_H_