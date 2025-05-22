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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEMARKETINGACTIVITYRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEMARKETINGACTIVITYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeMarketingActivityResult : public ServiceResult
			{
			public:
				struct ItemsItem
				{
					std::string category;
					long memory;
					std::string cpu;
					int maxIops;
					int upgradeDiskSize;
					long upgradeMemory;
					int maxIombps;
					int diskSize;
					std::string engine;
					std::string upgradeClassCode;
					int upgradeMaxIops;
					std::string engineVersion;
					std::string storageType;
					int maxConnections;
					std::string upgradeCpu;
					std::string instanceId;
					std::string upgradeReferencePrice;
					std::string instanceName;
					std::string upgradeCategory;
					std::string upgradeStorageType;
					std::string classCode;
					int upgradeMaxIombps;
					int upgradeMaxConnections;
					std::string chargeType;
					std::string classGroup;
					std::string upgradeClassGroup;
					std::string upgradeDescContent;
				};


				DescribeMarketingActivityResult();
				explicit DescribeMarketingActivityResult(const std::string &payload);
				~DescribeMarketingActivityResult();
				std::vector<ItemsItem> getItems()const;
				std::string getRegionId()const;
				std::string getBid()const;
				long getAliUid()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ItemsItem> items_;
				std::string regionId_;
				std::string bid_;
				long aliUid_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEMARKETINGACTIVITYRESULT_H_