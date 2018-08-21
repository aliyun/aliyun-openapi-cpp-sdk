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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeLaunchTemplateVersionsResult : public ServiceResult
			{
			public:
				struct LaunchTemplateVersionSet
				{
					struct LaunchTemplateData
					{
						struct DataDisk
						{
							std::string snapshotId;
							std::string category;
							std::string description;
							int size;
							std::string encrypted;
							bool deleteWithInstance;
							std::string diskName;
						};
						struct NetworkInterface
						{
							std::string description;
							std::string vSwitchId;
							std::string securityGroupId;
							std::string networkInterfaceName;
							std::string primaryIpAddress;
						};
						struct InstanceTag
						{
							std::string value;
							std::string key;
						};
						std::string imageOwnerAlias;
						std::string description;
						std::vector<DataDisk> dataDisks;
						std::string resourceGroupId;
						int systemDiskSize;
						std::string systemDiskDescription;
						std::string userData;
						std::string instanceChargeType;
						int spotDuration;
						std::string ramRoleName;
						std::string networkType;
						std::vector<NetworkInterface> networkInterfaces;
						std::string imageId;
						std::string systemDiskDiskName;
						float spotPriceLimit;
						std::string instanceType;
						std::vector<InstanceTag> tags;
						std::string hostName;
						std::string spotStrategy;
						std::string keyPairName;
						std::string ioOptimized;
						std::string zoneId;
						std::string securityGroupId;
						std::string vSwitchId;
						int period;
						std::string systemDiskCategory;
						std::string internetChargeType;
						std::string instanceName;
						int internetMaxBandwidthOut;
						bool enableVmOsConfig;
						std::string vpcId;
						int internetMaxBandwidthIn;
						int systemDiskIops;
						std::string securityEnhancementStrategy;
						std::string autoReleaseTime;
					};
					LaunchTemplateData launchTemplateData;
					std::string launchTemplateName;
					std::string versionDescription;
					std::string createdBy;
					std::string modifiedTime;
					std::string createTime;
					bool defaultVersion;
					std::string launchTemplateId;
					long versionNumber;
				};


				DescribeLaunchTemplateVersionsResult();
				explicit DescribeLaunchTemplateVersionsResult(const std::string &payload);
				~DescribeLaunchTemplateVersionsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<LaunchTemplateVersionSet> getLaunchTemplateVersionSets()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<LaunchTemplateVersionSet> launchTemplateVersionSets_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSRESULT_H_