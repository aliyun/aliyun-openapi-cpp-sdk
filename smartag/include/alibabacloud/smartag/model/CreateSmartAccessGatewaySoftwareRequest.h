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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_CREATESMARTACCESSGATEWAYSOFTWAREREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_CREATESMARTACCESSGATEWAYSOFTWAREREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT CreateSmartAccessGatewaySoftwareRequest : public RpcServiceRequest
			{

			public:
				CreateSmartAccessGatewaySoftwareRequest();
				~CreateSmartAccessGatewaySoftwareRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getPeriod()const;
				void setPeriod(int period);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getUserCount()const;
				void setUserCount(int userCount);
				std::string getChargeType()const;
				void setChargeType(const std::string& chargeType);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				long getDataPlan()const;
				void setDataPlan(long dataPlan);

            private:
				long resourceOwnerId_;
				int period_;
				bool autoPay_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string ownerAccount_;
				int userCount_;
				std::string chargeType_;
				long ownerId_;
				long dataPlan_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_CREATESMARTACCESSGATEWAYSOFTWAREREQUEST_H_