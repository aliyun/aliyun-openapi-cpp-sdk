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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBECROSSCLOUDREGIONRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBECROSSCLOUDREGIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeCrossCloudRegionResult : public ServiceResult
			{
			public:
				struct CrossCloudRegionListItem
				{
					struct CrossCloudZoneListItem
					{
						std::string crossCloudZoneName;
						std::string crossCloudZoneId;
					};
					std::vector<CrossCloudRegionListItem::CrossCloudZoneListItem> crossCloudZoneList;
					std::string projectId;
					std::string crossCloudRegionName;
					std::string crossCloudRegionId;
				};


				DescribeCrossCloudRegionResult();
				explicit DescribeCrossCloudRegionResult(const std::string &payload);
				~DescribeCrossCloudRegionResult();
				std::vector<CrossCloudRegionListItem> getCrossCloudRegionList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<CrossCloudRegionListItem> crossCloudRegionList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBECROSSCLOUDREGIONRESULT_H_