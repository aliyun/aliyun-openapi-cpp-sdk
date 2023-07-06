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
				struct RelatedAPInstance
				{
					std::string totalAPNodes;
					std::string classCode;
					std::string ossStorageUsed;
					std::string name;
				};
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
					std::string serverlessType;
					std::string creationTime;
					std::string sccMode;
					std::string masterId;
					int failoverPriority;
					std::string hotReplicaMode;
					std::string serverWeight;
				};
				struct Tag
				{
					std::string value;
					std::string key;
				};


				DescribeDBClusterAttributeResult();
				explicit DescribeDBClusterAttributeResult(const std::string &payload);
				~DescribeDBClusterAttributeResult();
				std::string getResourceGroupId()const;
				std::string getStoragePayType()const;
				long getDataLevel1BackupChainSize()const;
				std::string getProxyStatus()const;
				std::string getDBType()const;
				long getBlktagUsed()const;
				std::string getStandbyHAMode()const;
				std::string getProxyStandardCpuCores()const;
				std::string getDBVersion()const;
				std::vector<DBNode> getDBNodes()const;
				std::string getFeatureHTAPSupported()const;
				std::vector<Tag> getTags()const;
				std::string getEngine()const;
				std::string getStorageType()const;
				std::string getVPCId()const;
				std::string getVSwitchId()const;
				std::string getDBClusterDescription()const;
				std::string getExpired()const;
				std::string getPayType()const;
				std::string getLockMode()const;
				long getStorageUsed()const;
				long getInodeTotal()const;
				std::string getDBVersionStatus()const;
				std::string getProxyServerlessType()const;
				std::string getCreationTime()const;
				std::string getProxyType()const;
				std::string getExpireTime()const;
				int getDeletionLock()const;
				std::string getCategory()const;
				std::string getDBClusterId()const;
				std::string getDeployUnit()const;
				std::string getDBClusterNetworkType()const;
				bool getIsLatestVersion()const;
				long getStorageMax()const;
				std::string getZoneIds()const;
				long getInodeUsed()const;
				std::string getMaintainTime()const;
				long getBlktagTotal()const;
				std::string getDataSyncMode()const;
				std::string getDBClusterStatus()const;
				std::string getProxyCpuCores()const;
				std::string getStrictConsistency()const;
				bool getIsProxyLatestVersion()const;
				long getStorageSpace()const;
				std::string getServerlessType()const;
				std::string getSubCategory()const;
				std::string getAiType()const;
				bool getHasCompleteStandbyRes()const;
				RelatedAPInstance getRelatedAPInstance()const;
				long getSQLSize()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string resourceGroupId_;
				std::string storagePayType_;
				long dataLevel1BackupChainSize_;
				std::string proxyStatus_;
				std::string dBType_;
				long blktagUsed_;
				std::string standbyHAMode_;
				std::string proxyStandardCpuCores_;
				std::string dBVersion_;
				std::vector<DBNode> dBNodes_;
				std::string featureHTAPSupported_;
				std::vector<Tag> tags_;
				std::string engine_;
				std::string storageType_;
				std::string vPCId_;
				std::string vSwitchId_;
				std::string dBClusterDescription_;
				std::string expired_;
				std::string payType_;
				std::string lockMode_;
				long storageUsed_;
				long inodeTotal_;
				std::string dBVersionStatus_;
				std::string proxyServerlessType_;
				std::string creationTime_;
				std::string proxyType_;
				std::string expireTime_;
				int deletionLock_;
				std::string category_;
				std::string dBClusterId_;
				std::string deployUnit_;
				std::string dBClusterNetworkType_;
				bool isLatestVersion_;
				long storageMax_;
				std::string zoneIds_;
				long inodeUsed_;
				std::string maintainTime_;
				long blktagTotal_;
				std::string dataSyncMode_;
				std::string dBClusterStatus_;
				std::string proxyCpuCores_;
				std::string strictConsistency_;
				bool isProxyLatestVersion_;
				long storageSpace_;
				std::string serverlessType_;
				std::string subCategory_;
				std::string aiType_;
				bool hasCompleteStandbyRes_;
				RelatedAPInstance relatedAPInstance_;
				long sQLSize_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERATTRIBUTERESULT_H_