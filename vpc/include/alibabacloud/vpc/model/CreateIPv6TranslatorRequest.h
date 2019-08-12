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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEIPV6TRANSLATORREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEIPV6TRANSLATORREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT CreateIPv6TranslatorRequest : public RpcServiceRequest
			{

			public:
				CreateIPv6TranslatorRequest();
				~CreateIPv6TranslatorRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
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
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSpec()const;
				void setSpec(const std::string& spec);
				int getDuration()const;
				void setDuration(int duration);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getPayType()const;
				void setPayType(const std::string& payType);
				std::string getPricingCycle()const;
				void setPricingCycle(const std::string& pricingCycle);

            private:
				long resourceOwnerId_;
				bool autoPay_;
				std::string resourceOwnerAccount_;
				std::string clientToken_;
				int bandwidth_;
				std::string ownerAccount_;
				long ownerId_;
				std::string spec_;
				int duration_;
				std::string regionId_;
				std::string name_;
				std::string payType_;
				std::string pricingCycle_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEIPV6TRANSLATORREQUEST_H_