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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_QUERYBOOKKEEPINGCOMMODITIESRESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_QUERYBOOKKEEPINGCOMMODITIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT QueryBookkeepingCommoditiesResult : public ServiceResult
			{
			public:
				struct BookkeepingCommodity
				{
					std::string specCode;
					std::string serviceModuleName;
					std::string packageVersionCode;
					std::string cityModuleCode;
					std::string serviceModuleCode;
					std::string areaType;
					std::string cityModuleName;
					std::string ordTimeValue;
					std::string ordTimeName;
					std::string topOrgName;
					std::string topOrgCode;
					std::string commodityCode;
					std::string ordTimeCode;
					std::string packageVersionValue;
					std::string serviceModuleValue;
					std::string commodityName;
					std::string packageVersionName;
					std::string cityModuleValue;
				};


				QueryBookkeepingCommoditiesResult();
				explicit QueryBookkeepingCommoditiesResult(const std::string &payload);
				~QueryBookkeepingCommoditiesResult();
				std::vector<BookkeepingCommodity> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<BookkeepingCommodity> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_QUERYBOOKKEEPINGCOMMODITIESRESULT_H_