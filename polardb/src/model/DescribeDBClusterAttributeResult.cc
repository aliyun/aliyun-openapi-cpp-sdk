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

#include <alibabacloud/polardb/model/DescribeDBClusterAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterAttributeResult::DescribeDBClusterAttributeResult() :
	ServiceResult()
{}

DescribeDBClusterAttributeResult::DescribeDBClusterAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterAttributeResult::~DescribeDBClusterAttributeResult()
{}

void DescribeDBClusterAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBNodesNode = value["DBNodes"]["DBNode"];
	for (auto valueDBNodesDBNode : allDBNodesNode)
	{
		DBNode dBNodesObject;
		if(!valueDBNodesDBNode["CreationTime"].isNull())
			dBNodesObject.creationTime = valueDBNodesDBNode["CreationTime"].asString();
		if(!valueDBNodesDBNode["FailoverPriority"].isNull())
			dBNodesObject.failoverPriority = std::stoi(valueDBNodesDBNode["FailoverPriority"].asString());
		if(!valueDBNodesDBNode["MaxIOPS"].isNull())
			dBNodesObject.maxIOPS = std::stoi(valueDBNodesDBNode["MaxIOPS"].asString());
		if(!valueDBNodesDBNode["DBNodeClass"].isNull())
			dBNodesObject.dBNodeClass = valueDBNodesDBNode["DBNodeClass"].asString();
		if(!valueDBNodesDBNode["CpuCores"].isNull())
			dBNodesObject.cpuCores = valueDBNodesDBNode["CpuCores"].asString();
		if(!valueDBNodesDBNode["MemorySize"].isNull())
			dBNodesObject.memorySize = valueDBNodesDBNode["MemorySize"].asString();
		if(!valueDBNodesDBNode["DBNodeRole"].isNull())
			dBNodesObject.dBNodeRole = valueDBNodesDBNode["DBNodeRole"].asString();
		if(!valueDBNodesDBNode["ZoneId"].isNull())
			dBNodesObject.zoneId = valueDBNodesDBNode["ZoneId"].asString();
		if(!valueDBNodesDBNode["MaxConnections"].isNull())
			dBNodesObject.maxConnections = std::stoi(valueDBNodesDBNode["MaxConnections"].asString());
		if(!valueDBNodesDBNode["DBNodeStatus"].isNull())
			dBNodesObject.dBNodeStatus = valueDBNodesDBNode["DBNodeStatus"].asString();
		if(!valueDBNodesDBNode["DBNodeId"].isNull())
			dBNodesObject.dBNodeId = valueDBNodesDBNode["DBNodeId"].asString();
		if(!valueDBNodesDBNode["ImciSwitch"].isNull())
			dBNodesObject.imciSwitch = valueDBNodesDBNode["ImciSwitch"].asString();
		if(!valueDBNodesDBNode["HotReplicaMode"].isNull())
			dBNodesObject.hotReplicaMode = valueDBNodesDBNode["HotReplicaMode"].asString();
		if(!valueDBNodesDBNode["AddedCpuCores"].isNull())
			dBNodesObject.addedCpuCores = valueDBNodesDBNode["AddedCpuCores"].asString();
		if(!valueDBNodesDBNode["MasterId"].isNull())
			dBNodesObject.masterId = valueDBNodesDBNode["MasterId"].asString();
		if(!valueDBNodesDBNode["SccMode"].isNull())
			dBNodesObject.sccMode = valueDBNodesDBNode["SccMode"].asString();
		if(!valueDBNodesDBNode["ServerWeight"].isNull())
			dBNodesObject.serverWeight = valueDBNodesDBNode["ServerWeight"].asString();
		if(!valueDBNodesDBNode["ServerlessType"].isNull())
			dBNodesObject.serverlessType = valueDBNodesDBNode["ServerlessType"].asString();
		if(!valueDBNodesDBNode["SubCluster"].isNull())
			dBNodesObject.subCluster = valueDBNodesDBNode["SubCluster"].asString();
		if(!valueDBNodesDBNode["Tair"].isNull())
			dBNodesObject.tair = valueDBNodesDBNode["Tair"].asString();
		if(!valueDBNodesDBNode["RemoteMemorySize"].isNull())
			dBNodesObject.remoteMemorySize = valueDBNodesDBNode["RemoteMemorySize"].asString();
		if(!valueDBNodesDBNode["Orca"].isNull())
			dBNodesObject.orca = valueDBNodesDBNode["Orca"].asString();
		if(!valueDBNodesDBNode["MirrorInsName"].isNull())
			dBNodesObject.mirrorInsName = valueDBNodesDBNode["MirrorInsName"].asString();
		if(!valueDBNodesDBNode["MultiMasterLocalStandby"].isNull())
			dBNodesObject.multiMasterLocalStandby = valueDBNodesDBNode["MultiMasterLocalStandby"].asString();
		if(!valueDBNodesDBNode["MultiMasterPrimaryNode"].isNull())
			dBNodesObject.multiMasterPrimaryNode = valueDBNodesDBNode["MultiMasterPrimaryNode"].asString();
		if(!valueDBNodesDBNode["DBNodeDescription"].isNull())
			dBNodesObject.dBNodeDescription = valueDBNodesDBNode["DBNodeDescription"].asString();
		dBNodes_.push_back(dBNodesObject);
	}
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["Key"].isNull())
			tagsObject.key = valueTagsTag["Key"].asString();
		if(!valueTagsTag["Value"].isNull())
			tagsObject.value = valueTagsTag["Value"].asString();
		tags_.push_back(tagsObject);
	}
	auto relatedAPInstanceNode = value["RelatedAPInstance"];
	if(!relatedAPInstanceNode["Name"].isNull())
		relatedAPInstance_.name = relatedAPInstanceNode["Name"].asString();
	if(!relatedAPInstanceNode["ClassCode"].isNull())
		relatedAPInstance_.classCode = relatedAPInstanceNode["ClassCode"].asString();
	if(!relatedAPInstanceNode["OssStorageUsed"].isNull())
		relatedAPInstance_.ossStorageUsed = relatedAPInstanceNode["OssStorageUsed"].asString();
	if(!relatedAPInstanceNode["TotalAPNodes"].isNull())
		relatedAPInstance_.totalAPNodes = relatedAPInstanceNode["TotalAPNodes"].asString();
	if(!relatedAPInstanceNode["StorageUsedMB"].isNull())
		relatedAPInstance_.storageUsedMB = std::stof(relatedAPInstanceNode["StorageUsedMB"].asString());
	if(!relatedAPInstanceNode["APNodeStatus"].isNull())
		relatedAPInstance_.aPNodeStatus = relatedAPInstanceNode["APNodeStatus"].asString();
	if(!value["DeletionLock"].isNull())
		deletionLock_ = std::stoi(value["DeletionLock"].asString());
	if(!value["Category"].isNull())
		category_ = value["Category"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["DataLevel1BackupChainSize"].isNull())
		dataLevel1BackupChainSize_ = std::stol(value["DataLevel1BackupChainSize"].asString());
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["DBType"].isNull())
		dBType_ = value["DBType"].asString();
	if(!value["DBClusterNetworkType"].isNull())
		dBClusterNetworkType_ = value["DBClusterNetworkType"].asString();
	if(!value["IsLatestVersion"].isNull())
		isLatestVersion_ = value["IsLatestVersion"].asString() == "true";
	if(!value["HasCompleteStandbyRes"].isNull())
		hasCompleteStandbyRes_ = value["HasCompleteStandbyRes"].asString() == "true";
	if(!value["HotStandbyClusterStatus"].isNull())
		hotStandbyClusterStatus_ = value["HotStandbyClusterStatus"].asString();
	if(!value["HotStandbyCluster"].isNull())
		hotStandbyCluster_ = value["HotStandbyCluster"].asString();
	if(!value["DataSyncMode"].isNull())
		dataSyncMode_ = value["DataSyncMode"].asString();
	if(!value["StandbyHAMode"].isNull())
		standbyHAMode_ = value["StandbyHAMode"].asString();
	if(!value["CompressStorageMode"].isNull())
		compressStorageMode_ = value["CompressStorageMode"].asString();
	if(!value["StorageMax"].isNull())
		storageMax_ = std::stol(value["StorageMax"].asString());
	if(!value["DBVersion"].isNull())
		dBVersion_ = value["DBVersion"].asString();
	if(!value["ZoneIds"].isNull())
		zoneIds_ = value["ZoneIds"].asString();
	if(!value["MaintainTime"].isNull())
		maintainTime_ = value["MaintainTime"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["VPCId"].isNull())
		vPCId_ = value["VPCId"].asString();
	if(!value["DBClusterStatus"].isNull())
		dBClusterStatus_ = value["DBClusterStatus"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["DBClusterDescription"].isNull())
		dBClusterDescription_ = value["DBClusterDescription"].asString();
	if(!value["Expired"].isNull())
		expired_ = value["Expired"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["StoragePayType"].isNull())
		storagePayType_ = value["StoragePayType"].asString();
	if(!value["LockMode"].isNull())
		lockMode_ = value["LockMode"].asString();
	if(!value["StorageUsed"].isNull())
		storageUsed_ = std::stol(value["StorageUsed"].asString());
	if(!value["CompressStorageUsed"].isNull())
		compressStorageUsed_ = std::stol(value["CompressStorageUsed"].asString());
	if(!value["StorageSpace"].isNull())
		storageSpace_ = std::stol(value["StorageSpace"].asString());
	if(!value["DBVersionStatus"].isNull())
		dBVersionStatus_ = value["DBVersionStatus"].asString();
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["SQLSize"].isNull())
		sQLSize_ = std::stol(value["SQLSize"].asString());
	if(!value["InodeTotal"].isNull())
		inodeTotal_ = std::stol(value["InodeTotal"].asString());
	if(!value["InodeUsed"].isNull())
		inodeUsed_ = std::stol(value["InodeUsed"].asString());
	if(!value["BlktagTotal"].isNull())
		blktagTotal_ = std::stol(value["BlktagTotal"].asString());
	if(!value["BlktagUsed"].isNull())
		blktagUsed_ = std::stol(value["BlktagUsed"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["SubCategory"].isNull())
		subCategory_ = value["SubCategory"].asString();
	if(!value["DeployUnit"].isNull())
		deployUnit_ = value["DeployUnit"].asString();
	if(!value["IsProxyLatestVersion"].isNull())
		isProxyLatestVersion_ = value["IsProxyLatestVersion"].asString() == "true";
	if(!value["StorageType"].isNull())
		storageType_ = value["StorageType"].asString();
	if(!value["ServerlessType"].isNull())
		serverlessType_ = value["ServerlessType"].asString();
	if(!value["StrictConsistency"].isNull())
		strictConsistency_ = value["StrictConsistency"].asString();
	if(!value["ProxyCpuCores"].isNull())
		proxyCpuCores_ = value["ProxyCpuCores"].asString();
	if(!value["ProxyStandardCpuCores"].isNull())
		proxyStandardCpuCores_ = value["ProxyStandardCpuCores"].asString();
	if(!value["ProxyType"].isNull())
		proxyType_ = value["ProxyType"].asString();
	if(!value["ProxyStatus"].isNull())
		proxyStatus_ = value["ProxyStatus"].asString();
	if(!value["FeatureHTAPSupported"].isNull())
		featureHTAPSupported_ = value["FeatureHTAPSupported"].asString();
	if(!value["ProxyServerlessType"].isNull())
		proxyServerlessType_ = value["ProxyServerlessType"].asString();
	if(!value["Architecture"].isNull())
		architecture_ = value["Architecture"].asString();
	if(!value["AiType"].isNull())
		aiType_ = value["AiType"].asString();
	if(!value["ProvisionedIops"].isNull())
		provisionedIops_ = value["ProvisionedIops"].asString();
	if(!value["HotStandbyHealthy"].isNull())
		hotStandbyHealthy_ = value["HotStandbyHealthy"].asString() == "true";
	if(!value["HotStandbyWhiteListSwitch"].isNull())
		hotStandbyWhiteListSwitch_ = value["HotStandbyWhiteListSwitch"].asString() == "true";
	if(!value["StorageTypeWhiteListSwitch"].isNull())
		storageTypeWhiteListSwitch_ = value["StorageTypeWhiteListSwitch"].asString() == "true";
	if(!value["AiFreeMode"].isNull())
		aiFreeMode_ = value["AiFreeMode"].asString();
	if(!value["AiCreatingTime"].isNull())
		aiCreatingTime_ = value["AiCreatingTime"].asString();
	if(!value["SupportInstantSwitchWithImci"].isNull())
		supportInstantSwitchWithImci_ = value["SupportInstantSwitchWithImci"].asString();
	if(!value["Orca"].isNull())
		orca_ = value["Orca"].asString();
	if(!value["SourceDBCluster"].isNull())
		sourceDBCluster_ = value["SourceDBCluster"].asString();
	if(!value["RestoreType"].isNull())
		restoreType_ = value["RestoreType"].asString();
	if(!value["RestoreDataPoint"].isNull())
		restoreDataPoint_ = value["RestoreDataPoint"].asString();
	if(!value["SourceRegionId"].isNull())
		sourceRegionId_ = value["SourceRegionId"].asString();
	if(!value["ImciAutoIndex"].isNull())
		imciAutoIndex_ = value["ImciAutoIndex"].asString();
	if(!value["BurstingEnabled"].isNull())
		burstingEnabled_ = value["BurstingEnabled"].asString();
	if(!value["RowCompression"].isNull())
		rowCompression_ = value["RowCompression"].asString();
	if(!value["ImperceptibleSwitch"].isNull())
		imperceptibleSwitch_ = value["ImperceptibleSwitch"].asString();

}

std::string DescribeDBClusterAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

long DescribeDBClusterAttributeResult::getCompressStorageUsed()const
{
	return compressStorageUsed_;
}

std::string DescribeDBClusterAttributeResult::getOrca()const
{
	return orca_;
}

std::string DescribeDBClusterAttributeResult::getStoragePayType()const
{
	return storagePayType_;
}

long DescribeDBClusterAttributeResult::getDataLevel1BackupChainSize()const
{
	return dataLevel1BackupChainSize_;
}

std::string DescribeDBClusterAttributeResult::getProxyStatus()const
{
	return proxyStatus_;
}

std::string DescribeDBClusterAttributeResult::getDBType()const
{
	return dBType_;
}

long DescribeDBClusterAttributeResult::getBlktagUsed()const
{
	return blktagUsed_;
}

std::string DescribeDBClusterAttributeResult::getStandbyHAMode()const
{
	return standbyHAMode_;
}

std::string DescribeDBClusterAttributeResult::getProxyStandardCpuCores()const
{
	return proxyStandardCpuCores_;
}

std::string DescribeDBClusterAttributeResult::getDBVersion()const
{
	return dBVersion_;
}

std::vector<DescribeDBClusterAttributeResult::DBNode> DescribeDBClusterAttributeResult::getDBNodes()const
{
	return dBNodes_;
}

std::string DescribeDBClusterAttributeResult::getImciAutoIndex()const
{
	return imciAutoIndex_;
}

std::string DescribeDBClusterAttributeResult::getFeatureHTAPSupported()const
{
	return featureHTAPSupported_;
}

std::vector<DescribeDBClusterAttributeResult::Tag> DescribeDBClusterAttributeResult::getTags()const
{
	return tags_;
}

std::string DescribeDBClusterAttributeResult::getEngine()const
{
	return engine_;
}

std::string DescribeDBClusterAttributeResult::getStorageType()const
{
	return storageType_;
}

std::string DescribeDBClusterAttributeResult::getArchitecture()const
{
	return architecture_;
}

std::string DescribeDBClusterAttributeResult::getVPCId()const
{
	return vPCId_;
}

std::string DescribeDBClusterAttributeResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string DescribeDBClusterAttributeResult::getDBClusterDescription()const
{
	return dBClusterDescription_;
}

std::string DescribeDBClusterAttributeResult::getExpired()const
{
	return expired_;
}

std::string DescribeDBClusterAttributeResult::getPayType()const
{
	return payType_;
}

std::string DescribeDBClusterAttributeResult::getLockMode()const
{
	return lockMode_;
}

std::string DescribeDBClusterAttributeResult::getProvisionedIops()const
{
	return provisionedIops_;
}

long DescribeDBClusterAttributeResult::getStorageUsed()const
{
	return storageUsed_;
}

long DescribeDBClusterAttributeResult::getInodeTotal()const
{
	return inodeTotal_;
}

std::string DescribeDBClusterAttributeResult::getRestoreDataPoint()const
{
	return restoreDataPoint_;
}

std::string DescribeDBClusterAttributeResult::getCompressStorageMode()const
{
	return compressStorageMode_;
}

std::string DescribeDBClusterAttributeResult::getDBVersionStatus()const
{
	return dBVersionStatus_;
}

std::string DescribeDBClusterAttributeResult::getProxyServerlessType()const
{
	return proxyServerlessType_;
}

std::string DescribeDBClusterAttributeResult::getCreationTime()const
{
	return creationTime_;
}

std::string DescribeDBClusterAttributeResult::getImperceptibleSwitch()const
{
	return imperceptibleSwitch_;
}

std::string DescribeDBClusterAttributeResult::getProxyType()const
{
	return proxyType_;
}

std::string DescribeDBClusterAttributeResult::getExpireTime()const
{
	return expireTime_;
}

int DescribeDBClusterAttributeResult::getDeletionLock()const
{
	return deletionLock_;
}

std::string DescribeDBClusterAttributeResult::getCategory()const
{
	return category_;
}

std::string DescribeDBClusterAttributeResult::getAiCreatingTime()const
{
	return aiCreatingTime_;
}

bool DescribeDBClusterAttributeResult::getStorageTypeWhiteListSwitch()const
{
	return storageTypeWhiteListSwitch_;
}

std::string DescribeDBClusterAttributeResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeDBClusterAttributeResult::getHotStandbyCluster()const
{
	return hotStandbyCluster_;
}

std::string DescribeDBClusterAttributeResult::getDeployUnit()const
{
	return deployUnit_;
}

std::string DescribeDBClusterAttributeResult::getAiFreeMode()const
{
	return aiFreeMode_;
}

std::string DescribeDBClusterAttributeResult::getDBClusterNetworkType()const
{
	return dBClusterNetworkType_;
}

bool DescribeDBClusterAttributeResult::getIsLatestVersion()const
{
	return isLatestVersion_;
}

std::string DescribeDBClusterAttributeResult::getSourceRegionId()const
{
	return sourceRegionId_;
}

long DescribeDBClusterAttributeResult::getStorageMax()const
{
	return storageMax_;
}

std::string DescribeDBClusterAttributeResult::getZoneIds()const
{
	return zoneIds_;
}

bool DescribeDBClusterAttributeResult::getHotStandbyWhiteListSwitch()const
{
	return hotStandbyWhiteListSwitch_;
}

long DescribeDBClusterAttributeResult::getInodeUsed()const
{
	return inodeUsed_;
}

std::string DescribeDBClusterAttributeResult::getRestoreType()const
{
	return restoreType_;
}

std::string DescribeDBClusterAttributeResult::getMaintainTime()const
{
	return maintainTime_;
}

std::string DescribeDBClusterAttributeResult::getBurstingEnabled()const
{
	return burstingEnabled_;
}

std::string DescribeDBClusterAttributeResult::getHotStandbyClusterStatus()const
{
	return hotStandbyClusterStatus_;
}

long DescribeDBClusterAttributeResult::getBlktagTotal()const
{
	return blktagTotal_;
}

std::string DescribeDBClusterAttributeResult::getDataSyncMode()const
{
	return dataSyncMode_;
}

std::string DescribeDBClusterAttributeResult::getSourceDBCluster()const
{
	return sourceDBCluster_;
}

std::string DescribeDBClusterAttributeResult::getDBClusterStatus()const
{
	return dBClusterStatus_;
}

std::string DescribeDBClusterAttributeResult::getProxyCpuCores()const
{
	return proxyCpuCores_;
}

std::string DescribeDBClusterAttributeResult::getStrictConsistency()const
{
	return strictConsistency_;
}

bool DescribeDBClusterAttributeResult::getIsProxyLatestVersion()const
{
	return isProxyLatestVersion_;
}

long DescribeDBClusterAttributeResult::getStorageSpace()const
{
	return storageSpace_;
}

std::string DescribeDBClusterAttributeResult::getServerlessType()const
{
	return serverlessType_;
}

std::string DescribeDBClusterAttributeResult::getSubCategory()const
{
	return subCategory_;
}

std::string DescribeDBClusterAttributeResult::getAiType()const
{
	return aiType_;
}

bool DescribeDBClusterAttributeResult::getHasCompleteStandbyRes()const
{
	return hasCompleteStandbyRes_;
}

std::string DescribeDBClusterAttributeResult::getSupportInstantSwitchWithImci()const
{
	return supportInstantSwitchWithImci_;
}

DescribeDBClusterAttributeResult::RelatedAPInstance DescribeDBClusterAttributeResult::getRelatedAPInstance()const
{
	return relatedAPInstance_;
}

long DescribeDBClusterAttributeResult::getSQLSize()const
{
	return sQLSize_;
}

std::string DescribeDBClusterAttributeResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeDBClusterAttributeResult::getRowCompression()const
{
	return rowCompression_;
}

bool DescribeDBClusterAttributeResult::getHotStandbyHealthy()const
{
	return hotStandbyHealthy_;
}

