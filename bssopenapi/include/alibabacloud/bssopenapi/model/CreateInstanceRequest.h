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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_CREATEINSTANCEREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/bssopenapi/BssOpenApiExport.h>

namespace AlibabaCloud
{
	namespace BssOpenApi
	{
		namespace Model
		{
			class ALIBABACLOUD_BSSOPENAPI_EXPORT CreateInstanceRequest : public RpcServiceRequest
			{
				struct Parameter
				{
					std::string code;
					std::string value;
				};

			public:
				CreateInstanceRequest();
				~CreateInstanceRequest();

				std::string getProductCode()const;
				void setProductCode(const std::string& productCode);
				int getPeriod()const;
				void setPeriod(int period);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getSubscriptionType()const;
				void setSubscriptionType(const std::string& subscriptionType);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getProductType()const;
				void setProductType(const std::string& productType);
				int getRenewPeriod()const;
				void setRenewPeriod(int renewPeriod);
				std::vector<Parameter> getParameter()const;
				void setParameter(const std::vector<Parameter>& parameter);
				std::string getRenewalStatus()const;
				void setRenewalStatus(const std::string& renewalStatus);

            private:
				std::string productCode_;
				int period_;
				std::string clientToken_;
				std::string subscriptionType_;
				long ownerId_;
				std::string productType_;
				int renewPeriod_;
				std::vector<Parameter> parameter_;
				std::string renewalStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_CREATEINSTANCEREQUEST_H_