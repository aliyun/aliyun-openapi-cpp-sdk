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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTCMSINSTANCESRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTCMSINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT ListCmsInstancesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ProductsItem
					{
						std::string prod;
						std::string type;
						std::string instance;
						std::string state;
						std::string time;
						std::string id;
						std::string descr;
						std::string url;
						std::string source;
						std::string name;
					};
					std::vector<ProductsItem> products;
					bool enableTag;
				};


				ListCmsInstancesResult();
				explicit ListCmsInstancesResult(const std::string &payload);
				~ListCmsInstancesResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTCMSINSTANCESRESULT_H_