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

#include <alibabacloud/polardb/model/DescribeAIDBClusterAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeAIDBClusterAttributeResult::DescribeAIDBClusterAttributeResult() :
	ServiceResult()
{}

DescribeAIDBClusterAttributeResult::DescribeAIDBClusterAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAIDBClusterAttributeResult::~DescribeAIDBClusterAttributeResult()
{}

void DescribeAIDBClusterAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBNodesNode = value["DBNodes"]["DBNode"];
	for (auto valueDBNodesDBNode : allDBNodesNode)
	{
		DBNode dBNodesObject;
		if(!valueDBNodesDBNode["DBNodeClass"].isNull())
			dBNodesObject.dBNodeClass = valueDBNodesDBNode["DBNodeClass"].asString();
		if(!valueDBNodesDBNode["CpuCores"].isNull())
			dBNodesObject.cpuCores = valueDBNodesDBNode["CpuCores"].asString();
		if(!valueDBNodesDBNode["MemorySize"].isNull())
			dBNodesObject.memorySize = valueDBNodesDBNode["MemorySize"].asString();
		if(!valueDBNodesDBNode["GPU"].isNull())
			dBNodesObject.gPU = valueDBNodesDBNode["GPU"].asString();
		if(!valueDBNodesDBNode["DBNodeId"].isNull())
			dBNodesObject.dBNodeId = valueDBNodesDBNode["DBNodeId"].asString();
		if(!valueDBNodesDBNode["DBNodeDescription"].isNull())
			dBNodesObject.dBNodeDescription = valueDBNodesDBNode["DBNodeDescription"].asString();
		if(!valueDBNodesDBNode["VSwitchId"].isNull())
			dBNodesObject.vSwitchId = valueDBNodesDBNode["VSwitchId"].asString();
		if(!valueDBNodesDBNode["VPCId"].isNull())
			dBNodesObject.vPCId = valueDBNodesDBNode["VPCId"].asString();
		if(!valueDBNodesDBNode["DBNodeStatus"].isNull())
			dBNodesObject.dBNodeStatus = valueDBNodesDBNode["DBNodeStatus"].asString();
		if(!valueDBNodesDBNode["ZoneId"].isNull())
			dBNodesObject.zoneId = valueDBNodesDBNode["ZoneId"].asString();
		if(!valueDBNodesDBNode["VNodeId"].isNull())
			dBNodesObject.vNodeId = valueDBNodesDBNode["VNodeId"].asString();
		if(!valueDBNodesDBNode["LinkIP"].isNull())
			dBNodesObject.linkIP = valueDBNodesDBNode["LinkIP"].asString();
		auto allChildVolumesNode = valueDBNodesDBNode["ChildVolumes"]["volumes"];
		for (auto valueDBNodesDBNodeChildVolumesvolumes : allChildVolumesNode)
		{
			DBNode::Volumes childVolumesObject;
			if(!valueDBNodesDBNodeChildVolumesvolumes["StorageType"].isNull())
				childVolumesObject.storageType = valueDBNodesDBNodeChildVolumesvolumes["StorageType"].asString();
			if(!valueDBNodesDBNodeChildVolumesvolumes["StorageCategory"].isNull())
				childVolumesObject.storageCategory = valueDBNodesDBNodeChildVolumesvolumes["StorageCategory"].asString();
			if(!valueDBNodesDBNodeChildVolumesvolumes["SizeGB"].isNull())
				childVolumesObject.sizeGB = valueDBNodesDBNodeChildVolumesvolumes["SizeGB"].asString();
			if(!valueDBNodesDBNodeChildVolumesvolumes["Name"].isNull())
				childVolumesObject.name = valueDBNodesDBNodeChildVolumesvolumes["Name"].asString();
			if(!valueDBNodesDBNodeChildVolumesvolumes["MountPath"].isNull())
				childVolumesObject.mountPath = valueDBNodesDBNodeChildVolumesvolumes["MountPath"].asString();
			dBNodesObject.childVolumes.push_back(childVolumesObject);
		}
		dBNodes_.push_back(dBNodesObject);
	}
	auto allVolumesNode = value["Volumes"]["VolumesItem"];
	for (auto valueVolumesVolumesItem : allVolumesNode)
	{
		VolumesItem volumesObject;
		if(!valueVolumesVolumesItem["StorageType"].isNull())
			volumesObject.storageType = valueVolumesVolumesItem["StorageType"].asString();
		if(!valueVolumesVolumesItem["StorageCategory"].isNull())
			volumesObject.storageCategory = valueVolumesVolumesItem["StorageCategory"].asString();
		if(!valueVolumesVolumesItem["Name"].isNull())
			volumesObject.name = valueVolumesVolumesItem["Name"].asString();
		if(!valueVolumesVolumesItem["SizeGB"].isNull())
			volumesObject.sizeGB = valueVolumesVolumesItem["SizeGB"].asString();
		if(!valueVolumesVolumesItem["MountPath"].isNull())
			volumesObject.mountPath = valueVolumesVolumesItem["MountPath"].asString();
		volumes_.push_back(volumesObject);
	}
	auto allEndpointListNode = value["EndpointList"]["EndpointListItem"];
	for (auto valueEndpointListEndpointListItem : allEndpointListNode)
	{
		EndpointListItem endpointListObject;
		auto allNetInfoItemsNode = valueEndpointListEndpointListItem["NetInfoItems"]["NetInfoItemsItem"];
		for (auto valueEndpointListEndpointListItemNetInfoItemsNetInfoItemsItem : allNetInfoItemsNode)
		{
			EndpointListItem::NetInfoItemsItem netInfoItemsObject;
			if(!valueEndpointListEndpointListItemNetInfoItemsNetInfoItemsItem["NetType"].isNull())
				netInfoItemsObject.netType = valueEndpointListEndpointListItemNetInfoItemsNetInfoItemsItem["NetType"].asString();
			if(!valueEndpointListEndpointListItemNetInfoItemsNetInfoItemsItem["ConnectionString"].isNull())
				netInfoItemsObject.connectionString = valueEndpointListEndpointListItemNetInfoItemsNetInfoItemsItem["ConnectionString"].asString();
			if(!valueEndpointListEndpointListItemNetInfoItemsNetInfoItemsItem["Port"].isNull())
				netInfoItemsObject.port = valueEndpointListEndpointListItemNetInfoItemsNetInfoItemsItem["Port"].asString();
			endpointListObject.netInfoItems.push_back(netInfoItemsObject);
		}
		endpointList_.push_back(endpointListObject);
	}
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["DBClusterStatus"].isNull())
		dBClusterStatus_ = value["DBClusterStatus"].asString();
	if(!value["DBClusterDescription"].isNull())
		dBClusterDescription_ = value["DBClusterDescription"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["VPCId"].isNull())
		vPCId_ = value["VPCId"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["InternalIp"].isNull())
		internalIp_ = value["InternalIp"].asString();
	if(!value["StorageType"].isNull())
		storageType_ = value["StorageType"].asString();
	if(!value["LockMode"].isNull())
		lockMode_ = value["LockMode"].asString();
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["Expired"].isNull())
		expired_ = value["Expired"].asString() == "true";
	if(!value["ZoneIds"].isNull())
		zoneIds_ = value["ZoneIds"].asString();
	if(!value["RunType"].isNull())
		runType_ = value["RunType"].asString();
	if(!value["KubeClusterId"].isNull())
		kubeClusterId_ = value["KubeClusterId"].asString();
	if(!value["DBVersion"].isNull())
		dBVersion_ = value["DBVersion"].asString();
	if(!value["AiNodeType"].isNull())
		aiNodeType_ = value["AiNodeType"].asString();
	if(!value["ModelName"].isNull())
		modelName_ = value["ModelName"].asString();
	if(!value["MaxQPM"].isNull())
		maxQPM_ = value["MaxQPM"].asString();
	if(!value["PublicIp"].isNull())
		publicIp_ = value["PublicIp"].asString();

}

std::string DescribeAIDBClusterAttributeResult::getAiNodeType()const
{
	return aiNodeType_;
}

std::string DescribeAIDBClusterAttributeResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeAIDBClusterAttributeResult::getDBVersion()const
{
	return dBVersion_;
}

std::vector<DescribeAIDBClusterAttributeResult::VolumesItem> DescribeAIDBClusterAttributeResult::getVolumes()const
{
	return volumes_;
}

std::vector<DescribeAIDBClusterAttributeResult::DBNode> DescribeAIDBClusterAttributeResult::getDBNodes()const
{
	return dBNodes_;
}

std::string DescribeAIDBClusterAttributeResult::getRunType()const
{
	return runType_;
}

std::string DescribeAIDBClusterAttributeResult::getZoneIds()const
{
	return zoneIds_;
}

std::string DescribeAIDBClusterAttributeResult::getInternalIp()const
{
	return internalIp_;
}

std::vector<DescribeAIDBClusterAttributeResult::EndpointListItem> DescribeAIDBClusterAttributeResult::getEndpointList()const
{
	return endpointList_;
}

std::string DescribeAIDBClusterAttributeResult::getKubeClusterId()const
{
	return kubeClusterId_;
}

std::string DescribeAIDBClusterAttributeResult::getStorageType()const
{
	return storageType_;
}

std::string DescribeAIDBClusterAttributeResult::getModelName()const
{
	return modelName_;
}

std::string DescribeAIDBClusterAttributeResult::getZoneId()const
{
	return zoneId_;
}

std::string DescribeAIDBClusterAttributeResult::getVPCId()const
{
	return vPCId_;
}

std::string DescribeAIDBClusterAttributeResult::getPublicIp()const
{
	return publicIp_;
}

std::string DescribeAIDBClusterAttributeResult::getDBClusterStatus()const
{
	return dBClusterStatus_;
}

std::string DescribeAIDBClusterAttributeResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string DescribeAIDBClusterAttributeResult::getDBClusterDescription()const
{
	return dBClusterDescription_;
}

bool DescribeAIDBClusterAttributeResult::getExpired()const
{
	return expired_;
}

std::string DescribeAIDBClusterAttributeResult::getLockMode()const
{
	return lockMode_;
}

std::string DescribeAIDBClusterAttributeResult::getPayType()const
{
	return payType_;
}

std::string DescribeAIDBClusterAttributeResult::getCreationTime()const
{
	return creationTime_;
}

std::string DescribeAIDBClusterAttributeResult::getMaxQPM()const
{
	return maxQPM_;
}

std::string DescribeAIDBClusterAttributeResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeAIDBClusterAttributeResult::getExpireTime()const
{
	return expireTime_;
}

