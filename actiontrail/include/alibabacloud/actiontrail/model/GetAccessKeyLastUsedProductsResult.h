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

#ifndef ALIBABACLOUD_ACTIONTRAIL_MODEL_GETACCESSKEYLASTUSEDPRODUCTSRESULT_H_
#define ALIBABACLOUD_ACTIONTRAIL_MODEL_GETACCESSKEYLASTUSEDPRODUCTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/actiontrail/ActiontrailExport.h>

namespace AlibabaCloud
{
	namespace Actiontrail
	{
		namespace Model
		{
			class ALIBABACLOUD_ACTIONTRAIL_EXPORT GetAccessKeyLastUsedProductsResult : public ServiceResult
			{
			public:
				struct ProductsItem
				{
					std::string serviceName;
					std::string serviceNameCn;
					std::string serviceNameEn;
					long usedTimestamp;
					std::string detail;
					std::string source;
				};


				GetAccessKeyLastUsedProductsResult();
				explicit GetAccessKeyLastUsedProductsResult(const std::string &payload);
				~GetAccessKeyLastUsedProductsResult();
				std::vector<ProductsItem> getProducts()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ProductsItem> products_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACTIONTRAIL_MODEL_GETACCESSKEYLASTUSEDPRODUCTSRESULT_H_