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

#include <alibabacloud/eflo-controller/model/DescribeNodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo_controller;
using namespace AlibabaCloud::Eflo_controller::Model;

DescribeNodeResult::DescribeNodeResult() :
	ServiceResult()
{}

DescribeNodeResult::DescribeNodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNodeResult::~DescribeNodeResult()
{}

void DescribeNodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNetworksNode = value["Networks"]["NetworksItem"];
	for (auto valueNetworksNetworksItem : allNetworksNode)
	{
		NetworksItem networksObject;
		if(!valueNetworksNetworksItem["BondName"].isNull())
			networksObject.bondName = valueNetworksNetworksItem["BondName"].asString();
		if(!valueNetworksNetworksItem["Ip"].isNull())
			networksObject.ip = valueNetworksNetworksItem["Ip"].asString();
		if(!valueNetworksNetworksItem["SubnetId"].isNull())
			networksObject.subnetId = valueNetworksNetworksItem["SubnetId"].asString();
		if(!valueNetworksNetworksItem["VpdId"].isNull())
			networksObject.vpdId = valueNetworksNetworksItem["VpdId"].asString();
		networks_.push_back(networksObject);
	}
	if(!value["NodeGroupName"].isNull())
		nodeGroupName_ = value["NodeGroupName"].asString();
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["ClusterName"].isNull())
		clusterName_ = value["ClusterName"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["NodeGroupId"].isNull())
		nodeGroupId_ = value["NodeGroupId"].asString();
	if(!value["Hostname"].isNull())
		hostname_ = value["Hostname"].asString();
	if(!value["ImageId"].isNull())
		imageId_ = value["ImageId"].asString();
	if(!value["MachineType"].isNull())
		machineType_ = value["MachineType"].asString();
	if(!value["NodeId"].isNull())
		nodeId_ = value["NodeId"].asString();
	if(!value["Sn"].isNull())
		sn_ = value["Sn"].asString();
	if(!value["OperatingState"].isNull())
		operatingState_ = value["OperatingState"].asString();
	if(!value["ExpiredTime"].isNull())
		expiredTime_ = value["ExpiredTime"].asString();

}

std::vector<DescribeNodeResult::NetworksItem> DescribeNodeResult::getNetworks()const
{
	return networks_;
}

std::string DescribeNodeResult::getNodeGroupName()const
{
	return nodeGroupName_;
}

std::string DescribeNodeResult::getZoneId()const
{
	return zoneId_;
}

std::string DescribeNodeResult::getClusterId()const
{
	return clusterId_;
}

std::string DescribeNodeResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeNodeResult::getHostname()const
{
	return hostname_;
}

std::string DescribeNodeResult::getMachineType()const
{
	return machineType_;
}

std::string DescribeNodeResult::getOperatingState()const
{
	return operatingState_;
}

std::string DescribeNodeResult::getNodeGroupId()const
{
	return nodeGroupId_;
}

std::string DescribeNodeResult::getExpiredTime()const
{
	return expiredTime_;
}

std::string DescribeNodeResult::getImageId()const
{
	return imageId_;
}

std::string DescribeNodeResult::getNodeId()const
{
	return nodeId_;
}

std::string DescribeNodeResult::getClusterName()const
{
	return clusterName_;
}

std::string DescribeNodeResult::getSn()const
{
	return sn_;
}

