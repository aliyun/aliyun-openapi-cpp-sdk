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

#ifndef ALIBABACLOUD_CBN_MODEL_CREATECENBANDWIDTHPACKAGEREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_CREATECENBANDWIDTHPACKAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cbn/CbnExport.h>

namespace AlibabaCloud
{
	namespace Cbn
	{
		namespace Model
		{
			class ALIBABACLOUD_CBN_EXPORT CreateCenBandwidthPackageRequest : public RpcServiceRequest
			{

			public:
				CreateCenBandwidthPackageRequest();
				~CreateCenBandwidthPackageRequest();

				std::string getGeographicRegionBId()const;
				void setGeographicRegionBId(const std::string& geographicRegionBId);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getPeriod()const;
				void setPeriod(int period);
				std::string getGeographicRegionAId()const;
				void setGeographicRegionAId(const std::string& geographicRegionAId);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				int getBandwidth()const;
				void setBandwidth(int bandwidth);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getBandwidthPackageChargeType()const;
				void setBandwidthPackageChargeType(const std::string& bandwidthPackageChargeType);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getPricingCycle()const;
				void setPricingCycle(const std::string& pricingCycle);

            private:
				std::string geographicRegionBId_;
				long resourceOwnerId_;
				int period_;
				std::string geographicRegionAId_;
				bool autoPay_;
				std::string resourceOwnerAccount_;
				std::string clientToken_;
				int bandwidth_;
				std::string ownerAccount_;
				std::string description_;
				long ownerId_;
				std::string bandwidthPackageChargeType_;
				std::string name_;
				std::string pricingCycle_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_CREATECENBANDWIDTHPACKAGEREQUEST_H_