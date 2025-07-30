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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEAVAILABLERESOURCERESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEAVAILABLERESOURCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeAvailableResourceResult : public ServiceResult
			{
			public:
				struct AvailableZone
				{
					struct SupportedEngine
					{
						struct SupportedEditionType
						{
							struct SupportedSeriesType
							{
								struct SupportedEngineVersion
								{
									struct SupportedArchitectureType
									{
										struct SupportedShardNumber
										{
											struct SupportedNodeType
											{
												struct AvailableResource
												{
													long capacity;
													std::string instanceClassRemark;
													std::string instanceClass;
												};
												std::vector<SupportedNodeType::AvailableResource> availableResources;
												std::string supportedNodeType;
											};
											std::vector<SupportedShardNumber::SupportedNodeType> supportedNodeTypes;
											std::string shardNumber;
										};
										std::string architecture;
										std::vector<SupportedArchitectureType::SupportedShardNumber> supportedShardNumbers;
									};
									std::vector<SupportedEngineVersion::SupportedArchitectureType> supportedArchitectureTypes;
									std::string version;
								};
								std::string seriesType;
								std::vector<SupportedSeriesType::SupportedEngineVersion> supportedEngineVersions;
							};
							std::vector<SupportedEditionType::SupportedSeriesType> supportedSeriesTypes;
							std::string editionType;
						};
						std::vector<SupportedEngine::SupportedEditionType> supportedEditionTypes;
						std::string engine;
					};
					std::string status;
					std::string zoneName;
					std::string networkTypes;
					bool isMainSale;
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
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEAVAILABLERESOURCERESULT_H_