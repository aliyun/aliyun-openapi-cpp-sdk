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

#ifndef ALIBABACLOUD_HSM_MODEL_DESCRIBEREGIONSRESULT_H_
#define ALIBABACLOUD_HSM_MODEL_DESCRIBEREGIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hsm/HsmExport.h>

namespace AlibabaCloud
{
	namespace Hsm
	{
		namespace Model
		{
			class ALIBABACLOUD_HSM_EXPORT DescribeRegionsResult : public ServiceResult
			{
			public:
				struct Region
				{
					struct Zone
					{
						std::string zoneId;
						std::string localName;
					};
					std::string regionId;
					std::vector<Region::Zone> zones;
					std::string localName;
				};


				DescribeRegionsResult();
				explicit DescribeRegionsResult(const std::string &payload);
				~DescribeRegionsResult();
				std::vector<Region> getRegions()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Region> regions_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HSM_MODEL_DESCRIBEREGIONSRESULT_H_