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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_GETPAYASYOUGOPRICEREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_GETPAYASYOUGOPRICEREQUEST_H_

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
			class ALIBABACLOUD_BSSOPENAPI_EXPORT GetPayAsYouGoPriceRequest : public RpcServiceRequest
			{
			public:
				struct ModuleList
				{
					std::string moduleCode;
					std::string priceType;
					std::string config;
				};

			public:
				GetPayAsYouGoPriceRequest();
				~GetPayAsYouGoPriceRequest();

				std::string getProductCode()const;
				void setProductCode(const std::string& productCode);
				std::string getSubscriptionType()const;
				void setSubscriptionType(const std::string& subscriptionType);
				std::vector<ModuleList> getModuleList()const;
				void setModuleList(const std::vector<ModuleList>& moduleList);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getProductType()const;
				void setProductType(const std::string& productType);
				std::string getRegion()const;
				void setRegion(const std::string& region);

            private:
				std::string productCode_;
				std::string subscriptionType_;
				std::vector<ModuleList> moduleList_;
				long ownerId_;
				std::string productType_;
				std::string region_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_GETPAYASYOUGOPRICEREQUEST_H_