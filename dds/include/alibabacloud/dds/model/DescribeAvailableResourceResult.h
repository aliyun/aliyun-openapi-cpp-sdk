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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEAVAILABLERESOURCERESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEAVAILABLERESOURCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeAvailableResourceResult : public ServiceResult
			{
			public:
				struct SupportedDBType
				{
					struct AvailableZone
					{
						struct SupportedEngineVersion
						{
							struct SupportedEngine
							{
								struct SupportedNodeType
								{
									struct AvailableResource
									{
										struct DBInstanceStorageRange
										{
											int min;
											int max;
											int step;
										};
										std::string instanceClassRemark;
										DBInstanceStorageRange dBInstanceStorageRange;
										std::string instanceClass;
									};
									std::string networkTypes;
									std::string nodeType;
									std::vector<SupportedNodeType::AvailableResource> availableResources;
								};
								std::vector<SupportedEngine::SupportedNodeType> supportedNodeTypes;
								std::string engine;
							};
							std::string version;
							std::vector<SupportedEngineVersion::SupportedEngine> supportedEngines;
						};
						std::string zoneId;
						std::vector<AvailableZone::SupportedEngineVersion> supportedEngineVersions;
						std::string regionId;
					};
					std::string dbType;
					std::vector<SupportedDBType::AvailableZone> availableZones;
				};


				DescribeAvailableResourceResult();
				explicit DescribeAvailableResourceResult(const std::string &payload);
				~DescribeAvailableResourceResult();
				std::vector<SupportedDBType> getSupportedDBTypes()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SupportedDBType> supportedDBTypes_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEAVAILABLERESOURCERESULT_H_