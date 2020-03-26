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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERAVAILABLERESOURCESRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERAVAILABLERESOURCESRESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeDBClusterAvailableResourcesResult : public ServiceResult
			{
			public:
				struct AvailableZone
				{
					struct SupportedEngine
					{
						struct AvailableResource
						{
							std::string dBNodeClass;
						};
						std::vector<SupportedEngine::AvailableResource> availableResources;
						std::string engine;
					};
					std::string zoneId;
					std::vector<AvailableZone::SupportedEngine> supportedEngines;
					std::string regionId;
				};


				DescribeDBClusterAvailableResourcesResult();
				explicit DescribeDBClusterAvailableResourcesResult(const std::string &payload);
				~DescribeDBClusterAvailableResourcesResult();
				std::vector<AvailableZone> getAvailableZones()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AvailableZone> availableZones_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERAVAILABLERESOURCESRESULT_H_