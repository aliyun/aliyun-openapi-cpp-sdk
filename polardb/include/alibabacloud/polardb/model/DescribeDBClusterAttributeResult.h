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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERATTRIBUTERESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeDBClusterAttributeResult : public ServiceResult
			{
			public:
				struct Tag
				{
					std::string value;
					std::string key;
				};
				struct DBNode
				{
					std::string dBNodeStatus;
					std::string zoneId;
					int maxConnections;
					std::string dBNodeRole;
					std::string creationTime;
					std::string dBNodeId;
					int failoverPriority;
					std::string dBNodeClass;
					int maxIOPS;
				};


				DescribeDBClusterAttributeResult();
				explicit DescribeDBClusterAttributeResult(const std::string &payload);
				~DescribeDBClusterAttributeResult();
				int getDeletionLock()const;
				std::string getResourceGroupId()const;
				long getDataLevel1BackupChainSize()const;
				std::string getDBClusterId()const;
				std::string getDBClusterNetworkType()const;
				std::string getDBType()const;
				bool getIsLatestVersion()const;
				std::string getDBVersion()const;
				long getStorageMax()const;
				std::vector<DBNode> getDBNodes()const;
				std::string getZoneIds()const;
				std::string getMaintainTime()const;
				std::vector<Tag> getTags()const;
				std::string getEngine()const;
				std::string getVPCId()const;
				std::string getDBClusterStatus()const;
				std::string getVSwitchId()const;
				std::string getDBClusterDescription()const;
				std::string getExpired()const;
				std::string getPayType()const;
				std::string getLockMode()const;
				long getStorageUsed()const;
				std::string getCreationTime()const;
				std::string getRegionId()const;
				long getSQLSize()const;
				std::string getExpireTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				int deletionLock_;
				std::string resourceGroupId_;
				long dataLevel1BackupChainSize_;
				std::string dBClusterId_;
				std::string dBClusterNetworkType_;
				std::string dBType_;
				bool isLatestVersion_;
				std::string dBVersion_;
				long storageMax_;
				std::vector<DBNode> dBNodes_;
				std::string zoneIds_;
				std::string maintainTime_;
				std::vector<Tag> tags_;
				std::string engine_;
				std::string vPCId_;
				std::string dBClusterStatus_;
				std::string vSwitchId_;
				std::string dBClusterDescription_;
				std::string expired_;
				std::string payType_;
				std::string lockMode_;
				long storageUsed_;
				std::string creationTime_;
				std::string regionId_;
				long sQLSize_;
				std::string expireTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERATTRIBUTERESULT_H_