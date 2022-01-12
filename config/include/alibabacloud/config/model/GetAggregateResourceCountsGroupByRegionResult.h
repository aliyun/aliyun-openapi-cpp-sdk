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

#ifndef ALIBABACLOUD_CONFIG_MODEL_GETAGGREGATERESOURCECOUNTSGROUPBYREGIONRESULT_H_
#define ALIBABACLOUD_CONFIG_MODEL_GETAGGREGATERESOURCECOUNTSGROUPBYREGIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/config/ConfigExport.h>

namespace AlibabaCloud
{
	namespace Config
	{
		namespace Model
		{
			class ALIBABACLOUD_CONFIG_EXPORT GetAggregateResourceCountsGroupByRegionResult : public ServiceResult
			{
			public:
				struct GroupedResourceCount
				{
					std::string groupName;
					long resourceCount;
					std::string region;
				};


				GetAggregateResourceCountsGroupByRegionResult();
				explicit GetAggregateResourceCountsGroupByRegionResult(const std::string &payload);
				~GetAggregateResourceCountsGroupByRegionResult();
				std::vector<GroupedResourceCount> getDiscoveredResourceCountsSummary()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<GroupedResourceCount> discoveredResourceCountsSummary_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CONFIG_MODEL_GETAGGREGATERESOURCECOUNTSGROUPBYREGIONRESULT_H_