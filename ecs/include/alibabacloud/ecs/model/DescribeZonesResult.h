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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEZONESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEZONESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeZonesResult : public ServiceResult
			{
			public:
				struct Zone
				{
					struct ResourcesInfo
					{
						std::vector<std::string> instanceGenerations;
						std::vector<std::string> networkTypes;
						bool ioOptimized;
						std::vector<std::string> systemDiskCategories;
						std::vector<std::string> instanceTypes;
						std::vector<std::string> instanceTypeFamilies;
						std::vector<std::string> dataDiskCategories;
					};
					std::vector<std::string> dedicatedHostGenerations;
					std::vector<std::string> availableInstanceTypes;
					std::string zoneId;
					std::vector<std::string> availableDedicatedHostTypes;
					std::vector<Zone::ResourcesInfo> availableResources;
					std::vector<std::string> availableDiskCategories;
					std::string zoneType;
					std::string localName;
					std::vector<std::string> availableResourceCreation;
					std::vector<std::string> availableVolumeCategories;
				};


				DescribeZonesResult();
				explicit DescribeZonesResult(const std::string &payload);
				~DescribeZonesResult();
				std::vector<Zone> getZones()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Zone> zones_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEZONESRESULT_H_