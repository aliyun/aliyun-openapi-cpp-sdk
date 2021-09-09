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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_QUERYCOMMODITYCONFIGRESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_QUERYCOMMODITYCONFIGRESULT_H_

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
			class ALIBABACLOUD_COMPANYREG_EXPORT QueryCommodityConfigResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct CommodityModulesItem
					{
						std::string moduleTip;
						std::string moduleType;
						std::string moduleCode;
						std::string moduleDescription;
						int sortNumber;
						std::string moduleName;
						std::string lxModuleCode;
						std::string moduleUrl;
						std::string moduleValue;
					};
					std::string iconUrl;
					int type;
					std::string description;
					std::string protocolUrl;
					std::string commodityCode;
					std::string startingPrice;
					std::vector<CommodityModulesItem> commodityModules;
					std::string productLine;
				};


				QueryCommodityConfigResult();
				explicit QueryCommodityConfigResult(const std::string &payload);
				~QueryCommodityConfigResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_QUERYCOMMODITYCONFIGRESULT_H_