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

#ifndef ALIBABACLOUD_HBASE_MODEL_DESCRIBEAVAILABLERESOURCERESULT_H_
#define ALIBABACLOUD_HBASE_MODEL_DESCRIBEAVAILABLERESOURCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT DescribeAvailableResourceResult : public ServiceResult
			{
			public:
				struct AvailableZone
				{
					struct SupportedEngine
					{
						struct SupportedEngineVersion
						{
							struct SupportedCategoriesItem
							{
								struct SupportedStorageType
								{
									struct CoreResource
									{
										struct DBInstanceStorageRange
										{
											int minSize;
											int stepSize;
											int maxSize;
										};
										struct InstanceTypeDetail
										{
											int mem;
											int cpu;
										};
										InstanceTypeDetail instanceTypeDetail;
										DBInstanceStorageRange dBInstanceStorageRange;
										std::string instanceType;
										int maxCoreCount;
									};
									std::string storageType;
									std::vector<SupportedStorageType::CoreResource> coreResources;
								};
								std::string category;
								std::vector<SupportedCategoriesItem::SupportedStorageType> supportedStorageTypes;
							};
							std::string version;
							std::vector<SupportedEngineVersion::SupportedCategoriesItem> supportedCategories;
						};
						std::vector<SupportedEngine::SupportedEngineVersion> supportedEngineVersions;
						std::string engine;
					};
					struct MasterResource
					{
						struct InstanceTypeDetail1
						{
							int mem;
							int cpu;
						};
						InstanceTypeDetail1 instanceTypeDetail1;
						std::string instanceType;
					};
					std::vector<AvailableZone::MasterResource> masterResources;
					std::string zoneId;
					std::vector<AvailableZone::SupportedEngine> supportedEngines;
					std::string regionId;
				};


				DescribeAvailableResourceResult();
				explicit DescribeAvailableResourceResult(const std::string &payload);
				~DescribeAvailableResourceResult();
				std::vector<AvailableZone> getAvailableZones()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AvailableZone> availableZones_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_DESCRIBEAVAILABLERESOURCERESULT_H_