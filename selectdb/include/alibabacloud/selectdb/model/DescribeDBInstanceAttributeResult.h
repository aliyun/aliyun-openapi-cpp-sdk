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

#ifndef ALIBABACLOUD_SELECTDB_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_
#define ALIBABACLOUD_SELECTDB_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/selectdb/SelectdbExport.h>

namespace AlibabaCloud
{
	namespace Selectdb
	{
		namespace Model
		{
			class ALIBABACLOUD_SELECTDB_EXPORT DescribeDBInstanceAttributeResult : public ServiceResult
			{
			public:
				struct DbClusterListItem
				{
					std::string status;
					std::string createdTime;
					long memory;
					std::string performanceLevel;
					std::string startTime;
					std::string dbClusterName;
					bool scalingRulesEnable;
					std::string cacheStorageType;
					std::string modifiedTime;
					std::string chargeType;
					long cpuCores;
					std::string dbClusterId;
					std::string cacheStorageSizeGB;
					std::string dbInstanceName;
					std::string dbClusterClass;
				};
				struct TagsItem
				{
					std::string tagKey;
					std::string tagValue;
				};


				DescribeDBInstanceAttributeResult();
				explicit DescribeDBInstanceAttributeResult(const std::string &payload);
				~DescribeDBInstanceAttributeResult();
				std::string getEngineMinorVersion()const;
				std::string getDescription()const;
				std::string getResourceGroupId()const;
				std::string getGmtModified()const;
				std::vector<std::string> getCanUpgradeVersions()const;
				std::string getMaintainStarttime()const;
				std::string getSubDomain()const;
				long getObjectStoreSize()const;
				std::string getDBInstanceId()const;
				std::string getLockReason()const;
				std::vector<TagsItem> getTags()const;
				std::string getEngine()const;
				std::string getStatus()const;
				std::string getMaintainEndtime()const;
				std::string getEngineVersion()const;
				long getResourceCpu()const;
				std::string getZoneId()const;
				std::string getCreateTime()const;
				long getStorageSize()const;
				long getLockMode()const;
				std::vector<DbClusterListItem> getDBClusterList()const;
				std::string getVpcId()const;
				std::string getChargeType()const;
				std::string getRegionId()const;
				std::string getExpireTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string engineMinorVersion_;
				std::string description_;
				std::string resourceGroupId_;
				std::string gmtModified_;
				std::vector<std::string> canUpgradeVersions_;
				std::string maintainStarttime_;
				std::string subDomain_;
				long objectStoreSize_;
				std::string dBInstanceId_;
				std::string lockReason_;
				std::vector<TagsItem> tags_;
				std::string engine_;
				std::string status_;
				std::string maintainEndtime_;
				std::string engineVersion_;
				long resourceCpu_;
				std::string zoneId_;
				std::string createTime_;
				long storageSize_;
				long lockMode_;
				std::vector<DbClusterListItem> dBClusterList_;
				std::string vpcId_;
				std::string chargeType_;
				std::string regionId_;
				std::string expireTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SELECTDB_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_