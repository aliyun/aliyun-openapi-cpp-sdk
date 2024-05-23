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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEAVAILABLEZONERESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEAVAILABLEZONERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>

namespace AlibabaCloud
{
	namespace OceanBasePro
	{
		namespace Model
		{
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeAvailableZoneResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct AvailableZonesItem
					{
						struct SupportSpecificationsItem
						{
							struct DiskSizeRange
							{
								long min;
								long max;
								long step;
							};
							struct SupportEngineVersionsItem
							{
								std::vector<std::string> supportReplicaModes;
								std::string obVersion;
								bool supportIsolationOptimization;
							};
							DiskSizeRange diskSizeRange;
							std::vector<std::string> diskTypes;
							std::vector<SupportSpecificationsItem::SupportEngineVersionsItem> supportEngineVersions;
							std::string instanceClass;
							std::string spec;
						};
						std::string deployType;
						std::string series;
						std::vector<AvailableZonesItem::SupportSpecificationsItem> supportSpecifications;
						std::string channel;
						std::string region;
						std::string instanceType;
						std::string cpuArch;
						std::string zones;
					};
					std::vector<AvailableZonesItem> availableZones;
				};


				DescribeAvailableZoneResult();
				explicit DescribeAvailableZoneResult(const std::string &payload);
				~DescribeAvailableZoneResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEAVAILABLEZONERESULT_H_