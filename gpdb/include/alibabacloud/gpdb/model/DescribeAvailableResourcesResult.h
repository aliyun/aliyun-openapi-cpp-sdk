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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBEAVAILABLERESOURCESRESULT_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBEAVAILABLERESOURCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/gpdb/GpdbExport.h>

namespace AlibabaCloud
{
	namespace Gpdb
	{
		namespace Model
		{
			class ALIBABACLOUD_GPDB_EXPORT DescribeAvailableResourcesResult : public ServiceResult
			{
			public:
				struct Resource
				{
					struct SupportedEngine
					{
						struct SupportedInstanceClass
						{
							struct NodeCount
							{
								std::string step;
								std::string maxCount;
								std::string minCount;
							};
							struct StorageSize
							{
								std::string step;
								std::string maxCount;
								std::string minCount;
							};
							std::string displayClass;
							std::string description;
							std::string storageType;
							std::string category;
							NodeCount nodeCount;
							StorageSize storageSize;
							std::string instanceClass;
						};
						std::vector<SupportedEngine::SupportedInstanceClass> supportedInstanceClasses;
						std::string mode;
						std::string supportedEngineVersion;
					};
					std::string zoneId;
					std::vector<Resource::SupportedEngine> supportedEngines;
				};


				DescribeAvailableResourcesResult();
				explicit DescribeAvailableResourcesResult(const std::string &payload);
				~DescribeAvailableResourcesResult();
				std::vector<Resource> getResources()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Resource> resources_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBEAVAILABLERESOURCESRESULT_H_