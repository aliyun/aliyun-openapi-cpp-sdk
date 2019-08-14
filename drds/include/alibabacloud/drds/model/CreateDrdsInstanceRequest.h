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

#ifndef ALIBABACLOUD_DRDS_MODEL_CREATEDRDSINSTANCEREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_CREATEDRDSINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT CreateDrdsInstanceRequest : public RpcServiceRequest
			{

			public:
				CreateDrdsInstanceRequest();
				~CreateDrdsInstanceRequest();

				bool getIsAutoRenew()const;
				void setIsAutoRenew(bool isAutoRenew);
				int getQuantity()const;
				void setQuantity(int quantity);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getSpecification()const;
				void setSpecification(const std::string& specification);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getVswitchId()const;
				void setVswitchId(const std::string& vswitchId);
				int getDuration()const;
				void setDuration(int duration);
				bool getIsHa()const;
				void setIsHa(bool isHa);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getInstanceSeries()const;
				void setInstanceSeries(const std::string& instanceSeries);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getPayType()const;
				void setPayType(const std::string& payType);
				std::string getPricingCycle()const;
				void setPricingCycle(const std::string& pricingCycle);

            private:
				bool isAutoRenew_;
				int quantity_;
				std::string clientToken_;
				std::string description_;
				std::string specification_;
				std::string type_;
				std::string accessKeyId_;
				std::string vswitchId_;
				int duration_;
				bool isHa_;
				std::string regionId_;
				std::string instanceSeries_;
				std::string vpcId_;
				std::string zoneId_;
				std::string payType_;
				std::string pricingCycle_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_CREATEDRDSINSTANCEREQUEST_H_