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
				struct DBNode
				{
					std::string dBNodeStatus;
					std::string zoneId;
					int maxConnections;
					std::string addedCpuCores;
					std::string dBNodeRole;
					std::string imciSwitch;
					std::string dBNodeId;
					int maxIOPS;
					std::string dBNodeClass;
					std::string creationTime;
					std::string sccMode;
					std::string masterId;
					int failoverPriority;
					std::string hotReplicaMode;
				};
				struct Tag
				{
					std::string value;
					std::string key;
				};


				DescribeDBClusterAttributeResult();
				explicit DescribeDBClusterAttributeResult(const std::string &payload);
				~DescribeDBClusterAttributeResult();
				int getDeletionLock()const;
				std::string getCategory()const;
				std::string getResourceGroupId()const;
				std::string getStoragePayType()const;
				long getDataLevel1BackupChainSize()const;
				std::string getDBClusterId()const;
				std::string getProxyStatus()const;
				std::string getDBType()const;
				std::string getDBClusterNetworkType()const;
				long getBlktagUsed()const;
				std::string getProxyStandardCpuCores()const;
				bool getIsLatestVersion()const;
				long getStorageMax()const;
				std::string getDBVersion()const;
				std::vector<DBNode> getDBNodes()const;
				std::string getZoneIds()const;
				long getInodeUsed()const;
				std::string getMaintainTime()const;
				std::vector<Tag> getTags()const;
				std::string getEngine()const;
				long getBlktagTotal()const;
				std::string getStorageType()const;
				std::string getVPCId()const;
				std::string getDBClusterStatus()const;
				std::string getVSwitchId()const;
				std::string getDBClusterDescription()const;
				std::string getExpired()const;
				std::string getProxyCpuCores()const;
				std::string getPayType()const;
				std::string getLockMode()const;
				long getStorageUsed()const;
				long getInodeTotal()const;
				bool getIsProxyLatestVersion()const;
				long getStorageSpace()const;
				std::string getDBVersionStatus()const;
				std::string getServerlessType()const;
				std::string getCreationTime()const;
				std::string getSubCategory()const;
				long getSQLSize()const;
				std::string getRegionId()const;
				std::string getProxyType()const;
				std::string getExpireTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				int deletionLock_;
				std::string category_;
				std::string resourceGroupId_;
				std::string storagePayType_;
				long dataLevel1BackupChainSize_;
				std::string dBClusterId_;
				std::string proxyStatus_;
				std::string dBType_;
				std::string dBClusterNetworkType_;
				long blktagUsed_;
				std::string proxyStandardCpuCores_;
				bool isLatestVersion_;
				long storageMax_;
				std::string dBVersion_;
				std::vector<DBNode> dBNodes_;
				std::string zoneIds_;
				long inodeUsed_;
				std::string maintainTime_;
				std::vector<Tag> tags_;
				std::string engine_;
				long blktagTotal_;
				std::string storageType_;
				std::string vPCId_;
				std::string dBClusterStatus_;
				std::string vSwitchId_;
				std::string dBClusterDescription_;
				std::string expired_;
				std::string proxyCpuCores_;
				std::string payType_;
				std::string lockMode_;
				long storageUsed_;
				long inodeTotal_;
				bool isProxyLatestVersion_;
				long storageSpace_;
				std::string dBVersionStatus_;
				std::string serverlessType_;
				std::string creationTime_;
				std::string subCategory_;
				long sQLSize_;
				std::string regionId_;
				std::string proxyType_;
				std::string expireTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERATTRIBUTERESULT_H_