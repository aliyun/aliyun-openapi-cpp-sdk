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
					float storageUsedMB;
					std::string aPNodeStatus;
					std::string name;
				};
				struct DBNode
				{
					std::string dBNodeStatus;
					std::string addedCpuCores;
					std::string orca;
					std::string dBNodeRole;
					std::string subCluster;
					std::string imciSwitch;
					std::string dBNodeId;
					std::string remoteMemorySize;
					std::string tair;
					std::string multiMasterLocalStandby;
					std::string multiMasterPrimaryNode;
					std::string sccMode;
					int failoverPriority;
					std::string serverWeight;
					std::string dBNodeDescription;
					std::string memorySize;
					std::string mirrorInsName;
					std::string zoneId;
					int maxConnections;
					int maxIOPS;
					std::string dBNodeClass;
					std::string serverlessType;
					std::string creationTime;
					std::string cpuCores;
					std::string masterId;
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
				std::string getResourceGroupId()const;
				long getCompressStorageUsed()const;
				std::string getOrca()const;
				std::string getStoragePayType()const;
				long getDataLevel1BackupChainSize()const;
				std::string getProxyStatus()const;
				std::string getDBType()const;
				long getBlktagUsed()const;
				std::string getStandbyHAMode()const;
				std::string getProxyStandardCpuCores()const;
				std::string getDBVersion()const;
				std::vector<DBNode> getDBNodes()const;
				std::string getImciAutoIndex()const;
				std::string getFeatureHTAPSupported()const;
				std::vector<Tag> getTags()const;
				std::string getEngine()const;
				std::string getStorageType()const;
				std::string getArchitecture()const;
				std::string getVPCId()const;
				std::string getVSwitchId()const;
				std::string getDBClusterDescription()const;
				std::string getExpired()const;
				std::string getPayType()const;
				std::string getLockMode()const;
				std::string getProvisionedIops()const;
				long getStorageUsed()const;
				long getInodeTotal()const;
				std::string getRestoreDataPoint()const;
				std::string getCompressStorageMode()const;
				std::string getDBVersionStatus()const;
				std::string getProxyServerlessType()const;
				std::string getCreationTime()const;
				std::string getImperceptibleSwitch()const;
				std::string getProxyType()const;
				std::string getExpireTime()const;
				int getDeletionLock()const;
				std::string getCategory()const;
				std::string getAiCreatingTime()const;
				bool getStorageTypeWhiteListSwitch()const;
				std::string getDBClusterId()const;
				std::string getHotStandbyCluster()const;
				std::string getDeployUnit()const;
				std::string getAiFreeMode()const;
				std::string getDBClusterNetworkType()const;
				bool getIsLatestVersion()const;
				std::string getSourceRegionId()const;
				long getStorageMax()const;
				std::string getZoneIds()const;
				bool getHotStandbyWhiteListSwitch()const;
				long getInodeUsed()const;
				std::string getRestoreType()const;
				std::string getMaintainTime()const;
				std::string getBurstingEnabled()const;
				std::string getHotStandbyClusterStatus()const;
				long getBlktagTotal()const;
				std::string getDataSyncMode()const;
				std::string getSourceDBCluster()const;
				std::string getDBClusterStatus()const;
				std::string getProxyCpuCores()const;
				std::string getStrictConsistency()const;
				bool getIsProxyLatestVersion()const;
				long getStorageSpace()const;
				std::string getServerlessType()const;
				std::string getSubCategory()const;
				std::string getAiType()const;
				bool getHasCompleteStandbyRes()const;
				std::string getSupportInstantSwitchWithImci()const;
				RelatedAPInstance getRelatedAPInstance()const;
				long getSQLSize()const;
				std::string getRegionId()const;
				std::string getRowCompression()const;
				bool getHotStandbyHealthy()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string resourceGroupId_;
				long compressStorageUsed_;
				std::string orca_;
				std::string storagePayType_;
				long dataLevel1BackupChainSize_;
				std::string proxyStatus_;
				std::string dBType_;
				long blktagUsed_;
				std::string standbyHAMode_;
				std::string proxyStandardCpuCores_;
				std::string dBVersion_;
				std::vector<DBNode> dBNodes_;
				std::string imciAutoIndex_;
				std::string featureHTAPSupported_;
				std::vector<Tag> tags_;
				std::string engine_;
				std::string storageType_;
				std::string architecture_;
				std::string vPCId_;
				std::string vSwitchId_;
				std::string dBClusterDescription_;
				std::string expired_;
				std::string payType_;
				std::string lockMode_;
				std::string provisionedIops_;
				long storageUsed_;
				long inodeTotal_;
				std::string restoreDataPoint_;
				std::string compressStorageMode_;
				std::string dBVersionStatus_;
				std::string proxyServerlessType_;
				std::string creationTime_;
				std::string imperceptibleSwitch_;
				std::string proxyType_;
				std::string expireTime_;
				int deletionLock_;
				std::string category_;
				std::string aiCreatingTime_;
				bool storageTypeWhiteListSwitch_;
				std::string dBClusterId_;
				std::string hotStandbyCluster_;
				std::string deployUnit_;
				std::string aiFreeMode_;
				std::string dBClusterNetworkType_;
				bool isLatestVersion_;
				std::string sourceRegionId_;
				long storageMax_;
				std::string zoneIds_;
				bool hotStandbyWhiteListSwitch_;
				long inodeUsed_;
				std::string restoreType_;
				std::string maintainTime_;
				std::string burstingEnabled_;
				std::string hotStandbyClusterStatus_;
				long blktagTotal_;
				std::string dataSyncMode_;
				std::string sourceDBCluster_;
				std::string dBClusterStatus_;
				std::string proxyCpuCores_;
				std::string strictConsistency_;
				bool isProxyLatestVersion_;
				long storageSpace_;
				std::string serverlessType_;
				std::string subCategory_;
				std::string aiType_;
				bool hasCompleteStandbyRes_;
				std::string supportInstantSwitchWithImci_;
				RelatedAPInstance relatedAPInstance_;
				long sQLSize_;
				std::string regionId_;
				std::string rowCompression_;
				bool hotStandbyHealthy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERATTRIBUTERESULT_H_