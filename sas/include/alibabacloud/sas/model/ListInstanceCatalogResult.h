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

#ifndef ALIBABACLOUD_SAS_MODEL_LISTINSTANCECATALOGRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_LISTINSTANCECATALOGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT ListInstanceCatalogResult : public ServiceResult
			{
			public:
				struct VendorsItem
				{
					struct InstanceTypesItem
					{
						struct InstanceSubTypesItem
						{
							std::string name;
						};
						std::vector<InstanceTypesItem::InstanceSubTypesItem> instanceSubTypes;
						std::string name;
					};
					std::vector<VendorsItem::InstanceTypesItem> instanceTypes;
					std::string name;
				};


				ListInstanceCatalogResult();
				explicit ListInstanceCatalogResult(const std::string &payload);
				~ListInstanceCatalogResult();
				std::vector<VendorsItem> getVendors()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<VendorsItem> vendors_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_LISTINSTANCECATALOGRESULT_H_