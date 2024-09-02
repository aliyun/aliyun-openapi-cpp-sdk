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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBERESTORABLETENANTSRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBERESTORABLETENANTSRESULT_H_

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
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeRestorableTenantsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct TimeIntervalListItem
					{
						bool fromArchive;
						std::string storageType;
						std::string endTime;
						std::string startTime;
					};
					struct BackupSetsItem
					{
						std::string checkpoint;
						std::string tenantId;
						std::string setId;
						std::string backupSetId;
					};
					std::vector<Data::TimeIntervalListItem> timeIntervalList;
					std::string tenantAlias;
					std::string clusterId;
					std::string tenantName;
					long unitNum;
					std::string method;
					long cpuNum;
					std::string sourceRegion;
					std::string obTenantId;
					long usedDisk;
					std::string tenantId;
					std::vector<Data::BackupSetsItem> backupSets;
					std::string clusterName;
					int tenantDataBackupRemainDays;
					std::string obVersion;
					std::string backupBucketName;
					long memoryNum;
					std::string tenantMode;
					std::string obRpmVersion;
				};


				DescribeRestorableTenantsResult();
				explicit DescribeRestorableTenantsResult(const std::string &payload);
				~DescribeRestorableTenantsResult();
				int getTotalCount()const;
				std::vector<Data> getTenants()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<Data> tenants_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBERESTORABLETENANTSRESULT_H_