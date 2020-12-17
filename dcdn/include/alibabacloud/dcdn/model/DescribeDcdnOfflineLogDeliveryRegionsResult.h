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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNOFFLINELOGDELIVERYREGIONSRESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNOFFLINELOGDELIVERYREGIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dcdn/DcdnExport.h>

namespace AlibabaCloud
{
	namespace Dcdn
	{
		namespace Model
		{
			class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnOfflineLogDeliveryRegionsResult : public ServiceResult
			{
			public:
				struct Area
				{
					struct RegionInfo
					{
						std::string isOverseas;
						std::string ossEndpoint;
						std::string regionName;
						std::string regionId;
					};
					std::string areaName;
					std::string areaId;
					std::vector<Area::RegionInfo> regionInfos;
				};


				DescribeDcdnOfflineLogDeliveryRegionsResult();
				explicit DescribeDcdnOfflineLogDeliveryRegionsResult(const std::string &payload);
				~DescribeDcdnOfflineLogDeliveryRegionsResult();
				std::vector<Area> getAreas()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Area> areas_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNOFFLINELOGDELIVERYREGIONSRESULT_H_