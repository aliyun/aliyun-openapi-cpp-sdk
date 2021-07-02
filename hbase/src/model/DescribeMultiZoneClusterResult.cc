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

#include <alibabacloud/hbase/model/DescribeMultiZoneClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeMultiZoneClusterResult::DescribeMultiZoneClusterResult() :
	ServiceResult()
{}

DescribeMultiZoneClusterResult::DescribeMultiZoneClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMultiZoneClusterResult::~DescribeMultiZoneClusterResult()
{}

void DescribeMultiZoneClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMultiZoneInstanceModelsNode = value["MultiZoneInstanceModels"]["MultiZoneInstanceModel"];
	for (auto valueMultiZoneInstanceModelsMultiZoneInstanceModel : allMultiZoneInstanceModelsNode)
	{
		MultiZoneInstanceModel multiZoneInstanceModelsObject;
		if(!valueMultiZoneInstanceModelsMultiZoneInstanceModel["InsName"].isNull())
			multiZoneInstanceModelsObject.insName = valueMultiZoneInstanceModelsMultiZoneInstanceModel["InsName"].asString();
		if(!valueMultiZoneInstanceModelsMultiZoneInstanceModel["IsLatestVersion"].isNull())
			multiZoneInstanceModelsObject.isLatestVersion = valueMultiZoneInstanceModelsMultiZoneInstanceModel["IsLatestVersion"].asString() == "true";
		if(!valueMultiZoneInstanceModelsMultiZoneInstanceModel["MinorVersion"].isNull())
			multiZoneInstanceModelsObject.minorVersion = valueMultiZoneInstanceModelsMultiZoneInstanceModel["MinorVersion"].asString();
		if(!valueMultiZoneInstanceModelsMultiZoneInstanceModel["Status"].isNull())
			multiZoneInstanceModelsObject.status = valueMultiZoneInstanceModelsMultiZoneInstanceModel["Status"].asString();
		if(!valueMultiZoneInstanceModelsMultiZoneInstanceModel["Role"].isNull())
			multiZoneInstanceModelsObject.role = valueMultiZoneInstanceModelsMultiZoneInstanceModel["Role"].asString();
		multiZoneInstanceModels_.push_back(multiZoneInstanceModelsObject);
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
	if(!value["AutoRenewal"].isNull())
		autoRenewal_ = value["AutoRenewal"].asString() == "true";
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["ClusterName"].isNull())
		clusterName_ = value["ClusterName"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["CreatedTimeUTC"].isNull())
		createdTimeUTC_ = value["CreatedTimeUTC"].asString();
	if(!value["Duration"].isNull())
		duration_ = std::stoi(value["Duration"].asString());
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["ExpireTimeUTC"].isNull())
		expireTimeUTC_ = value["ExpireTimeUTC"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["InstanceName"].isNull())
		instanceName_ = value["InstanceName"].asString();
	if(!value["IsDeletionProtection"].isNull())
		isDeletionProtection_ = value["IsDeletionProtection"].asString() == "true";
	if(!value["MaintainEndTime"].isNull())
		maintainEndTime_ = value["MaintainEndTime"].asString();
	if(!value["MaintainStartTime"].isNull())
		maintainStartTime_ = value["MaintainStartTime"].asString();
	if(!value["MajorVersion"].isNull())
		majorVersion_ = value["MajorVersion"].asString();
	if(!value["MasterDiskSize"].isNull())
		masterDiskSize_ = std::stoi(value["MasterDiskSize"].asString());
	if(!value["MasterDiskType"].isNull())
		masterDiskType_ = value["MasterDiskType"].asString();
	if(!value["MasterInstanceType"].isNull())
		masterInstanceType_ = value["MasterInstanceType"].asString();
	if(!value["MasterNodeCount"].isNull())
		masterNodeCount_ = std::stoi(value["MasterNodeCount"].asString());
	if(!value["CoreDiskCount"].isNull())
		coreDiskCount_ = value["CoreDiskCount"].asString();
	if(!value["CoreDiskSize"].isNull())
		coreDiskSize_ = std::stoi(value["CoreDiskSize"].asString());
	if(!value["CoreDiskType"].isNull())
		coreDiskType_ = value["CoreDiskType"].asString();
	if(!value["CoreInstanceType"].isNull())
		coreInstanceType_ = value["CoreInstanceType"].asString();
	if(!value["CoreNodeCount"].isNull())
		coreNodeCount_ = std::stoi(value["CoreNodeCount"].asString());
	if(!value["LogDiskCount"].isNull())
		logDiskCount_ = value["LogDiskCount"].asString();
	if(!value["LogDiskSize"].isNull())
		logDiskSize_ = std::stoi(value["LogDiskSize"].asString());
	if(!value["LogDiskType"].isNull())
		logDiskType_ = value["LogDiskType"].asString();
	if(!value["LogInstanceType"].isNull())
		logInstanceType_ = value["LogInstanceType"].asString();
	if(!value["LogNodeCount"].isNull())
		logNodeCount_ = std::stoi(value["LogNodeCount"].asString());
	if(!value["ModuleId"].isNull())
		moduleId_ = std::stoi(value["ModuleId"].asString());
	if(!value["ModuleStackVersion"].isNull())
		moduleStackVersion_ = value["ModuleStackVersion"].asString();
	if(!value["NetworkType"].isNull())
		networkType_ = value["NetworkType"].asString();
	if(!value["ParentId"].isNull())
		parentId_ = value["ParentId"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["MultiZoneCombination"].isNull())
		multiZoneCombination_ = value["MultiZoneCombination"].asString();
	if(!value["PrimaryZoneId"].isNull())
		primaryZoneId_ = value["PrimaryZoneId"].asString();
	if(!value["PrimaryVSwitchIds"].isNull())
		primaryVSwitchIds_ = value["PrimaryVSwitchIds"].asString();
	if(!value["StandbyZoneId"].isNull())
		standbyZoneId_ = value["StandbyZoneId"].asString();
	if(!value["StandbyVSwitchIds"].isNull())
		standbyVSwitchIds_ = value["StandbyVSwitchIds"].asString();
	if(!value["ArbiterZoneId"].isNull())
		arbiterZoneId_ = value["ArbiterZoneId"].asString();
	if(!value["ArbiterVSwitchIds"].isNull())
		arbiterVSwitchIds_ = value["ArbiterVSwitchIds"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["EncryptionType"].isNull())
		encryptionType_ = value["EncryptionType"].asString();
	if(!value["EncryptionKey"].isNull())
		encryptionKey_ = value["EncryptionKey"].asString();

}

std::string DescribeMultiZoneClusterResult::getModuleStackVersion()const
{
	return moduleStackVersion_;
}

std::string DescribeMultiZoneClusterResult::getStandbyZoneId()const
{
	return standbyZoneId_;
}

std::string DescribeMultiZoneClusterResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeMultiZoneClusterResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

int DescribeMultiZoneClusterResult::getModuleId()const
{
	return moduleId_;
}

std::string DescribeMultiZoneClusterResult::getStandbyVSwitchIds()const
{
	return standbyVSwitchIds_;
}

std::vector<DescribeMultiZoneClusterResult::Tag> DescribeMultiZoneClusterResult::getTags()const
{
	return tags_;
}

std::string DescribeMultiZoneClusterResult::getEngine()const
{
	return engine_;
}

std::string DescribeMultiZoneClusterResult::getStatus()const
{
	return status_;
}

std::string DescribeMultiZoneClusterResult::getEncryptionType()const
{
	return encryptionType_;
}

std::string DescribeMultiZoneClusterResult::getExpireTimeUTC()const
{
	return expireTimeUTC_;
}

int DescribeMultiZoneClusterResult::getMasterDiskSize()const
{
	return masterDiskSize_;
}

std::string DescribeMultiZoneClusterResult::getInstanceId()const
{
	return instanceId_;
}

int DescribeMultiZoneClusterResult::getDuration()const
{
	return duration_;
}

std::string DescribeMultiZoneClusterResult::getPayType()const
{
	return payType_;
}

std::string DescribeMultiZoneClusterResult::getInstanceName()const
{
	return instanceName_;
}

int DescribeMultiZoneClusterResult::getMasterNodeCount()const
{
	return masterNodeCount_;
}

bool DescribeMultiZoneClusterResult::getAutoRenewal()const
{
	return autoRenewal_;
}

std::string DescribeMultiZoneClusterResult::getVpcId()const
{
	return vpcId_;
}

std::string DescribeMultiZoneClusterResult::getCoreDiskType()const
{
	return coreDiskType_;
}

std::string DescribeMultiZoneClusterResult::getExpireTime()const
{
	return expireTime_;
}

std::string DescribeMultiZoneClusterResult::getEncryptionKey()const
{
	return encryptionKey_;
}

std::string DescribeMultiZoneClusterResult::getMasterInstanceType()const
{
	return masterInstanceType_;
}

std::string DescribeMultiZoneClusterResult::getPrimaryVSwitchIds()const
{
	return primaryVSwitchIds_;
}

bool DescribeMultiZoneClusterResult::getIsDeletionProtection()const
{
	return isDeletionProtection_;
}

std::string DescribeMultiZoneClusterResult::getLogDiskCount()const
{
	return logDiskCount_;
}

int DescribeMultiZoneClusterResult::getLogDiskSize()const
{
	return logDiskSize_;
}

std::string DescribeMultiZoneClusterResult::getArbiterVSwitchIds()const
{
	return arbiterVSwitchIds_;
}

std::string DescribeMultiZoneClusterResult::getMaintainEndTime()const
{
	return maintainEndTime_;
}

std::string DescribeMultiZoneClusterResult::getNetworkType()const
{
	return networkType_;
}

std::string DescribeMultiZoneClusterResult::getCoreInstanceType()const
{
	return coreInstanceType_;
}

std::string DescribeMultiZoneClusterResult::getClusterName()const
{
	return clusterName_;
}

std::string DescribeMultiZoneClusterResult::getMasterDiskType()const
{
	return masterDiskType_;
}

std::string DescribeMultiZoneClusterResult::getMaintainStartTime()const
{
	return maintainStartTime_;
}

std::string DescribeMultiZoneClusterResult::getArbiterZoneId()const
{
	return arbiterZoneId_;
}

std::string DescribeMultiZoneClusterResult::getMajorVersion()const
{
	return majorVersion_;
}

std::string DescribeMultiZoneClusterResult::getCoreDiskCount()const
{
	return coreDiskCount_;
}

std::string DescribeMultiZoneClusterResult::getParentId()const
{
	return parentId_;
}

std::vector<DescribeMultiZoneClusterResult::MultiZoneInstanceModel> DescribeMultiZoneClusterResult::getMultiZoneInstanceModels()const
{
	return multiZoneInstanceModels_;
}

std::string DescribeMultiZoneClusterResult::getPrimaryZoneId()const
{
	return primaryZoneId_;
}

std::string DescribeMultiZoneClusterResult::getMultiZoneCombination()const
{
	return multiZoneCombination_;
}

std::string DescribeMultiZoneClusterResult::getClusterId()const
{
	return clusterId_;
}

int DescribeMultiZoneClusterResult::getCoreNodeCount()const
{
	return coreNodeCount_;
}

std::string DescribeMultiZoneClusterResult::getCreatedTimeUTC()const
{
	return createdTimeUTC_;
}

std::string DescribeMultiZoneClusterResult::getLogInstanceType()const
{
	return logInstanceType_;
}

int DescribeMultiZoneClusterResult::getLogNodeCount()const
{
	return logNodeCount_;
}

std::string DescribeMultiZoneClusterResult::getLogDiskType()const
{
	return logDiskType_;
}

std::string DescribeMultiZoneClusterResult::getRegionId()const
{
	return regionId_;
}

int DescribeMultiZoneClusterResult::getCoreDiskSize()const
{
	return coreDiskSize_;
}

