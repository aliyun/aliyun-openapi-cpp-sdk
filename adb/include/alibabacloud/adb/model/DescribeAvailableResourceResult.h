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

#ifndef ALIBABACLOUD_ADB_MODEL_DESCRIBEAVAILABLERESOURCERESULT_H_
#define ALIBABACLOUD_ADB_MODEL_DESCRIBEAVAILABLERESOURCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/adb/AdbExport.h>

namespace AlibabaCloud
{
	namespace Adb
	{
		namespace Model
		{
			class ALIBABACLOUD_ADB_EXPORT DescribeAvailableResourceResult : public ServiceResult
			{
			public:
				struct AvailableZone
				{
					struct SupportedModeItem
					{
						struct SupportedSerialListItem
						{
							struct SupportedFlexibleResourceItem
							{
								struct SupportedElasticIOResource
								{
									std::string step;
									std::string maxCount;
									std::string minCount;
								};
								std::string storageType;
								std::vector<std::string> supportedComputeResource1;
								SupportedElasticIOResource supportedElasticIOResource;
								std::vector<std::string> supportedStorageResource2;
							};
							struct SupportedInstanceClass
							{
								struct SupportedNodeCount
								{
									struct NodeCount
									{
										std::string step;
										std::string maxCount;
										std::string minCount;
									};
									NodeCount nodeCount;
									std::vector<std::string> storageSize;
								};
								struct SupportedExecutor
								{
									struct NodeCount3
									{
										std::string step;
										std::string maxCount;
										std::string minCount;
									};
									NodeCount3 nodeCount3;
								};
								std::vector<SupportedInstanceClass::SupportedExecutor> supportedExecutorList;
								std::string instanceClass;
								std::vector<SupportedInstanceClass::SupportedNodeCount> supportedNodeCountList;
								std::string tips;
							};
							std::string serial;
							std::vector<SupportedSerialListItem::SupportedFlexibleResourceItem> supportedFlexibleResource;
							std::vector<SupportedSerialListItem::SupportedInstanceClass> supportedInstanceClassList;
						};
						std::string mode;
						std::vector<SupportedModeItem::SupportedSerialListItem> supportedSerialList;
					};
					std::string zoneId;
					std::vector<std::string> supportedStorageResource;
					std::vector<std::string> supportedComputeResource;
					std::vector<AvailableZone::SupportedModeItem> supportedMode;
				};


				DescribeAvailableResourceResult();
				explicit DescribeAvailableResourceResult(const std::string &payload);
				~DescribeAvailableResourceResult();
				std::string getRegionId()const;
				std::vector<AvailableZone> getAvailableZoneList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string regionId_;
				std::vector<AvailableZone> availableZoneList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADB_MODEL_DESCRIBEAVAILABLERESOURCERESULT_H_