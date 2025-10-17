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

#include <alibabacloud/polardb/model/DescribeDbClusterAttributeZonalResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDbClusterAttributeZonalResult::DescribeDbClusterAttributeZonalResult() :
	ServiceResult()
{}

DescribeDbClusterAttributeZonalResult::DescribeDbClusterAttributeZonalResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDbClusterAttributeZonalResult::~DescribeDbClusterAttributeZonalResult()
{}

void DescribeDbClusterAttributeZonalResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBNodesNode = value["DBNodes"]["DBNode"];
	for (auto valueDBNodesDBNode : allDBNodesNode)
	{
		DBNode dBNodesObject;
		if(!valueDBNodesDBNode["DBNodeStatus"].isNull())
			dBNodesObject.dBNodeStatus = valueDBNodesDBNode["DBNodeStatus"].asString();
		if(!valueDBNodesDBNode["SubGroupDescription"].isNull())
			dBNodesObject.subGroupDescription = valueDBNodesDBNode["SubGroupDescription"].asString();
		if(!valueDBNodesDBNode["AddedCpuCores"].isNull())
			dBNodesObject.addedCpuCores = valueDBNodesDBNode["AddedCpuCores"].asString();
		if(!valueDBNodesDBNode["Orca"].isNull())
			dBNodesObject.orca = valueDBNodesDBNode["Orca"].asString();
		if(!valueDBNodesDBNode["DBNodeRole"].isNull())
			dBNodesObject.dBNodeRole = valueDBNodesDBNode["DBNodeRole"].asString();
		if(!valueDBNodesDBNode["SubCluster"].isNull())
			dBNodesObject.subCluster = valueDBNodesDBNode["SubCluster"].asString();
		if(!valueDBNodesDBNode["OsVersion"].isNull())
			dBNodesObject.osVersion = valueDBNodesDBNode["OsVersion"].asString();
		if(!valueDBNodesDBNode["SupportMemPool"].isNull())
			dBNodesObject.supportMemPool = valueDBNodesDBNode["SupportMemPool"].asString();
		if(!valueDBNodesDBNode["ImciSwitch"].isNull())
			dBNodesObject.imciSwitch = valueDBNodesDBNode["ImciSwitch"].asString();
		if(!valueDBNodesDBNode["DBNodeId"].isNull())
			dBNodesObject.dBNodeId = valueDBNodesDBNode["DBNodeId"].asString();
		if(!valueDBNodesDBNode["RemoteMemorySize"].isNull())
			dBNodesObject.remoteMemorySize = valueDBNodesDBNode["RemoteMemorySize"].asString();
		if(!valueDBNodesDBNode["BlktagUsed"].isNull())
			dBNodesObject.blktagUsed = std::stol(valueDBNodesDBNode["BlktagUsed"].asString());
		if(!valueDBNodesDBNode["SubGroupType"].isNull())
			dBNodesObject.subGroupType = valueDBNodesDBNode["SubGroupType"].asString();
		if(!valueDBNodesDBNode["Tair"].isNull())
			dBNodesObject.tair = valueDBNodesDBNode["Tair"].asString();
		if(!valueDBNodesDBNode["StorageMax"].isNull())
			dBNodesObject.storageMax = std::stol(valueDBNodesDBNode["StorageMax"].asString());
		if(!valueDBNodesDBNode["MultiMasterLocalStandby"].isNull())
			dBNodesObject.multiMasterLocalStandby = valueDBNodesDBNode["MultiMasterLocalStandby"].asString();
		if(!valueDBNodesDBNode["MultiMasterPrimaryNode"].isNull())
			dBNodesObject.multiMasterPrimaryNode = valueDBNodesDBNode["MultiMasterPrimaryNode"].asString();
		if(!valueDBNodesDBNode["SccMode"].isNull())
			dBNodesObject.sccMode = valueDBNodesDBNode["SccMode"].asString();
		if(!valueDBNodesDBNode["IsPrimaryCN"].isNull())
			dBNodesObject.isPrimaryCN = valueDBNodesDBNode["IsPrimaryCN"].asString() == "true";
		if(!valueDBNodesDBNode["StandbyZoneIds"].isNull())
			dBNodesObject.standbyZoneIds = valueDBNodesDBNode["StandbyZoneIds"].asString();
		if(!valueDBNodesDBNode["InodeUsed"].isNull())
			dBNodesObject.inodeUsed = std::stol(valueDBNodesDBNode["InodeUsed"].asString());
		if(!valueDBNodesDBNode["FailoverPriority"].isNull())
			dBNodesObject.failoverPriority = std::stoi(valueDBNodesDBNode["FailoverPriority"].asString());
		if(!valueDBNodesDBNode["ServerWeight"].isNull())
			dBNodesObject.serverWeight = valueDBNodesDBNode["ServerWeight"].asString();
		if(!valueDBNodesDBNode["DBNodeDescription"].isNull())
			dBNodesObject.dBNodeDescription = valueDBNodesDBNode["DBNodeDescription"].asString();
		if(!valueDBNodesDBNode["MemorySize"].isNull())
			dBNodesObject.memorySize = valueDBNodesDBNode["MemorySize"].asString();
		if(!valueDBNodesDBNode["BlktagTotal"].isNull())
			dBNodesObject.blktagTotal = std::stol(valueDBNodesDBNode["BlktagTotal"].asString());
		if(!valueDBNodesDBNode["MirrorInsName"].isNull())
			dBNodesObject.mirrorInsName = valueDBNodesDBNode["MirrorInsName"].asString();
		if(!valueDBNodesDBNode["ZoneId"].isNull())
			dBNodesObject.zoneId = valueDBNodesDBNode["ZoneId"].asString();
		if(!valueDBNodesDBNode["MaxConnections"].isNull())
			dBNodesObject.maxConnections = std::stoi(valueDBNodesDBNode["MaxConnections"].asString());
		if(!valueDBNodesDBNode["Architecture"].isNull())
			dBNodesObject.architecture = valueDBNodesDBNode["Architecture"].asString();
		if(!valueDBNodesDBNode["SubGroupName"].isNull())
			dBNodesObject.subGroupName = valueDBNodesDBNode["SubGroupName"].asString();
		if(!valueDBNodesDBNode["MaxIOPS"].isNull())
			dBNodesObject.maxIOPS = std::stoi(valueDBNodesDBNode["MaxIOPS"].asString());
		if(!valueDBNodesDBNode["DBNodeClass"].isNull())
			dBNodesObject.dBNodeClass = valueDBNodesDBNode["DBNodeClass"].asString();
		if(!valueDBNodesDBNode["StorageUsed"].isNull())
			dBNodesObject.storageUsed = std::stol(valueDBNodesDBNode["StorageUsed"].asString());
		if(!valueDBNodesDBNode["InodeTotal"].isNull())
			dBNodesObject.inodeTotal = std::stol(valueDBNodesDBNode["InodeTotal"].asString());
		if(!valueDBNodesDBNode["ServerlessType"].isNull())
			dBNodesObject.serverlessType = valueDBNodesDBNode["ServerlessType"].asString();
		if(!valueDBNodesDBNode["CreationTime"].isNull())
			dBNodesObject.creationTime = valueDBNodesDBNode["CreationTime"].asString();
		if(!valueDBNodesDBNode["CpuCores"].isNull())
			dBNodesObject.cpuCores = valueDBNodesDBNode["CpuCores"].asString();
		if(!valueDBNodesDBNode["MasterId"].isNull())
			dBNodesObject.masterId = valueDBNodesDBNode["MasterId"].asString();
		if(!valueDBNodesDBNode["HotReplicaMode"].isNull())
			dBNodesObject.hotReplicaMode = valueDBNodesDBNode["HotReplicaMode"].asString();
		dBNodes_.push_back(dBNodesObject);
	}
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["Value"].isNull())
			tagsObject.value = valueTagsTag["Value"].asString();
		if(!valueTagsTag["Key"].isNull())
			tagsObject.key = valueTagsTag["Key"].asString();
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
	if(!value["OsVersion"].isNull())
		osVersion_ = value["OsVersion"].asString();
	if(!value["AutoUpgradeMinorVersion"].isNull())
		autoUpgradeMinorVersion_ = value["AutoUpgradeMinorVersion"].asString();
	if(!value["BurstingEnabled"].isNull())
		burstingEnabled_ = value["BurstingEnabled"].asString();
	if(!value["RowCompression"].isNull())
		rowCompression_ = value["RowCompression"].asString();
	if(!value["ImperceptibleSwitch"].isNull())
		imperceptibleSwitch_ = value["ImperceptibleSwitch"].asString();
	if(!value["CnNodeCount"].isNull())
		cnNodeCount_ = std::stoi(value["CnNodeCount"].asString());
	if(!value["DnNodeCount"].isNull())
		dnNodeCount_ = std::stoi(value["DnNodeCount"].asString());
	if(!value["DocumentDB"].isNull())
		documentDB_ = value["DocumentDB"].asString();
	if(!value["BackupDowngradeLevel"].isNull())
		backupDowngradeLevel_ = value["BackupDowngradeLevel"].asString();
	if(!value["RelativeAICluster"].isNull())
		relativeAICluster_ = value["RelativeAICluster"].asString();
	if(!value["DynamoDB"].isNull())
		dynamoDB_ = value["DynamoDB"].asString();
	if(!value["DBClusterClass"].isNull())
		dBClusterClass_ = value["DBClusterClass"].asString();

}

std::string DescribeDbClusterAttributeZonalResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

long DescribeDbClusterAttributeZonalResult::getCompressStorageUsed()const
{
	return compressStorageUsed_;
}

std::string DescribeDbClusterAttributeZonalResult::getOrca()const
{
	return orca_;
}

std::string DescribeDbClusterAttributeZonalResult::getStoragePayType()const
{
	return storagePayType_;
}

long DescribeDbClusterAttributeZonalResult::getDataLevel1BackupChainSize()const
{
	return dataLevel1BackupChainSize_;
}

std::string DescribeDbClusterAttributeZonalResult::getProxyStatus()const
{
	return proxyStatus_;
}

std::string DescribeDbClusterAttributeZonalResult::getDBType()const
{
	return dBType_;
}

long DescribeDbClusterAttributeZonalResult::getBlktagUsed()const
{
	return blktagUsed_;
}

std::string DescribeDbClusterAttributeZonalResult::getStandbyHAMode()const
{
	return standbyHAMode_;
}

std::string DescribeDbClusterAttributeZonalResult::getProxyStandardCpuCores()const
{
	return proxyStandardCpuCores_;
}

std::string DescribeDbClusterAttributeZonalResult::getDBVersion()const
{
	return dBVersion_;
}

std::vector<DescribeDbClusterAttributeZonalResult::DBNode> DescribeDbClusterAttributeZonalResult::getDBNodes()const
{
	return dBNodes_;
}

std::string DescribeDbClusterAttributeZonalResult::getAutoUpgradeMinorVersion()const
{
	return autoUpgradeMinorVersion_;
}

std::string DescribeDbClusterAttributeZonalResult::getImciAutoIndex()const
{
	return imciAutoIndex_;
}

std::string DescribeDbClusterAttributeZonalResult::getFeatureHTAPSupported()const
{
	return featureHTAPSupported_;
}

std::vector<DescribeDbClusterAttributeZonalResult::Tag> DescribeDbClusterAttributeZonalResult::getTags()const
{
	return tags_;
}

std::string DescribeDbClusterAttributeZonalResult::getEngine()const
{
	return engine_;
}

std::string DescribeDbClusterAttributeZonalResult::getStorageType()const
{
	return storageType_;
}

std::string DescribeDbClusterAttributeZonalResult::getArchitecture()const
{
	return architecture_;
}

std::string DescribeDbClusterAttributeZonalResult::getVPCId()const
{
	return vPCId_;
}

std::string DescribeDbClusterAttributeZonalResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string DescribeDbClusterAttributeZonalResult::getDBClusterDescription()const
{
	return dBClusterDescription_;
}

std::string DescribeDbClusterAttributeZonalResult::getDynamoDB()const
{
	return dynamoDB_;
}

std::string DescribeDbClusterAttributeZonalResult::getExpired()const
{
	return expired_;
}

std::string DescribeDbClusterAttributeZonalResult::getPayType()const
{
	return payType_;
}

std::string DescribeDbClusterAttributeZonalResult::getLockMode()const
{
	return lockMode_;
}

std::string DescribeDbClusterAttributeZonalResult::getProvisionedIops()const
{
	return provisionedIops_;
}

long DescribeDbClusterAttributeZonalResult::getStorageUsed()const
{
	return storageUsed_;
}

long DescribeDbClusterAttributeZonalResult::getInodeTotal()const
{
	return inodeTotal_;
}

std::string DescribeDbClusterAttributeZonalResult::getRestoreDataPoint()const
{
	return restoreDataPoint_;
}

std::string DescribeDbClusterAttributeZonalResult::getCompressStorageMode()const
{
	return compressStorageMode_;
}

std::string DescribeDbClusterAttributeZonalResult::getDBVersionStatus()const
{
	return dBVersionStatus_;
}

std::string DescribeDbClusterAttributeZonalResult::getProxyServerlessType()const
{
	return proxyServerlessType_;
}

std::string DescribeDbClusterAttributeZonalResult::getCreationTime()const
{
	return creationTime_;
}

std::string DescribeDbClusterAttributeZonalResult::getImperceptibleSwitch()const
{
	return imperceptibleSwitch_;
}

std::string DescribeDbClusterAttributeZonalResult::getProxyType()const
{
	return proxyType_;
}

std::string DescribeDbClusterAttributeZonalResult::getExpireTime()const
{
	return expireTime_;
}

std::string DescribeDbClusterAttributeZonalResult::getRelativeAICluster()const
{
	return relativeAICluster_;
}

int DescribeDbClusterAttributeZonalResult::getDeletionLock()const
{
	return deletionLock_;
}

std::string DescribeDbClusterAttributeZonalResult::getCategory()const
{
	return category_;
}

std::string DescribeDbClusterAttributeZonalResult::getAiCreatingTime()const
{
	return aiCreatingTime_;
}

bool DescribeDbClusterAttributeZonalResult::getStorageTypeWhiteListSwitch()const
{
	return storageTypeWhiteListSwitch_;
}

std::string DescribeDbClusterAttributeZonalResult::getOsVersion()const
{
	return osVersion_;
}

std::string DescribeDbClusterAttributeZonalResult::getDocumentDB()const
{
	return documentDB_;
}

std::string DescribeDbClusterAttributeZonalResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeDbClusterAttributeZonalResult::getHotStandbyCluster()const
{
	return hotStandbyCluster_;
}

std::string DescribeDbClusterAttributeZonalResult::getDeployUnit()const
{
	return deployUnit_;
}

std::string DescribeDbClusterAttributeZonalResult::getAiFreeMode()const
{
	return aiFreeMode_;
}

std::string DescribeDbClusterAttributeZonalResult::getDBClusterNetworkType()const
{
	return dBClusterNetworkType_;
}

bool DescribeDbClusterAttributeZonalResult::getIsLatestVersion()const
{
	return isLatestVersion_;
}

std::string DescribeDbClusterAttributeZonalResult::getSourceRegionId()const
{
	return sourceRegionId_;
}

long DescribeDbClusterAttributeZonalResult::getStorageMax()const
{
	return storageMax_;
}

int DescribeDbClusterAttributeZonalResult::getDnNodeCount()const
{
	return dnNodeCount_;
}

std::string DescribeDbClusterAttributeZonalResult::getZoneIds()const
{
	return zoneIds_;
}

bool DescribeDbClusterAttributeZonalResult::getHotStandbyWhiteListSwitch()const
{
	return hotStandbyWhiteListSwitch_;
}

long DescribeDbClusterAttributeZonalResult::getInodeUsed()const
{
	return inodeUsed_;
}

std::string DescribeDbClusterAttributeZonalResult::getRestoreType()const
{
	return restoreType_;
}

std::string DescribeDbClusterAttributeZonalResult::getMaintainTime()const
{
	return maintainTime_;
}

std::string DescribeDbClusterAttributeZonalResult::getBurstingEnabled()const
{
	return burstingEnabled_;
}

std::string DescribeDbClusterAttributeZonalResult::getHotStandbyClusterStatus()const
{
	return hotStandbyClusterStatus_;
}

long DescribeDbClusterAttributeZonalResult::getBlktagTotal()const
{
	return blktagTotal_;
}

std::string DescribeDbClusterAttributeZonalResult::getDataSyncMode()const
{
	return dataSyncMode_;
}

std::string DescribeDbClusterAttributeZonalResult::getSourceDBCluster()const
{
	return sourceDBCluster_;
}

std::string DescribeDbClusterAttributeZonalResult::getDBClusterStatus()const
{
	return dBClusterStatus_;
}

std::string DescribeDbClusterAttributeZonalResult::getProxyCpuCores()const
{
	return proxyCpuCores_;
}

std::string DescribeDbClusterAttributeZonalResult::getStrictConsistency()const
{
	return strictConsistency_;
}

int DescribeDbClusterAttributeZonalResult::getCnNodeCount()const
{
	return cnNodeCount_;
}

bool DescribeDbClusterAttributeZonalResult::getIsProxyLatestVersion()const
{
	return isProxyLatestVersion_;
}

long DescribeDbClusterAttributeZonalResult::getStorageSpace()const
{
	return storageSpace_;
}

std::string DescribeDbClusterAttributeZonalResult::getServerlessType()const
{
	return serverlessType_;
}

std::string DescribeDbClusterAttributeZonalResult::getSubCategory()const
{
	return subCategory_;
}

std::string DescribeDbClusterAttributeZonalResult::getAiType()const
{
	return aiType_;
}

bool DescribeDbClusterAttributeZonalResult::getHasCompleteStandbyRes()const
{
	return hasCompleteStandbyRes_;
}

std::string DescribeDbClusterAttributeZonalResult::getSupportInstantSwitchWithImci()const
{
	return supportInstantSwitchWithImci_;
}

DescribeDbClusterAttributeZonalResult::RelatedAPInstance DescribeDbClusterAttributeZonalResult::getRelatedAPInstance()const
{
	return relatedAPInstance_;
}

long DescribeDbClusterAttributeZonalResult::getSQLSize()const
{
	return sQLSize_;
}

std::string DescribeDbClusterAttributeZonalResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeDbClusterAttributeZonalResult::getBackupDowngradeLevel()const
{
	return backupDowngradeLevel_;
}

std::string DescribeDbClusterAttributeZonalResult::getRowCompression()const
{
	return rowCompression_;
}

std::string DescribeDbClusterAttributeZonalResult::getDBClusterClass()const
{
	return dBClusterClass_;
}

bool DescribeDbClusterAttributeZonalResult::getHotStandbyHealthy()const
{
	return hotStandbyHealthy_;
}

