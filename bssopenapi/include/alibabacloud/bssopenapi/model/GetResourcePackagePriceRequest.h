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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_GETRESOURCEPACKAGEPRICEREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_GETRESOURCEPACKAGEPRICEREQUEST_H_

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
			class ALIBABACLOUD_BSSOPENAPI_EXPORT GetResourcePackagePriceRequest : public RpcServiceRequest
			{

			public:
				GetResourcePackagePriceRequest();
				~GetResourcePackagePriceRequest();

				int getDuration()const;
				void setDuration(int duration);
				std::string getProductCode()const;
				void setProductCode(const std::string& productCode);
				std::string getSpecification()const;
				void setSpecification(const std::string& specification);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getPackageType()const;
				void setPackageType(const std::string& packageType);
				std::string getEffectiveDate()const;
				void setEffectiveDate(const std::string& effectiveDate);
				std::string getPricingCycle()const;
				void setPricingCycle(const std::string& pricingCycle);

            private:
				int duration_;
				std::string productCode_;
				std::string specification_;
				long ownerId_;
				std::string packageType_;
				std::string effectiveDate_;
				std::string pricingCycle_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_GETRESOURCEPACKAGEPRICEREQUEST_H_