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

#ifndef ALIBABACLOUD_HSM_MODEL_CREATEINSTANCEREQUEST_H_
#define ALIBABACLOUD_HSM_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hsm/HsmExport.h>

namespace AlibabaCloud
{
	namespace Hsm
	{
		namespace Model
		{
			class ALIBABACLOUD_HSM_EXPORT CreateInstanceRequest : public RpcServiceRequest
			{

			public:
				CreateInstanceRequest();
				~CreateInstanceRequest();

				int getPeriod()const;
				void setPeriod(int period);
				std::string getResourceOwnerId()const;
				void setResourceOwnerId(const std::string& resourceOwnerId);
				int getQuantity()const;
				void setQuantity(int quantity);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getHsmOem()const;
				void setHsmOem(const std::string& hsmOem);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				std::string getHsmDeviceType()const;
				void setHsmDeviceType(const std::string& hsmDeviceType);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);

            private:
				int period_;
				std::string resourceOwnerId_;
				int quantity_;
				std::string clientToken_;
				std::string hsmOem_;
				std::string periodUnit_;
				std::string hsmDeviceType_;
				std::string zoneId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HSM_MODEL_CREATEINSTANCEREQUEST_H_